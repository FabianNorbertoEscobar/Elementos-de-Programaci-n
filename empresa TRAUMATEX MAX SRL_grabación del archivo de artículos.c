#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
struct info1
    {
    int na;
    char art[31];
    int st;
    float pre;
    };
int validadato(int,int,int);
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    struct info1 aux;
    int na,st,i;
    char art[31];
    float pre;
    FILE *pf;
    pf=fopen("art�culos.dat","ab");
    printf("\n Cargue los datos de los art�culos. Recuerde que se tienen casi 5000.\n\n");
    i=0;
    printf("\n NUEVO ART�CULO \n\n");
    printf("\n Ingrese el n�mero de art�culo (entre 1000 y 15000)(Finaliza con cero):\n\n\t\t");
    do
        {
        scanf("%d",&na);
        }
    while(!(validadato(na,1000,15000)||na==0));
    while(na!=0&&i<5000)
        {
        aux.na=na;
        printf("\n Ingrese la descripci�n del art�culo (hasta 30 caracteres): \n\n\t\t");
        fflush(stdin);
        gets(art);
        strcpy(aux.art,art);
        printf("\n Ingrese la cantidad de unidades en stock (entre 1 y 5000):\n\n\t\t");
        do
            {
            scanf("%d",&st);
            }
        while(!validadato(st,1,5000));
        aux.st=st;
        printf("\n Ingrese el precio del art�culo: \n\n\t\t");
        do
            {
            scanf("%f",&pre);
            }
        while(pre<=0);
        aux.pre=pre;
        fwrite(&aux,sizeof(struct info1),1,pf);
        i++;
        printf("\n NUEVO ART�CULO \n\n");
        printf("\n Ingrese el n�mero de art�culo (entre 1000 y 15000)(Finaliza con cero):\n\n\t\t");
        do
            {
            scanf("%d",&na);
            }
        while(!(validadato(na,1000,15000)||na==0));
        }
    fclose(pf);
    printf("\n Archivo creado/actualizado... \n\n");
    getch();
    }
int validadato(int x,int li,int ls)
    {
    if(x>=li&&x<=ls)
        return 1;
    else
        return 0;
    }
