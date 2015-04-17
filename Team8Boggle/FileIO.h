#pragma once
#using<system.dll>
#include "Trie.h"
#include "Player.h"

using namespace System;
using namespace System::IO;
ref class FileIO
{
public:
	FileIO();
private:
	Trie^ trie;
public:
	Trie^ getTrie();
	void SaveScores(array<Player^>^);
};

