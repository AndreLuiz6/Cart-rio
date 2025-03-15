#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h>//biblioteca de alocação de espaço em memoria 
#include <locale.h>// biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsavel por cuidar das strings

int registro()
{
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
	printf("digite o CPF:");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);
    
    FILE *file;
    file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome:");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	printf("digite o sobrenome:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo:");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
}
int consulta ()
{
   char cpf[40];
   char conteudo[200];
   
   printf("digite o CPF");
   scanf("%s",cpf);
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	printf("Arquivo nao localizado\n\n ");
   }
   while(fgets(conteudo,200,file)!= NULL)
   {
   	printf("\nEssas sao as informaçoes do usuario:");
   	printf("%s",conteudo);
   	}
   	system("pause");
}
int deletar()
{
	char cpf[40];
	
	printf("digite o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
		printf("usuario nao encontrado \n");
		system ("pause");
		
	}
}

int main()
{
	int opcao=0;
	int x=1;

	
	for(x=1;x=1;)

	{
	system("cls");
	setlocale (LC_ALL, "Portuguese");
	

	printf("¨¨Cartorio da Empresa¨¨\n\n"); //inicio do menu

	printf("Escolha a opção desejada do menu:\n\n");

	printf("\t1 - registrar nomes\n\n");

	printf("\t2 - consultar nomes\n\n");

	printf("\t3 - deletar nomes\n\n"); //final do menu
	
	printf("opção ->");
	
	scanf("%d", &opcao);
	
	system("cls");
	switch(opcao)
	{
		case 1:
		registro(); 
	    break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Essa opção nao esta disponivel\n");
		system("pause");
		break;
			
		}
			
			
		
	}

	}
	


