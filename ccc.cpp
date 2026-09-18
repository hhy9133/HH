#include <stdio.h>
#include <stdbool.h>

int main(){
    int year=2088;
    bool isleyear=false;
if(year%4==0 && year%100!=0 ||year%400==0){
   isleyear=true;
}
 if(isleyear){
    printf("今年是闰年");
 }else{
    printf("今年不是闰年");   
 }
 return 0;
}