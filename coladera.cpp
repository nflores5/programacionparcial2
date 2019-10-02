#include <iostream>

using namespace std;
void llenar(int v[], int n);
void colader(int v[],int n);
void mostrar(int v[], int n);
 main(){
 	int v[1000];
	llenar(v,1000);
	colader(v,1000);
	mostrar(v,1000);
	
 }
 void llenar(int v[], int n)
 {
	int cp=1;
	for(int i=0; i<n; i++){
  		
  		v[i]=cp;
   }
}
void mostrar(int v[], int n)
{
	for(int i=0;i<n; i++){
		if(v[i]==1)
		cout<<"-"<<i<<endl;
	}
}

void colader(int v[],int n)
{
	for(int i=2;i<n;i++)
	{
		if(v[i]==1)
			for(int j=i+1;j<n;j++){
				if(j%i== 0)
					v[j]= 0;
			}
			
	}
}
