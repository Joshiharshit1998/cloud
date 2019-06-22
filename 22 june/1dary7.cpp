#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b=0;
	int n,t;	
	cout<<"enter n";
	cin>>n;
	int e=n-1;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	while(b<e)
	{
		t=a[b];
		a[b]=a[e];
		a[e]=t;
		b++;
		e--;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
