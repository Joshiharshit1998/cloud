#include<stdio.h>
#include<conio.h>
static int i=0;
int x=1;
int c=1;
int b,p;
int f(int x){
	int r;
if(x==0){
return 1;
}
c=c*r;
return (c*f(x-1));
}
void apgp(int a,int d,int r,int n){
	if(n==0){
		return;
		
	}
	b=(a+i*d)*f(i);
	printf("%d ",b);
	i++;
	apgp(a,d,r,n-1);
	
}
int main(){
	int a,d,r,n;
	scanf("%d %d %d %d",&a,&d,&r,&n);
	apgp(a,d,r,n);
}
