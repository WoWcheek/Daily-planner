#pragma once
#include <string>

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CLR 
{
	ref  class User
	{
	public:
		String^ login = "";
		String^ psw = "";
		String^ img = "";
	};

	static ref class Service 
	{
	public:
		static User^ user = gcnew User();
		static char* toCharPtr(String^ s)
		{
			return (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
		}
	};
}