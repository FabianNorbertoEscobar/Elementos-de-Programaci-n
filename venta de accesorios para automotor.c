#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int cont,band,na,st,pr,mayst,mayna;
    cont=band=0;
    printf("\n VENTA DE ACCESORIOS PARA EL AUTOMOTOR \n\n");
    do
        {
        printf("\n Ingrese el n�mero de art�culo (entre 1000 y 5000) \n (Ingrese el n�mero de art�culo 9999 para finalizar): \n\t");
        scanf("%d",&na);
        }
    while(!((na>=1000&&na<=5000)||na==9999));
    while(na!=9999)
        {
        do
            {
            printf("\n Ingrese el stock del art�culo (entre 1 y 1000): \n\t");
            scanf("%d",&st);
            }
        while(!(st>=1&&st<=1000));
        do
            {
            printf("\n Ingrese el punto de reposici�n del art�culo: \n\t");
            scanf("%d",&pr);
            }
        while(!(pr>=1&&pr<=500));
        if(st<=pr)
            cont++;
        if(band==0||st>mayst)
            {
            band=1;
            mayst=st;
            mayna=na;
            }
        do
            {
            printf("\n Ingrese el n�mero de art�culo (entre 1000 y 5000) \n (Ingrese el n�mero de art�culo 9999 para finalizar): \n\t");
            scanf("%d",&na);
            }
        while(!((na>=1000&&na<=5000)||na==9999));
        }
    printf("\n La cantidad de art�culos que han quedado por debajo \n del punto de reposici�n es de: %d \n",cont);
    printf("\n El n�mero de art�culo con mayor stock es: %d \n\n",mayna);
    getch();
    }
