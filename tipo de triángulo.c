#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    float a,b,c;
    printf("\n Ingrese los valores de los lados de un tri�ngulo, de a uno, \n confirmando cada uno con enter \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("\n Equil�tero \n");
    else
        if(a!=b&&b!=c&&a!=c)
            printf("\n Escaleno \n");
        else
            printf("\n Is�sceles \n");
    getch();
    }
