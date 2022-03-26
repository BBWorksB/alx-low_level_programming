#include <stdio.h>
/**
* main -  print the alphabets in reverse
*
* Description - using the main function
* the program prints "z to a"
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
