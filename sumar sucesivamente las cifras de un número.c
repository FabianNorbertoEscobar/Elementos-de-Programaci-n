#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n,c1,c2,c3,c4;
    printf("\n\n Ingrese un n�mero entero de 4 cifras: \n\n");
    scanf("%d",&n);
    c4=n%10;
    c3=n/10%10;
    c2=n/10/10%10;
    c1=n/10/10/10;
    n=c1+c2+c3+c4;
    n=n/10+n%10;
    n=n/10+n%10;
    printf("\n\n Alsumar sucesivamente las cifras del n�mero ingresado hasta \n llegar a un �nico d�gito, se obtiene el n�mero %d \n\n",n);
    getch();
    }
