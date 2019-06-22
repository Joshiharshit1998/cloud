#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int result[MAX];
int result_size;
void mult(int x){
	//multipy x with the result and update the result in reverse order
	int carry=0;
	for(int i=0;i<result_size-1;i++){
		int prod=result[i]*x+carry;
		result[i]=prod%i;
		carry=prod/10;
	}
	while(carry){
		result[result_size]=carry%10;
		carry=carry/10;
		result_size++;
	}
}

void fact(int n){
	result[0]=1;
	result_size=1;
	for(int x=2;x<=n;x++){
		mult(x);
	}
	//print result in reverse order
	for(int i=result_size-1;i>=0;i--){
		cout<<result[i];
	}
}
int main(){
	int n=4;
	fact(n);
}
