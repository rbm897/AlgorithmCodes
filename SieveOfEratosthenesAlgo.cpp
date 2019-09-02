//Author : Ram Bhajan Mishra
//Program to find the Prime numbers between two numbers


#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,x,m;
	cout<<"Enter first number"<<endl;
	cin>>m; //Input first number (m)
	cout<<"Enter second number"<<endl;
	cin>>n; //Input second number (n)
	bool A[n];
	for(int i=1;i<=n;i++) {
		A[i]=true;
	}
	for(int i=2;i<=sqrt(n);i++) {
		if(A[i]==true) {
			int j=0;
			while( i * (i + j) <=n ) {
				x = i * (i + j);
				A[x]=false;
				j++;
			}
		}
	}
	cout<<"Prime number between "<<m<<" and "<<n<<" is : ";
	int cnt=0;
	for(int i=m;i<=n;i++) {
		if(A[i]==true) {
			cout<<i<<" ";
			cnt++;		
		}	
	}
	cout<<endl<<"Total Number of Prime Numbers between "<<m<<" and "<<n<<" is : "<<cnt<<endl;
	return 0;
}


