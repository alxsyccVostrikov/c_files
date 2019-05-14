#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
 //void rem(struct servicar list[20]){
        
        
        
   //     }




   void menu();
   void rem(struct servicar list[20]);
   void cadastro(struct servicar list[20]);
    void printcadastro(struct servicar list[20]);                     //funções
 void pesq(struct servicar list[20]);
 char res = 'n';


struct servicar{
    string name;                                            //
    char escolha;
    };
    

int main(){
    struct servicar cad[20];    
system ("color 0f");
    int x=1;
bool chn = true;

while (x==1){
menu();
printf("entre com o c%cdigo do servi%co\n",162,135);
char entrada = getchar();

switch(entrada){
    case '1':cadastro(cad);break;
    case '2':printf("ok\n");break;   
  case '3':rem(cad);break;
      case '4':pesq(cad);break;   
       case '5':printcadastro(cad);break;
       case '6':{
            x=2;
            printf("saindo...\n");
            };break;                                                        //escholha opção menu 
     
     
     
     case 'C':cadastro(cad);break;
      case 'A':{
        printf("ok\n");break;   
   
    }
    case 'R':rem(cad);break;
      case 'P':pesq(cad);break;   
      case 'L':printcadastro(cad);break;
          case 'F':{
            x=2;
            printf("saindo...\n");
             };break;
default:
            printf("op%c%co inv%clida\n",135,198,160);
            system("pause");
            ;break;  
 
}
}
    return 0;
}

void cadastro(struct servicar list[20]){
int x=1;
system("cls");
do{  
    cout<<"entre com o cadastro "<<endl;
cin>>list[x].name;
fflush(stdin);
        x++;                                                                         //receber dados
                printf("deseja continuar o cadastro?  | (s)im (n)%co\n",198);
    scanf("%c",&res);
fflush(stdin);
}
while( res != 'n'  );
}
    
    
void printcadastro(struct servicar list[20]){
int x;        
       system("cls");
  
        for(x=1;x<=10;x++)                                                     //imprimir lista 
cout<<""<<x<<"-"<<list[x].name<<endl;
system("pause");

}
    
    void menu(){
system("cls");
printf("MMMMMMMMMMMNWWWWNNXXXXXXXXXXXXNNNNWMMMMMMMMMM\n");
printf("MMMMMMMMW0dxdollcccccc::::::cccloooXWMMMMMMMM\n");
printf("MMMMMMMWk:oc::cccclc;,,,;cllllc::co;0WMMMMMMM\n");
printf("MMMMMMWk,l:,;lkkO00000000000kxxc;,cl;KMMMMMMM\n");
printf("MMWWNW0'::,,;''''x0OO000000o','';,,c;cXWKXWMM\n");
printf("W::;:NO:olccccccclol::loooolccc:::cocoX0,,.cM\n");
printf("X:;,.0NKO0XXXXXXXKKK0000000000000KKOOXKo,:cdM\n");
printf("MMMN00K00OOkxddddddddddddddddddxkOkkO00X0WMMM\n");                              //menu
printf("MWK0x;::::codxlllllllodoooooookkxolclc:lKXWWM\n");
printf("Mxoxkollc:,,xk'...',',o'''....lkl;:cddlx0xdKM\n");
printf("Mdd;,xddoc:;ckd..    ,..   ..;xd:lloxxdlcldOM sistemaservicar\n");
printf("Mox..odddddxxkxkkkxxdddddxxkkxxkkxxxxxd:.,lOM\n");
printf("Ml;...''',,,;coddl'''.....'oddoc:;;,,'....'OM\n");
printf("Mc.. .....'',:coo:  .'...  cclc:,,'''... ..OM\n");
printf("M:.. .     ..'                ....     . . xM\n");
printf("M;   ..      ..               .       .    xM\n");
printf("M;     .......''.............'........     xM\n");
printf("M;         .                    ..         xM\n");
printf("Mc        'cccc::::::::::ccccccccc'        kM\n");
printf("Mo                              ...        0M\n");
printf("MK.    .........            ..........    .NM\n");
printf("MMWNXKOkxxddoooooolllllllloooooddxxkOO0XNNWMM\n\n");
printf("          1-cadastrar                        [C]adastrar\n");
printf("          2-alterar                          [A]lterar  \n");
printf("          3-remover                          [R]emover  \n");
printf("          4-pesquisar                        [P]esaquisar\n");
printf("          5-listar                           [L]istar\n");
printf("          6-finalizar                        [F]inalizar\n\n");
}

void pesq(struct servicar list[20]){
   int x,z=2;
   string nom;
    printf("pesquisar por: \n");
    cin>>nom;
fflush(stdin);
    
   for(x=1;x<=10;x++)
       if(nom == list[x].name ){
system("cls");
cout<<"'"<<list[x].name<<"' "<<"esta na posicao "<<x-1<<" do vetor"<<endl;
printf("\n");
for(x=1;x<=10;x++){
cout<<""<<x-1<<"-"<<list[x].name<<endl;
}
}



else{
system("cls\n");
printf("invalid name\n");
}
system("pause\n");
}


void rem(struct servicar list[20]){
string nom;
int i,pos;
 system("cls");
do{
    system("cls");
for(i=1;i<=10;i++){                                                
cout<<""<<i<<"-"<<list[i].name<<endl;
 }printf("\n"); 
    
    printf("digite a posi%c%co a ser apada\n",135,198);
    cin>>pos;                                               //
    if (pos >= 10+1){
        system("cls");
        printf("impossible delete\n");
        system("pause");
        }
        else{
            for (i = pos ;i<=10-1;i++){
            list[i].name = list[i+1].name;
            }}

system("cls");
for(i=1;i<=10;i++){                                                
cout<<""<<i<<"-"<<list[i].name<<endl;
}
printf("\n");
printf("deseja continuar?  | (s)im (n)%co\n",198);
cin >> res;
fflush(stdin);
}while(res != 'n');
system("cls");for(i=1;i<=10;i++){                                                
cout<<""<<i<<"-"<<list[i].name<<endl;
} printf("\n");
system("pause");

}   
    
    
   



   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
