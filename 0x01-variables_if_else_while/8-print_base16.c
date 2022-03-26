#include <stdio.h>
/**
* main - print the numbers of base 16
*
* Description: using the main function
* this program will print the base 16 numbers
* Return: 0
*/
int main(void)
{
char x;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
}
for (x = 'a' ; x <= 'f' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
