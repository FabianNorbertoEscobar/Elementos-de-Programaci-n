#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
{
setlocale(LC_CTYPE,"Spanish");
printf("\n #include<locale.h> \n\n void main()");
printf("\n {\n\t setlocale(LC_CTYPE,\"Spanish\");\n }\n");
printf("\n Con �sta librer�a y �ste seteo de la librer�a en Spanish");
printf("\n o en cualquier otro idioma, se pueden escribir caracteres como � o � \n\n");
getch();
}
