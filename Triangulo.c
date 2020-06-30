#include <stdio.h>
#include <stdio.h>
/*Construa um programa que imprima um triângulo retângulo invertido abaixo, com o tamanho
máximo da base sendo indicado pelo usuário.
		*
	  * *
	* * *
  * * * */
void prenche(int n){
	int ast=1, esp=n-1;   	
	  	for(int ren=1; ren<=n ; ren++) /*Este fórum será repetido o mesmo número de vezes que o valor que inserimos.*/{
			  for(int i=1; i<=esp ; i++)  // Este for é para espaços de impressão.
					printf(" ");		  
				  for(int i=1; i<=ast ; i++) // Este for é para imprimir los asteriscos.
						printf("*");
						printf("\n");
						ast= ast+1; 
						esp= esp-1;
			}
}

int main(int argc, char const *argv[]){
	int n; 
		printf("Ingresa tamanio de la piramide: ");
			scanf("%i",&n);
		prenche(n);
	return 0;
}
