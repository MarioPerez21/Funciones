#include<iostream>

using namespace std;

int N1,N2;

void Max(int a,int b);

int main()
{
	
		cout<<"Introduzca el valor del primer numero: "; 
	cin>>N1;
		
	cout<<"\nIntroduzca el valor del segundo numero: "; 
	cin>>N2;
	
	Max(N1,N2);
	
	return 0;
}

void Max(int a,int b)
{
	if(a>b)
	{
		cout<<"\n\n"<<N1; cout<<" es mayor";
	}else if(a<b)
			{
				cout<<"\n\n"<<N2; cout<<" es mayor";
			}
			else{
			
			cout<<"\nERROR!";
		}

}
