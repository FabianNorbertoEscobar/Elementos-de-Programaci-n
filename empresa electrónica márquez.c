#include<stdio.h>
#include<conio.h>
#include<locale.h>
int validar(char[],int,int);
void inicializar(int[],int);
void funcion2(int[],int[],int[],char[][31],int);
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int na[500],pr[500],st[500],art,vart,uv,sum[500],band,may,mayp,i;
    char des[500][31];
    printf("\n EMPRESA ELECTR�NICA M�RQUEZ \n\n");
    printf("\n La empresa desea controlar la compra de mercader�as que necesitan \n para la reparaci�n y comercializaci�n de aparatos el�ctricos \n y electr�nicos de uso dom�stico:\n\n");
    printf("\n Ingrese los datos correspondientes a la base de datos del sistema \n\n");
    for(i=0;i<500;i++)
        {
        art=validar("\n Ingrese el n�mero de art�culo (entre 1 y 500) \n\n",1,500);
        na[art-1]=art;
        pr[art-1]=validar("\n Ingrese el punto de reposici�n (entre 1 y 800) \n\n",1,800);
        st[art-1]=validar("\n Ingrese el stock (entre 1 y 1500) \n\n",1,1500);
        fflush(stdin);
        printf("\n Ingrese la descripci�n del art�culo: \n\n");
        gets(des[art-1]);
        }
    inicializar(sum,500);
    printf("\n\n A continuaci�n, Ingrese los datos de las ventas realizadas\n\n ");
    vart=validar("\n Ingrese el n�mero de art�culo vendido (entre 1 y 100) \n (Ingrese cero para finalizar)\n\n",1,100);
    while(!(vart==0))
        {
        uv=validar("\n Ingrese la cantidad de unidades vendidas (entre 1 y 350)\n\n",1,350);
        if(st[vart-1]>uv)
            {
            st[vart-1]-=uv;
            sum[vart-1]+=uv;
            }
        else
            printf("\n Stock insuficiente \n\n");
        vart=validar("\n Ingrese el n�mero de art�culo vendido (entre 1 y 100) \n (Ingrese cero para finalizar)\n\n",1,100);
        }
    printf("\n N� DE ART�CULO \t DESCRIPCI�N \t UNIDADES VENDIDAS");
    for(i=0;i<500;i++)
        printf("\n %d \t %s \t %d",na[i],des[i],sum[i]);
    printf("\n Ar�culos que quedaron por debajo del punto de reposici�n \n");
    printf("\n Pto de reposici�n \t Stock \t N�de art�culo \t Descripci�n \n\n");
    funcion2(pr,st,na,des,500);
    band=0;
    for(i=0;i<500;i++)
        {
        if(band==0||sum[i]>may)
            {
            band=1;
            may=sum[i];
            mayp=i;
            }
        }
    printf("\n Art�culo que ha vendido la mayor cantidad de unidades \n");
    printf("\n N�mero de art�culo:%d \t Descripci�n:%s\n",na[mayp],des[mayp]);
    printf("\n Cantidad de unidades vendidas:%d \t Stock:%d \n\n",may,st[mayp]);
    getch();
    }
int validar(char A[],int li,int ls)
    {
    int d;
    do
        {
        printf("%s",A);
        scanf("%d",&d);
        }
    while(!(d>=li&&d<=ls));
    return d;
    }
void inicializar(int v[],int ce)
    {
    int i;
    for(i=0;i<ce;i++)
        v[i]=0;
    }
void funcion2(int A[],int B[],int C[],char D[][31],int ce)
    {
    int i;
    for(i=0;i<ce;i++)
        if(B[i]<A[i])
            printf("\n %d \t\t %s \t\t %d \t\t %d",C[i],D[i],A[i],B[i]);
    }
