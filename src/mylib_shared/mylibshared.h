#pragma once

//#include "libdef.h"
#include "myclass.h"
#include "myutilclass.h"

class __declspec(dllexport) UseMyClass
{
	MyClass myclass;
	MyUtilClass myutilclass;
public:
	UseMyClass();
	void PrintUseMyClassHello();
};