#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n,i,j;
    printf("\n\n Ingrese un n�mero:\n\n\t");
    scanf("%d",&n);
    i=2;
    do
        {
        j=n%i;
        i++;
        }
    while(j!=0&&i<n);
    if(j==0)
        printf("\n\n El n�mero no es primo \n\n");
    else
        printf("\n\n El n�mero es primo \n\n");
    getch();
    }
