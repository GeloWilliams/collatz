/* @file Collatz.cpp

*/

#include <iostream>
#include "Collatz.h"

std::istream& operator>>(std::istream& input, Collatz& c) 
{
   std::cout << std::endl;
   std::cout << "Enter a number." << std::endl;
   while (!(input >> c.test_)) {
      std::cout << "You must enter a number.\n";
      input.clear();
      input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   }
   while ((c.test_ < 1)) {
      std::cout << "You must enter a number greater than 1.\n";
      input.clear();
      input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      input >> c.test_;
   }
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
   std::cout << std::endl;
   for (int i = 0; i < values_.size(); i++) {
      if (test_ < 10) {
         for (int j = 0; j < values_[i]; j++) {
            std::cout << "-";
         }
         std::cout << " " << values_[i] << std::endl;
      } else {
         std::cout << "-";
         for (int j = 0; j < (values_[i] / 100); j++) {
            std::cout << "-";
         }
         std::cout << " " << values_[i] << std::endl;
      }
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
}