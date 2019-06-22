#include<stdio.h>
#include<conio.h>
void gp(int a,int r,int n){
	if(n==0){
		printf(a);
	}
	else{
		a=a*r;
		f(a,r,n-1);
		
	}
}
void main(){
	gp(2,3,4);
}
