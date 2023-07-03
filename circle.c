/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to calculate circumference of a circle
   IDE        :VS Code
   */
#include <stdio.h>
int main()
{
    float c, r;
    printf("Enter the number :");
    scanf("%f", &r);
    c = 2 * 3.14 * r;
    printf("The circumference of circle is :%f", c);
    return 0;
}