																		//Marcele :)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
 
int main(void){ 
    
    int i = 0, j = 0, acertos = 0;
    char c;
    int n[5];
    int r[5];
    int op;
    
  
    srand(time(NULL));
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\t\t\t\t\t\t\t\Seja bem vindo ao joguinho da memoria!\n\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
		printf(" 1- Ver instrucoes\n 2- Iniciar o joguinho");
		scanf("%i", & op);
		
		if(op == 1){
			printf ("\t\t\t\t\t\t\t Este programa ira gerar 5 numeros aleatorios entre 1 e 30.\n\n");
    	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
			printf ("\t\t\t\Voce deve decorar os numeros exibidos em 10 segundos e depois escreve-los na ordem em que foram exibidos.\n\n\n\n\n");
    	printf ("Pressione a tecla ENTER para iniciar");
		}
		else if( op == 2){
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("Sua partida sera iniciada! Boa sorte!\n\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
		
  }
  	else{
  	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\t   Opcao nao identificada! A partida sera iniciado sem as instrucoes.\n"); 
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		}
		
    do{
        c = getch();
    }while (c != 13);
    
    for (i=0;i<5;i++){
        n[i] = (rand() % 30)+1;
    }
    
    j=10;
    
    do{
        system ("cls");
        printf ("MEMORIZE: %d\n\n\n", j);
        j--;
        for (i=0;i<5;i++){
            printf ("%d\t", n[i]);
        }
        Sleep (1000);
    }while (j>0);
    
    system ("cls");
    printf ("DIGITE QUAIS NUMEROS FORAM MOSTRADOS:\n\n");
    
    for (i=0;i<5;i++){
        printf ("\t% numero: ", i+1);
        scanf ("%d", &r[i]);
        if (r[i]==n[i]){
            acertos++;
        }
    }
    
    if (acertos==5){
        printf ("\n\nSua memoria e muito boa :) Veja os numero exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", n[i]);
        }
    }
    else
    {
        printf ("\n\nQue pena:( Veja os numero exibidos:\n\n\t");
        for (i=0;i<5;i++){
            printf ("%d\t", n[i]);
        }
    }
    printf ("\n\n");
    system ("pause");
    return 0;
}