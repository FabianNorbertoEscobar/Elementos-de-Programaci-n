#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    float l1,l2,hip,area;
    printf("\n\n Ingrese el cateto de un tri�ngulo rect�ngulo: \n\n\t\t");
    scanf("%f",&l1);
    printf("\n\n Ingrese el otro cateto: \n\n\t\t");
    scanf("%f",&l2);
    hip=sqrt(pow(l1,2)+pow(l2,2));
    area=hip*hip;
    printf("\n\n El �rea de un cuadrado de lado congruente a la hipotenusa \n del tri�ngulo rect�ngulo con esos catetos es:%20.2f \n\n",area);
    getch();
    }
