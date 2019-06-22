#include<bits/stdc++.h>
#include<string>
using namespace std;
void swap(char &a,char &b){
	char t=a;
	a=b;
	b=t;
}
void permute(char a[],int l,int r){
	int i;
	int ln=strlen(a);
	if(l==r){
		if(atoi(a)%7==0)
			cout<<a<<endl;
		return;
	}
	for(int i=l;i<r;i++){
		swap(a[l],a[i]);
		permute(a,l+1,r);
		swap(a[l],a[i]);
	}
	
}
int main(){
	int k;
	char a[k];
	cin>>k;
	for(int i=0;i<k;i++)
		cin>>a[i];
	permute(a,0,k);
}
