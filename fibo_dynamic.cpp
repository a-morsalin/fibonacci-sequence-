#include<bits/stdc++.h>
using namespace std;

long a[4000000];

long fibo(long n)
{
	if(n<2)
		return 1;
	else if(a[n-1] >0 && a[n-2] > 0)
	{
		 a[n]= a[n-1]+a[n-2];
		 return a[n];
		
	}	
	else
	{
		a[n]=fibo(n-1)+fibo(n-2);
		return a[n];
	}
}

int main(){
	
	long n,i,sum=0;
	a[0]=1;
	a[1]=1;
	cout<<"Enter the Range of Term=";
	cin>>n;
	fibo(n);
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0)
			sum+=a[i];		
	}
	cout<<"Sum of Even Valued Term = "<<sum;
	
return 0;
}
