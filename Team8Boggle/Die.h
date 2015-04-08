#pragma once

#include <String>
#include <iostream>
using namespace System;
using namespace std;
	
ref class Die
	{
	public:
		Die(int dieNumber);
		String^ getValue();
		virtual ~Die();
		bool isSelected();
		void toggleSelected();
	private:
		bool selected;
		String^ dieValue;
		array<String^>^ DIE0;
		array<String^>^ DIE1;
		array<String^>^ DIE2;
		array<String^>^ DIE3;
		array<String^>^ DIE4;
		array<String^>^ DIE5;
		array<String^>^ DIE6;
		array<String^>^ DIE7;
		array<String^>^ DIE8;
		array<String^>^ DIE9;
		array<String^>^ DIE10;
		array<String^>^ DIE11;
		array<String^>^ DIE12;
		array<String^>^ DIE13;
		array<String^>^ DIE14;
		array<String^>^ DIE15;
	};
