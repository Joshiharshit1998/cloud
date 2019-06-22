#include<stdio.h>
#include<conio.h>
int main(){
	double term=1.0;
	int i=1;
	double sum1=0;
	double sum2=0;
	double x;
	double epsilon=10e-7;
	while(term<epsilon){
		if(i%2==1){
			sum1+=term;
			term=term*x/i;
		}
		else{
			sum2+=term;
			term=term*x/i;
		}
		i=i+1;
	}
	printf("%d",sum1-sum2);
}
