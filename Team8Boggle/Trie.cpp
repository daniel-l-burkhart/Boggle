#include "Trie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include "DictionaryNode.h"
using namespace std;

#using<system.dll>
using namespace System;
using namespace System::IO;


Trie::Trie()
{
	this->head = gcnew DictionaryNode();
	this->head->isEnd = false;
	this->head->prefix_count = 0;

}

void Trie::insert(String^ word)
{
	DictionaryNode ^current = head;
	current->prefix_count++;


	for (int i = 0; i < word->Length; ++i)
	{
		int letter = (int)word[i] - (int)'a';
		if (current->child[letter] == nullptr){
			current->child[letter] = gcnew DictionaryNode();
		}

		current->child[letter]->prefix_count++;
		current = current->child[letter];
	}
	current->isEnd = true;
}

bool Trie::search(String^ word)
{
	DictionaryNode ^current = head;
	for (int i = 0; i < word->Length; ++i)
	{
		int letter = (int)word[i] - (int)'a';
		if (current->child[letter] == nullptr){
			return false;
		}
		current = current->child[letter];
	}
	return current->isEnd;
}

int Trie::words_with_prefix(String^ prefix)
{
	DictionaryNode ^current = head;
	for (int i = 0; i < prefix->Length; ++i)
	{
		int letter = (int)prefix[i] - (int)'a';
		if (current->child[letter] == nullptr){
			return 0;
		}
		else{
			current = current->child[letter];
		}
	}
	return current->prefix_count;
}