#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n;
    printf("\n\n Ingrese un n�mero:\n\n\t\t");
    scanf("%d",&n);
    if(n%2==0)
        printf("\n\n El n�mero es par \n\n");
    else
        printf("\n\n El n�mero es impar \n\n");
    getch();
    }
