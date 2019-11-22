#include "mylibshared.h"

using namespace std;

UseMyClass::UseMyClass()   
{

}

void UseMyClass::PrintUseMyClassHello()
{
	cout << "Oops! Shared lib !!" << endl;
	myclass.PrintStaticLibHello();
	myutilclass.PrintStaticUtilLibHello();
   
}
