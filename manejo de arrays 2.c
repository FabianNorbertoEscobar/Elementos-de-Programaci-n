#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define tope 100
int leeyvalida(void);
int cargarvector(int[],int);
void inicializar(int[],int);
void burbujeoconorden(int[],int[],int);
void listar2vectores(int[],int[],int);
void ordeningresomaximos(int[],int[],int,int);
void main()
{
setlocale(LC_CTYPE,"Spanish");
int vec[tope],ord[tope],ce,max;
printf("\n ORDENAMIENTO POR BURBUJEO CONSERVANDO EL ORDEN \n");
printf("\n Ingrese la cantidad de n�meros que desea ingresar: \n (m�ximo 100 n�meros)\n");
ce=leeyvalida();
printf("\n Usted puede ingresar %d valores enteros\n",ce);
cargarvector(vec,ce);
inicializar(ord,ce);
burbujeoconorden(vec,ord,ce);
printf("\n Valores ordenados en forma creciente \n");
printf("\n \t Valor \t Orden de ingreso \n");
listar2vectores(vec,ord,ce);
max=vec[ce-1];
printf("\n El valor m�ximo que se ha ingresado es %d \n",max);
printf("\n El orden de ingreso de los m�ximos es:\n");
ordeningresomaximos(vec,ord,ce,max);
getch();
}
int leeyvalida(void)
{
int x;
do
    scanf("%d",&x);
while(x<1||x>tope);
}
int cargarvector(int v[],int ce)
{
int dat,i;
for(i=0;i<ce;i++)
    {
    printf("\n Ingrese el %d� valor",i+1);
    scanf("%d",&dat);
    v[i]=dat;
    }
}
void inicializar(int v[],int ce)
{
int i;
for(i=0;i<ce;i++)
    v[i]=i+1;
}
void burbujeoconorden(int v[],int o[],int ce)
{
int i,j,hc,aux,ord;
j=0;
do
    {
    hc=0;
    j++;
    for(i=0;i<ce-j;i++)
        if(v[i]>v[i+1])
            {
            aux=v[i+1];
            v[i+1]=v[i];
            v[i]=aux;
            ord=o[i+1];
            o[i+1]=o[i];
            o[i]=o[i+1];
            hc=1;
            }
    }
while(hc==1);
}
void listar2vectores(int v[],int o[],int ce)
{
int i;
for(i=0;i<ce;i++)
    printf("\n \t %d \t %d \n",v[i],o[i]);
}
void ordeningresomaximos(int v[],int o[],int ce,int max)
{
int i;
for(i=0;i<ce;i++)
    if(v[i]==max)
        printf("\n\n\t %d \n",o[i+1]);
}
