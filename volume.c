/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to calculate volume of cuboid.
   IDE        :VS Code
   */
#include <stdio.h>

int main()
{
    int l, b, h; // Where b=breath,h=height,l=length;
    float volume;

    printf("Enter length: ");
    scanf("%d", &l);

    printf("Enter breadth: ");
    scanf("%d", &b);

    printf("Enter height: ");
    scanf("%d", &h);

    volume = 2 * (b * l + h * l + h * b);

    printf("Volume of cuboid is: %.3f", volume);

    return 0;
}