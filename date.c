/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to take date as an input in below given format and convert the date format and display the result as given below.
               Input  :-"DD/MM/YYYY"(03/07/2023)
               Output :-Day-03,Month-07,Year-2022
   IDE        :VS Code
   */
#include <stdio.h>
int main()
{
    int dd, mm, yyyy;
    printf("Enter DD/MM/YYYY: "); // input from user in the format "dd
    scanf("%d%d%d", &dd, &mm, &yyyy);
    printf("Day-%d,Month-%d,Year-%d", dd, mm, yyyy);
    return (0);
}