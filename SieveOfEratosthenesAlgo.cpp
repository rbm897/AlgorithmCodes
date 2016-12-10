//Author : Ram Bhajan Mishra
//Program to find the Prime numbers between given two numbers "m" and "n"


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,x,m;
	cin>>m>>n;
	bool A[n];
	for(int i=1;i<=n;i++)
	{
		A[i]=true;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(A[i]==true)
		{
			int j=0;
			while((pow(i,2)+(i*j))<=n)
			{
				x=(pow(i,2)+(i*j));
				A[x]=false;
				j++;
			}
		}
	}
	int cnt=0;
	for(int i=m;i<=n;i++)
	if(A[i]==true)
	cout<<i<<" ";
	return 0;
}
