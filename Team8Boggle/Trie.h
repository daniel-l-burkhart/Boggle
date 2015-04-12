#pragma once
// text_read.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;
#include"DictionaryNode.h"
#include"FileIO.h"

ref class Trie
{

public:
	Trie();
	void insert(String^ word);
	bool search(String^ word);
	int words_with_prefix(String^ prefix);
private:
	DictionaryNode^ head;
};

