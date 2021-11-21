/* @file CollatzTest.cpp


*/
#include <iostream>
#include <vector>
#include "Collatz.h"

void test1()
{
   Collatz c;
   char response;
   do {
      std::cin >> c;
      std::cout << c;
      std::cout << "Try another? Type 'Y' to continue." << std::endl;
      std::cin >> response;
   } while (response == 'Y');

}
void test2()
{
   Collatz c;
   std::cin >> c;
   std::cout << c;
}


int main()
{
   test2();
   return 0;
}