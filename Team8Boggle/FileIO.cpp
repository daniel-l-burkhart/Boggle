#include "FileIO.h"
#using<system.dll>
#include "Trie.h"
using namespace System;
using namespace System::IO;


FileIO::FileIO()
{
	this->trie = gcnew Trie();
	String^ fileName = "dictionary.txt";
	try
	{
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			this->trie->insert(str);
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
