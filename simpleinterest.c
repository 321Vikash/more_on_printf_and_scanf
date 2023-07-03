/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to calculate simple interest
   IDE        :VS Code
   */
#include <stdio.h>
int main()
{
    float r, p, t; // Where p=principal,r=rate,t=time
    float si;
    printf("Enter the principal :");
    scanf("%f", &p);
    printf("Enter the Rate :");
    scanf("%f", &r);
    printf("Enter the Time :");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest is :%f", si);
    return 0;
}