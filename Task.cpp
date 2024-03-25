#pragma once
#include <string>

namespace CLR 
{
	using namespace System;
	ref  class Task_ 
	{
	public:
		String^ Type = "";
		bool IsChecked = false;
		String^ Text = "";

		void SetType(char* str)
		{
			for (int i = 0; i < strlen(str); i++)
				Type += (Char)str[i];
		}
		void SetIsChecked(char* str)
		{
			if (!strcmp(str, "True"))
				IsChecked = true;
			if (!strcmp(str, "False"))
				IsChecked = false;
		}
		void SetText(char* str)
		{
			if (str[strlen(str) - 1] == '\n')
				str[strlen(str) - 1] = '\0';
			for (int i = 0; i < strlen(str); i++)
				Text += (Char)str[i];
		}
	};
}