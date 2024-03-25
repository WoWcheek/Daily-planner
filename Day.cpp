#pragma once
#include <string>
#include "Task.cpp"

namespace CLR 
{
	using namespace System;
	using namespace System::Collections::Generic;
	
	ref  class Day_ 
	{
	public:
		DateTime^ date;
		String^ day = ""; 
	    List<Task_^>^ list = gcnew List<Task_^>();
		List<String^>^ listForBox = gcnew List<String^>();
	};
}