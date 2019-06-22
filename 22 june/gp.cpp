#include<stdio.h>
#include<conio.h>
void gp(int a,int r,int n){
	if(n==0){
		return;
	}
	printf("%d ",a);
	a=a*r;
	gp(a,r,n-1);
	
}
int main(){
	int a,r,n;
	scanf("%d%d%d",&a,&r,&n);
	gp(a,r,n);
}
