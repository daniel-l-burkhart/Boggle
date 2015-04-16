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


/// <summary>
/// Initializes a new instance of the <see cref="Trie"/> class.
/// </summary>
Trie::Trie()
{
	this->head = gcnew DictionaryNode();
	this->head->isEnd = false;
	this->head->prefix_count = 0;

}

/// <summary>
/// Inserts the specified word.
/// </summary>
/// <param name="word">The word.</param>
void Trie::insert(String^ word)
{
	DictionaryNode ^current = head;
	current->prefix_count++;


	for (int i = 0; i < word->Length; ++i)
	{
		int letter = (int)word[i]-(int)'a';
		if (!current->child[letter]){
			current->child[letter] = gcnew DictionaryNode();
		}

		current->child[letter]->prefix_count++;
		current = current->child[letter];
	}
	current->isEnd = true;
}

/// <summary>
/// Searches the specified word.
/// </summary>
/// <param name="word">The word.</param>
/// <returns></returns>
bool Trie::search(String^ word)
{
	word = word->ToLower();
	DictionaryNode ^current = head;


	for (int i = 0; i < word->Length; ++i)
	{
		int letter = (int)word[i] - (int)'a';
		if (!current->child[letter]){
			return false;
		}
		current = current->child[letter];
	}
	return current->isEnd;
}