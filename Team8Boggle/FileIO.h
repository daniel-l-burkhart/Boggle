#pragma once
#using<system.dll>
#include "Trie.h"
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
};

