#include <cstdlib>                                       
#include <iostream>                                              
#include <conio.h>                            
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
using namespace std;



/**
   projeto envolvendo "pointers"
professor:marcondes dourado
semestre:2°


            struct(   x++                 
          ()          +x+
		   po         x+x                
            char*x=   +x+                
                  md  x++ 
                   () +x+           
		   cad[int]	  ++x
				
				
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0olKMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOoccccxWMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0;,,,,,;XMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMNKOkxddooooNMNc,''','lWM0olooddxOKNMMMMMMMM
MMMMMMMMMMMMMMXkoccccccccc::WMO,,,,,,'dMWdccccccccccdKWMMMMM
MMMMMMMMMMMMNxcccccccccccc;dMWo,,,,,,,XMXlccccccccccccdNMMMM
MMMMMMMMMMM0lccccccc:;;;::;KMX;,,,,,'lWMkcccc::ddlcccc:dMMMM
MMMMMMMMMM0ccccccc;;oOKNWWWMMk,,,,,,'OMNlcccc;xXOl:ccc:cWMMM
MMMMMMMMMXlcccccc;l0KXXXXNMMWl,,,,,,,NM0ccccccccccccc:,xMMMM
MMMMMMMMMOcccccccccccccc:lWMK,,,,,,'lMWd:cccccccccc:;:xWMMMM
MMMMMMMMWdcccccccccccccc;dMWd,,,,,,'OMXlccccc::ccccccOWMMMMM
MMMMMMMMXlccccccc:::::::;KMX;,,,,,';NMOcccc:;xkxccccc:kMMMMM
MMMMMMMMkcccccc::xxxxxxxkWMk,,,,,,'dMNocccc;xMMXlcccc;OMMMMM
MMMMMMMNocccccc;OMMMMMMMMMWl,,,,,,,XM0ccccc:dkkdcccc::NMMMMM
MMMMMMMKccccccc;NMMMMMMMMMK;,,,,,'lMMxccccc:cccccccc;dMMMMMM
MMMMMMMk:::::;;lWMMMMMMMMMx''''''.OMWl;;;;;;;;;;;;;;,KMMMMMM
MMMMMMMN0000000XMMMMMMMMMMWKKKKKKKWMMXKKKKKKKKKKKKOKXWMMMMMM



*/


void menu();
void pp(struct hor agora[20]);
void imp(struct hor agora[20]);
void rr(struct hor agora[20]);
void search(struct hor agora[20]);
void alt(struct hor agora[20]);

struct hor{
char x;
string cod/*[sizeof(char*)]*/;	
string name/*[sizeof(char*)]*/;	
string peca/*[sizeof(char*)]*/;	
float preco/*[sizeof(float)]*/;     
float obra/*[sizeof(double)]*/;
int quant/*[sizeof(int)]*/;    
}agora[20],*depois[20];


int *lista=(int*)malloc(sizeof(int));
int *x=(int*)calloc(1,sizeof(byte)); 
int i = sizeof(byte);


int main(){                               
system ("color 0f");
for(int i =0;i<=20;i++)
depois[i]= &agora[i];
char entrada;
while(*x == 0){
menu();
printf("entre com o c%cdigo do servi%co\n",162,135);
char entrada = getchar();
switch(entrada){
	case '1':pp(agora);break;
    case '2':alt(agora); break;
    case '3':rr(agora);break;
    case '4':search(agora);break;
    case '5':imp(agora);break;
    case '6':*x=2;free(lista);
}}system("pause");return 0;}
    
    
void pp(struct hor agora[20]){
system("cls");
char key;
while(key != 'n'){printf("c%cdigo da pe%ca: ",162,135);                  
i = *lista + 1;
cin>>depois[i]->cod;
cout<<"modelo do carro: ";
cin>>depois[i]->name;
printf("nome da pe%ca: ",135);
cin>>depois[i]->peca;
printf("quantidade: ");
cin>>depois[i]->quant;
printf("pre%co: ",135);                                         
cin>>depois[i]->preco;
printf("m%co de obra: ",198);
cin>>depois[i]->obra;

system("cls");
cout<<"deseja continuar? (s) (n)\n";
cin>>key;
i++;
*lista = *lista + 1;
system("cls");}}

	
	
	
	
	
	
	
	
	
	
	
	
	
void imp(struct hor agora[20]){system("cls");
system("cls");
if(*lista == 0){
puts("lista vazia");
}else{
for(int i=1;i<=*lista;i++){
cout<<""<<i<<"-"<<(*depois[i]).cod<<endl;}}
system("pause");}
    
    
    
    
    
    
    
    
    

void rr(struct hor agora[20]){
system("cls");
int pos;
char xx;
in:
system("cls");
if(*lista == 0){
puts("lista vazia");system("pause");
}else{
for(int i=1;i<=*lista;i++){
cout<<""<<i<<"-"<<(*depois[i]).cod<<endl;}
printf("digite a posi%c%co a ser apagada\n",135,198);
    cin>>pos;for (i = pos;i<=*lista;i++){
    	
depois[i]->cod = depois[i+1]->cod;                   
depois[i]->name = depois[i+1]->name;
depois[i]->peca = depois[i+1]->peca;            
depois[i]->quant = depois[i+1]->quant;
depois[i]->preco = depois[i+1]->preco;
depois[i]->obra = depois[i+1]->obra;
}
system("cls");
for(int i=1;i<=*lista;i++){
cout<<""<<i<<"-"<<(*depois[i]).cod<<endl;}
puts("deseja continuar?(s) (n)");
cin>>xx;
if(xx=='s'){
*lista =*lista-1;
goto in;
}}
*lista =*lista-1;
}




void search(struct hor agora[20]){
 int x;
   string nom;
char res;
inicio: 
   if(*lista==0){
system("cls");
printf("lista vazia\n");
system("pause\n");}
else{
system("cls");
 printf("pesquisar por c%cdigo do carro: \n",162);
    cin>>nom;
for(x=1;x<=*lista;x++)
	if(nom == (*depois[x]).cod){
system("cls");
cout<<"lote "<<x<<endl;
printf("c%cdigo da pe%ca: ",162,135);
cout<<""<<(*depois[x]).cod<<endl;
cout<<"modelo do carro: ";
cout<<""<<(*depois[x]).name<<endl;                                  
printf("nome da pe%ca: ",135);
cout<<""<<(*depois[x]).peca<<endl;
printf("quantidade: ");
cout<<""<<(*depois[x]).quant<<endl;
printf("pre%co: ",135);
printf("%.2f\n",(*depois[x]).preco);
printf("m%co de obra: ",198);
printf("%.2f\n",(*depois[x]).obra);
printf("\n");}
al:
cout<<"deseja continuar s/n? "<<endl;
cin>>res; 
if (isalpha(res) && res =='s'){
goto inicio;
}else if(isalpha(res) && res =='n'){
}else{
goto al;
}}}




void alt(struct hor agora[20]){
string nom;
char res;
inicio:
system("cls"); 
int x;
bin:
if(*lista==0){
system("cls");
printf("lista vazia\n");
system("pause");
}else{
	printf("\naltera%c%co por c%cdigo do carro: \n",135,198,162);
cin>>nom;
for(x=1;x<=*lista;x++)
  if(nom == (*depois[x]).cod ){
system("cls");
cout<<"lote "<<x<<endl;
printf("c%cdigo da pe%ca: ",162,135);
cin>>(*depois[x]).cod;
cout<<"modelo do carro: ";
cin>>(*depois[x]).name;
printf("nome da pe%ca: ",135);
cin>>(*depois[x]).peca;
printf("quantidade: ");
cin>>(*depois[x]).quant;
printf("pre%co: ",135);
cin>>(*depois[x]).preco;
printf("m%co de obra: ",198);
cin>>(*depois[x]).obra;
printf("\n");}}}


    void menu(){
system("cls");
printf("MMMMMMMMMMMMMMMMMMMMMMWNXXKKK0000KKXXNWMMMMMMMMMMMMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMMMMMWNK0kdoloxd;,',od:,;:ox0XNWMMMMMMMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMWN0kxolcc::;dWWk''kWW:.     .,cxKNWMMMMMMMMMMMM\n");
printf("MMMMMMMMMMWN0kdooollcc:;;dWxWddWdM:.         .,o0NMMMMMMMMMM\n");
printf("MMMMMMMMWXOxxddoollcc::;;oW:dWNl;W;.           .'cOXMMMMMMMM\n");
printf("MMMMMMWXOkKNWKoollcc::;;,;c,'c:.'c.           lK: .:ONMMMMMM\n");
printf("MMMMMN0kKXkdXXKN0cc:;;:cllooold0Okdl;..     '0Kocxx..l0WMMMM\n");
printf("MMMMXkxNWkkXkldNk:;cokkkxxxddlOMMMWWWXko,. .KXOdkXl ..;xWMMM\n");
printf("MMWXxddx0NMKx00l;lkOkkxxxddddlOMMMWWWWWWXx:..  oXkdkx, 'xWMM\n");
printf("MMXxoooolld0Ko;lkkkkxxxddddoockMMMWWWWWWNNXx:..dd:.     ,xWM\n");
printf("MXkllllcccc:;;dkxxxxxdddddooockMMWWWWWWNNNXX0c;.         ;kW\n");
printf("WKlcccc::::;;xxxxddddddoooooo:kMWWWWWWWNNNXXK0:;         .cK\n");
printf("Xx:::::;;;;,oxddddddooooooooo:xWWWWWWWNNNXXKK0k;,         ;x\n");
printf("Kl;;;;;,,,,,dddoooooooooollll;dWWWWWWNNNXXKK0OOc;         .l\n");
printf("0:,,,,,'''';dooolllllccccc:::'ckkkkxxxxdddoollc;:.        .c\n");
printf("0:'''''....;KNNNNNNXXXXXXXXXKlcoollllllccc:::;;':.        .c\n");
printf("Kc.........'OWWWWWWWWWWWWWWWWocllllllcccccc::::':         .l\n");
printf("Kd..........cNWWWWWWWWWWWWWNNo:llllcccccc::::;;,;         ,x\n");
printf("NO,.....    .cNWWWWWWWNNNNNNNl:lccccccc::::;;,.c         .;K\n");
printf("MKd.         .cKNNNNNNNNNXXXXl;cccccc::::;;;,,c          'xM\n");
printf("MMKc          .;dKXXXXXXKKKKKc;ccc::::;;;;,';'          .oWM\n");
printf("MMW0:           .;oOKKK00000O:,:::::;;;;',;,           .lWMM\n");
printf("MMMW0l.           .'cldkOkkkx;'::;;;,',:,'            'oWMMM\n");
printf("MMMMWXx'             ..';cllc,';;:;,''.             .:OWMMMM\n");
printf("MMMMMMW0l.                 ......                 .'dNMMMMMM\n");
printf("MMMMMMMMNOo.                                    .,dXMMMMMMMM\n");
printf("MMMMMMMMMMW0d;.                              ..:kNMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMNKxc'.                      ..,oOXMMMMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMMMMMNKOdc;'.....  ......':oxOXMMMMMMMMMMMMMMMMM\n");
printf("MMMMMMMMMMMMMMMMMMMMMMWKOxolcc:ccldk0WMMMMMMMMMMMMMMMMMMMMMM\n");
printf("          1-cadastrar                       \n");
printf("          2-alterar                         \n");
printf("          3-remover                          \n");
printf("          4-pesquisar                        \n");
printf("          5-listar                           \n");
printf("          6-finalizar                        \n\n");
}






    
    
    
    

