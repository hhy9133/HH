#include <stdio.h>
#include <math.h>

int main() {
int result_1 =2+10/8*3;
printf("result_1 = %d\n", result_1);
double result_2 =2+10/8.0*3;
printf("result_2 = %f\n", result_2);
int result_3 =pow(4,2);
printf("result_3 = %d\n", result_3);
int a=-1;
int b=2;
int c=3;
double x_1 =-b  +sqrt(pow(b,2)-4*a*c)/(2*a);
double x_2 =-b  -sqrt(pow(b,2)-4*a*c)/(2*a);
printf("x_1 = %f\n", x_1);
printf("x_2 = %f\n", x_2);
    return 0;
}