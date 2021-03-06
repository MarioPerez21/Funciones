#include<iostream>

using namespace std;

int N1, fact;

int factorial(int a);

int main()
{
	cout<<"Introduzca el valor del numero: ";
	cin>>N1;
	
	fact= factorial(N1);
	cout<<"\nEl ";cout<<N1;cout<< "! es: ";cout<<fact<<endl;
	
	return 0;
}

int factorial(int a)
{
	int i;
	int resultado=1;
	
	for(i=1;i<=a;i++)
	{
		resultado *=i;
	}
	
	return resultado;
	
}
