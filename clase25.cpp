#include<iostream>

using namespace std;

void relleno(int l,float **m);

void imprimecabezas(int l,float **m);

void imprime(int l,float **m);

int main()
{
    cout<<"Escriba un numero del 3 al 11"<<endl;
    int l=0;
    cin>>l;
    if(l>=3 && l<=11)
    {
        float ** matriz = new float *[l];
        for (int i = 0; i < l; i++)
        {
            matriz[i] = new float[l+2];
        }
        relleno(l, matriz);
        imprimecabezas(l, matriz);
	imprime(l,matriz);
    }
    else
    {
        cout<<"El numero no esta en el rango valido"<<endl;
    }
    
    return 0;
}

void relleno(int l,float **m)
{
    for(int i = 0; i<l; i++)
    {
        for(int j = 0; j < l+2; j++)
        {
            m[i][j] = i + j;
        }  
    }
}

void imprimecabezas(int l, float **m)
{
    float sum=0;
    for (int i = 0; i<l+2; i++)
    {
        sum += m[0][i];
	if (i-2 >= 0)
	{
        cout<<m[i-2][0]<<" ";
	}
    }
    cout<<endl;
    cout<<sum<<endl;
}

void imprime(int l,float **m)
{
    for (int j = 0; j<l+2; j++)
    {
        for ( int i = 0; i<l; i++)
        {
            cout<<" "<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
