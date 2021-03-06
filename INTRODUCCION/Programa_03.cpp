#include<iostream>

using namespace std;

int N1,N2,N3,max1,max2,c;

int Max(int a,int b);

int main()
{
	
	cout<<"Introduzca el valor del primer numero: "; 
	cin>>N1;
		
	cout<<"\nIntroduzca el valor del segundo numero: "; 
	cin>>N2;
	
	cout<<"\nIntroduzca el valor del tercer numero: "; 
	cin>>N3;
	
	max1 = Max(N1,N2);
	max2 = Max(max1,N3);
	
	cout<<"\n\nEl numero mayor es: "<<max2<<endl;
	
	return 0;
}

int Max(int a,int b)
{
	
	if(a>b){c = a;}
	else{c = b;}
	
	return c;
}
