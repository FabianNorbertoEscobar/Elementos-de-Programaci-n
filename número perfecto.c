#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n,div,i;
    div=0;
    printf("\n\n Ingrese un n�mero natural: \n\n\t");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        if(n%i==0)
            div+=i;
    if(n==div)
        printf("\n\n El n�mero %d es perfecto \n\n",n);
    else
        printf("\n\n El n�mero %d no es perfecto \n\n",n);
    getch();
    }
