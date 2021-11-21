/* @file Collatz.cpp

*/

#include <iostream>
#include "Collatz.h"

std::istream& operator>>(std::istream& input, Collatz& c) 
{
   std::cout << std::endl;
   std::cout << "Enter a test integer." << std::endl;
   input >> c.test_;
   return input;
}

std::ostream& operator<<(std::ostream& output, Collatz& c)
{

   c.numValues(c.test_);
   c.printResults();
   std::cout << std::endl;
   return output;
}

Collatz::Collatz() : size_(0), steps_(0), series_(0), test_(0) {}

void Collatz::printResults() const
{
   int height_ = 15;
   std::cout << std::endl;
   std::cout << std::endl;
   for (int i = 1; i <= height_; i++) {
      std::cout << ((height_ - i) * 100) << std::endl;
      std::cout << "    |";
      if (values_[i] >= ((height_ - i) * 100)) {
         for (int x = 0; x < ((i*3) - 1); x++) {
            std::cout << " ";
         }
         std::cout << "^" << std::endl;
      } else {
         std::cout << std::endl;
      }
   }
   for(int i = 0; i < 5; i++) {
      std::cout << " ";
   }
   for (int i = 0; i < 19; i++) {
      std::cout << "__";
      std::cout << "^";
   }
   std::cout << "__";
   std::cout << std::endl;
   std::cout << std::endl;
   for (int i = 0; i < values_.size(); i++) {
      std::cout << values_[i] << " ";
   }
   std::cout << std::endl;
}

void Collatz::numValues(int num)
{
   int count = 0;

   while (num != 1) {
      // base formula
      if (num % 2 != 0) {
         num = (num * 3) + 1;
      } else {
         num = num / 2;
      }
      values_.push_back(num);
      count++;
   }
   for(int i = 0; i < count; i++) {
      std::cout << values_[i] << " ";
   }
}