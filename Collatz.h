/* @file Collatz.h

*/

#ifndef COLLATZ_H
#define COLLATZ_H
#include <iostream>
#include <vector>


class Collatz {
   friend std::istream& operator>>(std::istream& input, Collatz& c);
   friend std::ostream& operator<<(std::ostream& output, Collatz& c);
   
   public:
      /* Constructor */
      Collatz();
      
      /* Prints a human-friendly graph of the steps */
      void printResults() const;

   private:
      /* calculates the number of steps per integer */
      void numValues(int num);
      
      /* test single integer */
      int test_;
      
      /* The number of integers in the series */
      int size_;   
      
      /* Keeps track of the number of steps to reach 4,2,1 loop */
      int steps_;

      /* array of integers to be calculated */
      std::vector<int> series_;

      /* array of values from an integer */
      std::vector<int> values_;

};




#endif