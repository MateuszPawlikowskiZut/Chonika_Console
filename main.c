#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n, i = 0;

	printf("Podaj numer wierszy: "); scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
    	int j =  0;
		//Spacje
		for(j = 0; j < (n - i) + 40; j++)
		{
			printf(" ");
		}
		
		j = 0;
		
		//Gwiazdki
		for(j = 0; j < (2*i) - 1; j++)
			printf("*");
		
		printf("\n");
    }
	return 0;
}
