#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int num,c1,c2,c3,c4,c5;
    printf("\n\n Ingrese un n�mero de 5 cifras: \n\n\t\t");
    scanf("%d",&num);
    c5=num%10;
    c4=num/10%10;
    c3=num/10/10%10;
    c2=num/10/10/10%10;
    c1=num/10/10/10/10;
    if(c1==c5&&c2==c4)
        printf("\n\n El n�mero es capic�a \n\n");
    else
        printf("\n\n El n�mero no es capic�a \n\n");
    getch();
    }
