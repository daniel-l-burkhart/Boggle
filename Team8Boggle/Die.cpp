#include "Die.h"

Die::Die(int dieNumber) {
	this->selected = false;
	array<String^>^ DIE0 = gcnew array<String^>(6){ "R", "I", "F", "O", "B", "X" };
	array<String^>^ DIE1 = gcnew array<String^>(6){ "I", "F", "E", "H", "E", "Y" };
	array<String^>^ DIE2 = gcnew array<String^>(6){ "D", "E", "N", "O", "W", "S" };
	array<String^>^ DIE3 = gcnew array<String^>(6){ "U", "T", "O", "K", "N", "D" };
	array<String^>^ DIE4 = gcnew array<String^>(6){ "H", "M", "S", "R", "A", "O" };
	array<String^>^ DIE5 = gcnew array<String^>(6){ "L", "U", "P", "E", "T", "S" };
	array<String^>^ DIE6 = gcnew array<String^>(6){ "A", "C", "I", "T", "O", "A" };
	array<String^>^ DIE7 = gcnew array<String^>(6){ "Y", "L", "G", "K", "U", "E" };
	array<String^>^ DIE8 = gcnew array<String^>(6){ "Qu", "B", "M", "J", "O", "A" };
	array<String^>^ DIE9 = gcnew array<String^>(6){ "E", "H", "I", "S", "P", "N" };
	array<String^>^ DIE10 = gcnew array<String^>(6){ "V", "E", "T", "I", "G", "N" };
	array<String^>^ DIE11 = gcnew array<String^>(6){ "B", "A", "L", "I", "Y", "T" };
	array<String^>^ DIE12 = gcnew array<String^>(6){ "E", "Z", "A", "V", "N", "D" };
	array<String^>^ DIE13 = gcnew array<String^>(6){ "R", "A", "L", "E", "S", "C" };
	array<String^>^ DIE14 = gcnew array<String^>(6){ "U", "W", "I", "L", "R", "G" };
	array<String^>^ DIE15 = gcnew array<String^>(6){ "P", "A", "C", "E", "M", "D" };

	Random^ random = gcnew Random();
	switch (dieNumber)
	{
	case 0:
		this->dieValue = DIE0[random->Next(6)];
	case 1:
		this->dieValue = DIE1[random->Next(6)];
	case 2:
		this->dieValue = DIE2[random->Next(6)];
	case 3:
		this->dieValue = DIE3[random->Next(6)];
	case 4:
		this->dieValue = DIE4[random->Next(6)];
	case 5:
		this->dieValue = DIE5[random->Next(6)];
	case 6:
		this->dieValue = DIE6[random->Next(6)];
	case 7:
		this->dieValue = DIE7[random->Next(6)];
	case 8:
		this->dieValue = DIE8[random->Next(6)];
	case 9:
		this->dieValue = DIE9[random->Next(6)];
	case 10:
		this->dieValue = DIE10[random->Next(6)];
	case 11:
		this->dieValue = DIE11[random->Next(6)];
	case 12:
		this->dieValue = DIE12[random->Next(6)];
	case 13:
		this->dieValue = DIE13[random->Next(6)];
	case 14:
		this->dieValue = DIE14[random->Next(6)];
	case 15:
		this->dieValue = DIE15[random->Next(6)];
		break;
	}
}

String^ Die::getValue() {
	return this->dieValue;
}

bool Die::isSelected(){
	return this->selected;
}

void Die::select_die() {
	this->selected = true;
}

void Die::deselect_die() {
	this->selected = false;
}

Die::~Die() {
}
