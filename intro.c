#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
 	setlocale(LC_ALL, "portuguese");
	int opcao;
		
	printf("\t\t\t\t\t\t\t\tBem vindo usuario\n");
	printf("\t\t\tAqui voce podera achar os comandos e tera acesso a suportes que voce precisara para programar em C.\n");
	printf("\t\t\t\t     O objetivo deste programa a te dar acesso rapido a ferramentas da linguagem C.\n\n\n\n\n\n");
	system("pause>null");
	
	printf("\t\t\t\t\t\t\t\tEscolha uma opçao:\n\n");
	printf("\t\t\t\t\t\t\t\t(1) Bibliotecas\n");
	printf("\t\t\t\t\t\t\t\t(2) Comandos system\n");
	printf("\t\t\t\t\t\t\t\t(3) Logica de Programacao\n");
	printf("\t\t\t\t\t\t\t\t(4) Operadores Logicos\n");
	printf("\t\t\t\t\t\t\t\t(5) Extras\n");
	scanf("%d", &opcao);
	system("null");
	system("cls");
	
	switch (opcao){
    case 1:
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
    	system("pause>null");
    break;
    
	case 2:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
		system("pause>null");
    break;
    
	case 3:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
		system("pause>null");
	break;
	
    case 4:
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
    	system("pause>null");
    break;
    
	case 5:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
		system("pause>null");
	break;
	default:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tA VALIDAR");
		system("pause>null");
		}
	return 0;

}