#include<iostream>
using namespace std;
int main() {
   int year=1999;
   cout<<year<<"Enter a year it is may be a leap year or not a leap year";
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
   {
       cout<<year<<"leap year "<<endl;
   }
   else
    cout<<year<<"not a leap year "<<endl;

   return 0;
}
