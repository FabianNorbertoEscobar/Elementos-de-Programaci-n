#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    float a,b,c,p,sup;
    printf("\n\n Ingrese los tres lados de un tri�ngulo, de a uno por vez, \n confirmando cada uno con enter \n Procure que formen tri�ngulo \n\n");
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    sup=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\n\n La superficie de este tri�ngulo es de: %8.2f \n\n",sup);
    getch();
    }
