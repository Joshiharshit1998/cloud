#include<stdio.h>
#include<conio.h>
void f(int x){
	if(x==0){
	return;}
	else{
	
	printf("*");
	f(n-1);
}
}

void f1(int x,int y){
	if(x==0){
		return;
	}
	int i=1;
	if(i<n){
	
	f(i);
	printf("/n");
	i++;
	f1(n-1,i);
}

	  
	
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,1);
}
