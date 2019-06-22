#include<stdio.h>
#include<conio.h>
void	if(size<0){
		return;
	}
	if(a[size]<0){
		printf("%d",a[size]);
		printneg(a,size-1);
	}
}
int main(){
	int a[]={5,7,-10,-15,-29};
	int s=sizeof(a)/sizeof(int);
	printneg(a,s);
}id printneg(int a[],int size){

