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
	if(l==r){
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
	char s[]="abc";
	int len=strlen(s);
	permute(s,0,len);
}
