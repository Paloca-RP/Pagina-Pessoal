#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main() {
   
    	
	int opah;
	ola:
	printf ("insira um numero");
	scanf("%d",&opah);
	printf("***********************\n");
	
	printf("***********************\n");
	
	if(opah==1)
	{
		printf("O meu primeiro programa em Linguagem C!\n");
		printf("****************************************");
		printf("\nO meu primeiro programa em \"Linguagem C \" \nFoi um bom comeco.\n Vamos continuar.\n");		
		printf("****************************************\n");
		goto ola;
	}
	
	else if (opah==2)
	{
		char c = 'r';
		short j = 127;
		int k = 32767;
		double v = 12.45;
		float x = 23.67;
			printf("c= %c\n", c);
			c=c+1;
			printf("c= %c\n", c);
			printf("j= %d\n", j);
			j=j-1;
			printf("j= %d\n", j);
			printf("k= %d\n", k);
			k =-4;
			printf("k= %d\n", k);
			printf("Valores finais:\n\tc = %c\n\tj = %d\n\t",c,j);
			printf(" v=%f, x=%f\n", v, x);
			
			goto ola;
	}
	
	else if (opah == 3)
	{
		char val1 ='a' , val2 ='b';
		int ano = 2017;
		float fator = 1.345;
		printf("A variavel letra tem o valor: %c",val1);
		printf("A variavel letra tem o valor: %c",val2);
	    printf("A variavel ano tem o valor: %d",ano);
	    printf("A variavel fator tem um valor inicial : %f", fator);
	    fator = 1.200000;
	    printf("A variavel fator tem um valor inicial : %f", fator);
		
		goto ola;		
	}
	
	else if (opah == 4)
	{
		short n1 = 32767;
		 short n2 = n1 + 1;
		 int n3 = n1 + 1;
		
		 printf("n1=%d\nn2=%d\nn3=%d\n\n", n1, n2, n3); 
	}
	
	else if(opah == 5)
	{
		printf("O Tamanho em bytes de  de um \"char\"\t\t\t: %d\n",
		sizeof(char));
		printf("O Tamanho em bytes de  de um \"short\"\t\t\t: %d\n",
		sizeof(short));
		printf("O Tamanho em bytes de  de um \"int\"\t\t\t: %d\n",
		sizeof(int));
		printf("O Tamanho em bytes de  de um \"double\"\t\t\t: %d\n",
		sizeof(double));
		
		goto ola;
	}
	
	else if (opah == 6)
	{		
		printf("O Tamanho em bytes de  de um \"char\"\t\t\t: %d\n",sizeof(char));
		printf("Valor Max: %d\n", CHAR_MAX);
		printf("Valor Min: %d\n", CHAR_MIN);
		printf("O Tamanho em bytes de  de um \"short\"\t\t\t: %d\n",sizeof(short));
		printf("Valor Max: %d\n", SHRT_MAX);
		printf("Valor Min: %d\n", SHRT_MIN);
		printf("O Tamanho em bytes de  de um \"int\"\t\t\t: %d\n",sizeof(int));
		printf("Valor Max: %d\n",INT_MAX);
		printf("Valor Min: %d\n",INT_MIN );
		printf("O Tamanho em bytes de  de um \"float\"\t\t\t: %d\n",sizeof(float));
		printf("Valor Max: %e\n",FLT_MAX);
		printf("Valor Min: %e\n", FLT_MIN);
		printf("O Tamanho em bytes de  de um \"double\"\t\t\t: %d\n",sizeof(double));
		printf("Valor Max: %e\n", DBL_MAX);
		printf("Valor Min: %e\n", DBL_MIN);
		
		goto ola;
	}
	
	else if (opah == 7)
	{
		printf("\\n = <ENTER> - CR \n");
		printf("\\\\ = <BACKSLASH> - \\\n");
		printf("\\t = <TAB> - VT\n");
		printf("%%%% = <PERCENTAGE SIGN> - %%\n");
		goto ola;		
	}
	
	else if (opah == 8)
	{
		int dia, mes, ano;
		printf("Insira o dia:");
			scanf("%d",&dia);
		printf("Insira o mes:");
			scanf("%d",&mes);
		printf("Insira o ano:");
			scanf("%d",&ano);
			
		printf("A data introduzida é: %d / %02d / %02d \n",ano,mes,dia);
		
		goto ola;
	}
	
	else if (opah == 9)
	{
		int aba,obo, soma, sub, mult;
		
		printf("inserir numero: ");
		scanf("%d",&aba);
		printf("\n inserir numero: ");
		scanf("%d",&obo);
		
		soma=aba+obo;
		sub=aba-obo;
		mult=aba*obo;
		
		printf("\nA soma é %d, a subtração %d e a multiplicacao %d", soma, sub, mult);
		goto ola;
	}
	
	else if (opah == 10)
	{
		
		int dia, mes, ano;
		printf("Insira o dia:");
			scanf("%d",&dia);
		printf("Insira o mes:");
			scanf("%d",&mes);
		printf("Insira o ano:");
			scanf("%d",&ano);
			
		printf("A data introduzida é: %d / %d / %d \n",ano,mes,dia);
		
		goto ola;
	}
	
	else if (opah==11)
	{
		int num;
	    char serie;
	
	    printf("Insira o numero de serie: ");
	    scanf("%d", &num);
	    printf("Serie: ");
	    scanf(" %c", &serie);
	    //Scanf de %c tem que ter um espaço antes do %
	
	    printf("%c - %04d", toupper(serie), num);
	    goto ola;
	}
	
	else if (opah == 12)
	{
		
	}
	
	else 
	{
		printf ("fds");
	}
	
	
	
	return 0;
}
