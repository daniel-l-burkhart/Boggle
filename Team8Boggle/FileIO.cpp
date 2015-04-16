#include "FileIO.h"
#using<system.dll>
#include "Trie.h"

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


/// <summary>
/// Initializes a new instance of the <see cref="FileIO"/> class.
/// </summary>
FileIO::FileIO()
{
	this->trie = gcnew Trie();
	String^ fileName = "dictionary.txt";

	OpenFileDialog^ failas = gcnew OpenFileDialog();
	failas->Filter = "Text Files|*.txt";
	if (failas->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		return;
	}

	String^ str = failas->FileName;
	StreamReader ^strm = gcnew StreamReader(str);
	try
	{
		//StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while ((str = strm->ReadLine()) != nullptr)
		{
			count++;
			this->trie->insert(str);
			Console::WriteLine("Success.");
		}
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e)){
			Console::WriteLine("file '{0}' not found", fileName);
		}
		else{
			Console::WriteLine("problem reading file '{0}'", fileName);
		}
	}
}

/// <summary>
/// Gets the trie.
/// </summary>
/// <returns></returns>
Trie^ FileIO::getTrie(){
	return this->trie;
}
