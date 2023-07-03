/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to input an chracter from the user and print its ASCII code
   IDE        :VS Code
   */
#include <stdio.h>
int main()
{
    char a;
    printf("Enter any character: "); // prompt for charcter
    scanf("%c", &a);                 // read in one character using %c format specifier
    printf("\nASCII value of '%c' is :%d\n ", a,a );
    return 0;
}