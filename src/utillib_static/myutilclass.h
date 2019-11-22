#pragma once

#include "libdef.h"
#include <iostream>



class EXPORT_SYMBOL MyUtilClass
{
	char szName[128];
public:
	MyUtilClass();
	~MyUtilClass();
	void PrintStaticUtilLibHello();
};