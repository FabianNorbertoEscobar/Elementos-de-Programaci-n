#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n,suma,i;
    printf("\n Ingrese un n�mero entero positivo:\n\n\t");
    scanf("%d",&n);
    suma=0;
    for(i=0;i<=n;i++)
        suma+=i;
    printf("\n\n La suma de los %d primeros n�meros naturales es %d \n\n",n,suma);
    getch();
    }
