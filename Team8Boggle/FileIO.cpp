#include "FileIO.h"
#using<system.dll>
#include "Trie.h"
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Runtime::InteropServices;


/// <summary>
/// Initializes a new instance of the <see cref="FileIO"/> class.
/// </summary>
FileIO::FileIO()
{
	this->trie = gcnew Trie();
	String^ fileName = "dictionary.txt";
	StreamReader ^strm = gcnew StreamReader(fileName);
	try
	{
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

void FileIO::SaveScores(array<Player^>^ players) {
	ofstream outputFile("scores.txt");
	int i = 0;
	while (i < 10) {
		if (players[i] != nullptr) {
			String^ s = players[i]->getName() + ":" + players[i]->getScore();
			IntPtr ip = Marshal::StringToHGlobalAnsi(s);
			const char* str = static_cast<const char*>(ip.ToPointer());

			outputFile << str << endl;
		}
		i++;
	}
	outputFile.close();
}

array<Player^>^ FileIO::LoadScores() {
	array<Player^>^ players = gcnew array<Player^>(10);
	try
	{
		StreamReader^ din = File::OpenText("scores.txt");
		String^ delimStr = " ,.:\t";
		String^ str;
		array<Char>^ delimiter = delimStr->ToCharArray();

		int i = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			array<String^>^ scoreData;
			scoreData = str->Split(delimiter);
			players[i] = gcnew Player(scoreData[0], Convert::ToInt32(scoreData[1]));
			i++;
		}
	}
	catch (Exception^ e)
	{
	}
	return players;
}

/// <summary>
/// Gets the trie.
/// </summary>
/// <returns></returns>
Trie^ FileIO::getTrie(){
	return this->trie;
}
