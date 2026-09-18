#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
   int year=2088;
   bool isLeapYear=false;
   if(year%4==0 && year%100!=0 || year%400==0) {
       isLeapYear=true;
   }
   if(isLeapYear) {
       printf("今年是闰年");
   } else {
       printf("今年不是闰年");
   }
   return 0;
}