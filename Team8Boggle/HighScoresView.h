#pragma once
#include <vcclr.h>
#include <iostream>
#include "Player.h"

void TryAddHighScore(String^ name, int score);

namespace Team8Boggle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;


	/// <summary>
	/// Summary for HighScoresView
	/// </summary>
	public ref class HighScoresView : public System::Windows::Forms::Form
	{
	public:
		HighScoresView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HighScoresView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(657, 259);
			this->textBox1->TabIndex = 0;
			// 
			// HighScoresView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 284);
			this->Controls->Add(this->textBox1);
			this->Name = L"HighScoresView";
			this->Text = L"HighScoresView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		void TryAddHighScore(String^ name, int score);
	private:
		array<Player^>^ players = gcnew array<Player^>(10);
		array<Player^>^ sortedPlayers = gcnew array<Player^>(10);
		int playersCount = 0;
		Player^ getPlayerWithLowestScore();
		int getLowestScoreIndex();
		void addAndSort(Player^ player);
		void highScoresSave();
		void highScoresLoad();
	};
}
