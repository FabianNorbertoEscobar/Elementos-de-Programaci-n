#include<stdio.h>
#include<conio.h>
#include<locale.h>
void compacto(char,int,int);
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    char car;
    int lin,cxl,i;
    printf("\n Ingrese el caracter del cual desea imprimir un compacto: \n\t\t");
    scanf("%c",&car);
    do
        {
        printf("\n Ingrese la cantidad de l�neas del compacto \n (m�ximo 10 l�neas) \t\t");
        scanf("%d",&lin);
        }
    while(lin>10);
    do
        {
        printf("\n Ingrese la cantidad de caracteres por l�nea del compacto \n (m�ximo 26 caracteres) \t\t");
        scanf("%d",&cxl);
        }
    while(cxl>26);
    printf("\n");
    compacto(car,lin,cxl);
    getch();
    }
void compacto(char c,int l,int cl)
    {
    int i,j;
    for(i=0;i<l;i++)
        {
        for(j=0;j<cl;j++)
            printf("%c",c);
        printf("\n");
        }
    }
