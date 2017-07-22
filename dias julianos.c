#include<stdio.h>
#include<conio.h>
#include<locale.h>
int fechavalida(int,int,int);
int cantdiasmes(int,int);
int bisiesto(int);
int julianos(int,int,int);
void main()
{
setlocale(LC_CTYPE,"Spanish");
int d,m,a,jul;
do
    {
    printf("\n Ingrese (en n�meros) el d�a: \n\n\t\t");
    scanf("%d",&d);
    printf("\n\n Ingrese (en n�meros) el mes: \n\n\t\t");
    scanf("%d",&m);
    printf("\n\n Ingrese (en n�meros) el a�o: \n\n\t\t");
    scanf("%d",&a);
    }
while(!fechavalida(d,m,a));
jul=julianos(d,m,a);
printf("\n\n D�as Julianos: %d \n\n",jul);
getch();
}
int fechavalida(int d,int m,int a)
{
int f=0;
if(a>1600&&m>=1&&m<=12&&d>=1&&d<=cantdiasmes(m,a))
    f=1;
return f;
}
int cantdiasmes(int m,int a)
{
int cd;
if(m==4||m==6||m==9||m==11)
    cd=30;
else
    if(m==2)
        cd=28+bisiesto(a);
    else
        cd=31;
return cd;
}
int bisiesto(int a)
{
if(a%4==0&&a%100!=0||a%400==0)
    return 1;
else
    return 0;
}
int julianos(int d,int m,int a)
{
int jul,i;
jul=d;
for(i=1;i<m;i++)
    jul+=cantdiasmes(i,a);
return jul;
}
