/* tolower example */
#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i=0;
  char str[]="Test String.\n";
  char c;
  while (str[i])
  {
    c=str[i];
  //  putchar (tolower(c));
    i++;
  }
  int x=65;
  
  printf("%c",x);
  return 0;
}