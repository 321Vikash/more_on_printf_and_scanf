/* Programmer :Vikash Kumar Thakur
   Topic      :// WAP to calculate average of three number.Number are given by the user.
   IDE        :VS code
    */
#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter the three number:");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    avg = (a + b + c) / 3.0;
    printf("Sum :%d", sum);
    printf("Average :%f", avg);
    return 0;
}