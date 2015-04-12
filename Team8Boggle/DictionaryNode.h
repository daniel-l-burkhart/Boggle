#pragma once
ref class DictionaryNode
{
public:
	DictionaryNode();
	int prefix_count;
	bool isEnd;

	array<DictionaryNode^> ^ child;

};

