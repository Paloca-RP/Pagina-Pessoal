#include <stdio.h>
#include <stdlib.h>

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
	    prinft("A variavel ano tem o valor: %d",ano);
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
		printf("fazer");
	}
	
	else if (opah == 6)
	{
		printf("fazer");
	}
	
	else if (opah == 7)
	{
		
	}
	
	else if (opah == 8)
	{
		
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
	
	else 
	{
		printf ("fds");
	}
	
	
	
	return 0;
}
