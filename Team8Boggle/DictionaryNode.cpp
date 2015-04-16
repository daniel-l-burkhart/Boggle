#include "DictionaryNode.h"


/// <summary>
/// Initializes a new instance of the <see cref="DictionaryNode"/> class.
/// </summary>
DictionaryNode::DictionaryNode()
{
	this->child = gcnew array<DictionaryNode^>(26);

}
