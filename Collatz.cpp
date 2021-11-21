/* @file Collatz.cpp

*/

#include <iostream>
#include "Collatz.h"

std::istream& operator>>(std::istream& input, Collatz& c) 
{
   std::cout << "Enter a test integer." << std::endl;
   input >> c.test_;
   return input;
}

Collatz::Collatz() : size_(0), steps_(0), series_(0), test_(0) {}

void Collatz::printResults() const
{
   int height_ = 15;
   std::cout << std::endl;
   std::cout << std::endl;
   for (int i = 0; i < height_; i++) {
      std::cout << "    |" << std::endl;
      std::cout << ((height_ - i) * 100) << std::endl;
   }
   std::cout << "    |_";
   for (int i = 0; i < 19; i++) {
      std::cout << "__";
      std::cout << "^";
   }
   std::cout << "__";
   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << std::endl;
}

void Collatz::numSteps(int num)
{
   
}