#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#define tope 30
int fechavalida(int,int,int);
int cantdiasmes(int,int);
int bisiesto(int);
int cargarvectores(char[][6],int[],float[]);
void alquilerenpesos(float[],float[],float,int);
void totalalq(float[],int[],int);
void ponerenfecha(int[],int[],int[],int,int,int,int);
void fechadevolucion(int[],int[],int[],int[],int);
void listar(char[][6],int[],float[],int[],int[],int[],int);
float sumar(float[],int);
void main()
{
setlocale(LC_CTYPE,"Spanish");
int band1,band2,d,m,a,ce,dias[tope],dia[tope],mes[tope],ano[tope];
float dolar,totpes,totdol,percent,precio[tope],alq[tope];
char patentes[tope][6];
printf("\n EMPRESA DE ALQUILER DE AUTOM�VILES \n");
printf("\n Ingrese la fecha correspondiente al dia de alquiler: \n");
band1=0;
do
    {
    if(band1!=0)
        printf(" \n La fecha ingresada no existe. Ingrese una fecha correcta:\n");
    printf("\n Ingrese el d�a (en n�meros) de la fecha:\n\t");
    scanf("%d",&d);
    printf("\n Ingrese el mes (en n�meros) de la fecha:\n\t");
    scanf("%d",&m);
    printf("\n Ingrese el a�o (en n�meros) de la fecha:\n\t");
    scanf("%d,&a");
    band1=1;
    }
while(!fechavalida(d,m,a));
printf("\n Ingrese la cotizaci�n del d�lar en el d�a %d/%d/%d:\n\t",d,m,a);
band2=0;
do
    {
    if(band2!=0)
        printf("\n La cotizaci�n no es v�lida. Ingrese una cotizaci�n correcta:\n\t");
    scanf("%f",&dolar);
    band2=1;
    }
while(dolar<=0);
printf("\n Ingrese los datos de los alquileres. Se piden patentes alfanum�ricas de 6 caracteres,");
printf("\n la cantidad de d�as de alquiler y el precio diario del alquiler en d�lares");
printf("\n Se pueden ingresar hasta %d alquileres ya que la flota es de %d veh�culos.",tope,tope);
printf("\n Finalizar la carga de datos con la patente \"FINDIA\".\n");
ce=cargarvectores(patentes,dias,precio);
if(ce!=0)
    {
    percent=ce*100/tope;
    printf("\n Porcentaje de veh�culos alquilados:\t%f\n",percent);
    printf("\n ALQUILERES DE AUTOS DEL D�A %d/%d/%d \n",d,m,a);
    printf("\n COTIZACI�N DEL D�LAR:$\t%f\n",dolar);
    alquilerenpesos(precio,alq,dolar,ce);
    totalalq(alq,dias,ce);
    ponerenfecha(dia,mes,ano,d,m,a,ce);
    fechadevolucion(dia,mes,ano,dias,ce);
    printf("\n NRO.VEH�CULO\t D�AS DE ALQUILER\t PRECIO DEL ALQUILER\t FECHA DE DEVOLUCI�N\n");
    printf("\t\t EN PESOS\t DEL VEH�CULO\n");
    listar(patentes,dias,alq,dia,mes,ano,ce);
    totpes=sumar(alq,ce);
    totdol=totpes/dolar;
    printf("\n TOTAL RECAUDADO EN ALQUILERES (EN PESOS):\t%f\n",totpes);
    printf("\n TOTAL RECAUDADO EN ALQUILERES (EN D�LARES):\t%f\n",totdol);
    }
else
    printf("\n No hubieron alquileres en el d�a \n");
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
int cargarvectores(char pat[][6],int d[],float pr[])
{
int i,di;
float pre;
char pate[6];
i=0;
do
    {
    printf("\n\t Alquiler n�mero %d",i+1);
    printf("\n Ingrese la patente:\n\t");
    fflush(stdin);
    gets(pate);
    strcpy(pate,toupper(pate));
    printf("\n Ingrese la cantidad de d�as de alquiler:\n\t");
    scanf("%d",&di);
    printf("\n Ingrese el precio diario del alquiler en d�lares\n\t");
    scanf("%f",&pre);
    }
while(strlen(pate)!=6||di<=0||pre<=0);
while(strcmp(pat,"FINDIA")!=0)
    {
    strcpy(pat[i],pate);
    d[i]=di;
    pr[i]=pre;
    i++;
    do
        {
        printf("\n\t Alquiler n�mero %d",i+1);
        printf("\n Ingrese la patente:\n\t");
        fflush(stdin);
        gets(pate);
        strcpy(pate,toupper(pate));
        printf("\n Ingrese la cantidad de d�as de alquiler:\n\t");
        scanf("%d",&di);
        printf("\n Ingrese el precio diario del alquiler en d�lares\n\t");
        scanf("%f",&pre);
        }
    while(strlen(pate)!=6||di<=0||pre<=0);
    }
return i;
}
void alquilerenpesos(float pr[],float alq[],float dol,int ce)
{
int i;
for(i=0;i<ce;i++)
    alq[i]=pr[i]*dol;
}
void totalalq(float alq[],int dias[],int ce)
{
int i;
for(i=0;i<ce;i++)
    alq[i]*=dias[i];
}
void ponerenfecha(int d[],int m[],int a[],int d1,int m1,int a1,int ce)
{
int i;
for(i=0;i<ce;i++)
    {
    d[i]=d1;
    m[i]=m1;
    a[i]=a1;
    }
}
void fechadevolucion(int d[],int m[],int a[],int n[],int ce)
{
int i;
for(i=0;i<ce;i++)
    {
    d[i]+=n[i];
    while(d[i]>cantdiasmes(m[i],a[i]))
        {
        d[i]-=cantdiasmes(m[i],a[i]);
        m[i]++;
        if(m[i]>12)
            {
            m[i]=1;
            a[i]++;
            }
        }
    }
}
void listar(char pat[][6],int n[],float alq[],int d[],int m[],int a[],int ce)
{
int i;
for(i=0;i<ce;i++)
    printf("\n %s\t %d\t %f\t %d/%d/%d");
}
float sumar(float v[],int ce)
{
int i;
float acum;
acum=0;
for(i=0;i<ce;i++)
    acum+=v[i];
return acum;
}
