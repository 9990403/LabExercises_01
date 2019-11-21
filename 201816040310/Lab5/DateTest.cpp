// Lab 5: DateTest.cpp
#include <iostream>
using namespace std;

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   Date d(12, 24, 2004); // instantiate object d of class Date

   // output Date object d's value
   for (int loop = 1; loop <= MAXDAYS; ++loop)
   {
      /* Write call to nextDay */
      d.print(); // invokes function print
      d.nextDay();
   } // end for

   d.setDate(12, 24, 2003);
   d.print();
   cout << endl;
} // end main
