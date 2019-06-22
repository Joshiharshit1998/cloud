#include<stdio.h>
#include<conio.h>
void ser(int a,int b,int n){
	if(n==0){
		return;
	}
	printf("%d %d",a,b);
	printf(" ");
	a=a*2;
	b=b*3;
	ser(a,b,n-2);
}
int main(){
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	ser(a,b,n);
}
