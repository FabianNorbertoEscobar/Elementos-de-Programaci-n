#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int hist,imp;
    char cod;
    printf("\n\n Ingrese n�mero de historia y c�digo(A, D, F, M � T) \n confirma cada uno con enter\n\n");
    scanf("%d%s",&hist,&cod);
    if(cod=='A')
        imp=20;
    else
        if(cod=='D')
            imp=40;
        else
            if(cod=='F')
                imp=60;
            else
                if(cod=='M'||cod=='T')
                    imp=150;
                else
                    printf("\n\n C�digo err�neo \n\n");
    printf("\n\n Historia:%d \t C�digo:%c \t Importe:%d \n\n",hist,cod,imp);
    getch();
    }
