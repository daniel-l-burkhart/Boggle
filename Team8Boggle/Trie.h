#pragma once

#using<system.dll>
using namespace System;
using namespace System::IO;
#include"DictionaryNode.h"


ref class Trie
{

public:
	Trie();
	void insert(String^ word);
	bool search(String^ word);

private:
	DictionaryNode^ head;
};

