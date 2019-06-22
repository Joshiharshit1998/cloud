#include<stdio.h>
void b2d(int n,char c[],int i){
	if(i==0){
		return;
	}
	c[i]=n%2+'0';
	b2d(n/2,c,i-1);
	
}
void main(){
	int x;
	scanf("no is %d",&x);
	char c[33]={0};
	d2b(x,c,31);
	printf("%d",c);
}
