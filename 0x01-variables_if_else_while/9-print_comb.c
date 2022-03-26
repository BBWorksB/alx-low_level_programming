#include <stdio.h>
/**
* main - printing numbers from 0-9 with commas and spaces btn them
* Description: using the main function
* this program prints "0, 1, 2, 3, , 5......"
* Return: 0
*/
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
