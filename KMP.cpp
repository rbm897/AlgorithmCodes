// Author : Ram Bhajan Mishra
//Program to find the number of occurances of a given pattern in given text

#include<bits/stdc++.h>
using namespace std;
void lps(string pattern,int *temp,int n)        //To find the longest proper prefix which is also suffix
{
	        temp[0]=0;
	        int j=0;
          
	        for(int i=1;i<pattern.length();i++){
                    if((pattern[i]==pattern[j])){
                            temp[i]=j+1;
                            j++;
                    }
                    else{
                            while(pattern[i]!=pattern[j]){
                                  if(j!=0)
                                  j=temp[j-1];
                                  else
                                  break;
                            }
                            temp[i]=j+1;
                    }
          }
}
int main()
{
	  string text,pattern;
		cin>>text>>pattern;
		int temp[pattern.length()];
		int n=pattern.length();
		lps(pattern,temp,n);
		int j=0,cnt=0;
		for(int i=0;i<text.length();i++)
		{
			X:
			if(text[i]==pattern[j])
			j++;
			else
			{
				if(j!=0)
				{
					j=temp[j-1];
					goto X;
				}
			}
			if(j==pattern.length())
			{
				cnt++;
				j=temp[j-1];
			}
		}
		cout<<cnt;      //If cnt=0 means pattern not found 
 	return 0;
}
