/* Programmer :Vikash Kumar Thakur
   Topic      : WAP to take as an input in below given format and convert the time format and display the result a given below
                Input  :-"HH:MM"
                Output :-HH hour and MM Minute
   IDE        :VS Code
   */
#include <stdio.h>
int main()
{
    int hh, mm;
    printf("Enter the time and minute(HH:MM)");
    scanf("%d%d", &hh, &mm);
    printf("%d hour and %d minute", hh, mm);
    return 0;
}