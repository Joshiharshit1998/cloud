#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	static int c=0;
	string s1="10101";
	string s2="00110";
	for(int i=0;i<n;i++){
		if(s1[i]!=s2[i])
			c++;
	}
	cout<<"hamming distance is "<<c;
}
