#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n1,n2,n3;
    printf("\n\n Ingrese tres n�meros enteros, confirmando cada uno con ENTER.\n\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<=n2&&n2<=n3)
        printf("\n\n Los n�meros est�n ordenados crecientemente \n\n");
    else
        printf("\n\n Los n�meros no est�n ordenados crecientemente \n\n");
    getch();
    }
