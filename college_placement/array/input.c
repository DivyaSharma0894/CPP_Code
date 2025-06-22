#include <stdio.h>
#include <string.h>
#include<conio.h>
int main ()
{
FILE * fp;
char string[100];
int c = 0, count[26] = { 0 }, x;
fp = fopen ("array1.cpp", "r");
//clrscr();
while (fscanf (fp, "%s", string) != EOF)
{ c=0;
while (string[c] != '\0')
{
 /** Considering characters from 'a' to 'z' only and ignoring others. */
if (string[c] >= 'a' && string[c] <= 'z')
{
x = string[c] - 'a';
count[x]++;
}

c++;
}
}
for (c = 0; c <26 ; c++)
printf ("%c occurs %d times in the string.\n", c + 'a', count[c]);
return 0;
}