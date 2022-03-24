#include <stdio.h>
/**
*Printing the small letters
* of the alphabet respectively
* 
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
