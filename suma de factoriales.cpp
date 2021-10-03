#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,n2, factorial = 1, factorial2 = 1, suma = 0;
	
	cout<<"Digite un numero: ";cin>>n;
	cout<<"Digite otro numero: ";cin>>n2;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	for(int t=1;t<=n;t++){
		factorial2 *= t;
	}
	suma = factorial+factorial2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	
	
	system("pause");
	return 0;
}
