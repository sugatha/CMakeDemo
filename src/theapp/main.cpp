#include <iostream>
#include "mylibshared.h"

int main()
{
   std::cout << "Hello world from The App!" << std::endl;

   UseMyClass myclass_obj;
#ifdef TEST
   std::cout << "In Test:Mode" << std::endl;
#endif
   myclass_obj.PrintUseMyClassHello();
   return 0;
}