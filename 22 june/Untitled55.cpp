#include<bits/stdc++.h>
#include<string>
using namespace std;
void swap(char &a,char &b){
	char t=a;
	a=b;
	b=t;
}
void permute(char a[],int l,int r,int op[]){
	int ln=strlen(a);
	if(l==r){
		//cout<<a<<endl;
		int c=0;
		for(int j=0;j<strlen(a)-1;j++){
			if(a[j]==a[j+1])
				c++;
		}
		if(c==0)
				cout<<a<<endl;
		return;
	
}
	for(int i=l;i<r;i++){
		swap(a[l],a[i]);
		permute(a,l+1,r,op);
		swap(a[l],a[i]);
	}
	
}
int main(){
	int k,n;
	char a[k];
	int op[n];
	cin>>k;
	for(int i=0;i<k;i++)
		cin>>a[i];
	permute(a,0,k,op);
		
}
