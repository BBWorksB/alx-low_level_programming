#include<stdio.h>
/**
* main prints the alphabets in reverse mode
* 
* Description of the main function and how its used
* the program will display the alphabets in the desceding way
* Return: 0
*/
int main(void)
{
char x;
for (x = 'z' ; x >= 'a' ; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
