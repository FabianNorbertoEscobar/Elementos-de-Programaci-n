#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define Pi 3.14
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    float r,d,longi,sup;
    printf("\n Ingrese el radio de un c�rculo: \t\t");
    scanf("%f",&r);
    d=2*r;
    longi=Pi*2*r;
    sup=Pi*r*r;
    printf("\n Di�metro: %8.2f \n Longitud de circunferencia: %8.2f \n Superficie del c�rculo: %8.2f \n\n",d,longi,sup);
    getch();
    }
