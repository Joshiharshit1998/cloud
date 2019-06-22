#include<stdio.h>
#include<conio.h>
void reverse(int a[],int begin,int end){
	if(begin>=end){
		return;
	}
	else{
		int t=a[begin];
		a[begin]=a[end];
		a[end]=t;
		 reverse(a,begin+1,end-1);
	}
}
int main(){
	int a[]={2,4,7,9,56,3};
	int begin=0;
	int end=sizeof(a)/sizeof(int);
	reverse(a,begin,end);
	for(int i=0;i<end;i++){
	printf("%d ",a[i]);
	}
}
