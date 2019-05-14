/* tolower example */
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>

using namespace std;
int main ()
{
  int i=0;
  char str[]="Test String.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar (tolower(c));
   
    i++;
  }
 char x=65;
 for(;x<=122;x++)
  cout<<char(x)<<endl;
if(GetAsyncKeyState(x==122))
  cout<<"welcome"<<endl;
 putchar (toupper(97));
 putchar (toupper(97));
  
  return 0;
}