#include<bits/stdc++.h>
using namespace std;
int main() {
	int rw,c,no,spc;
	cout<<"Enter number of rows : ";
	cin>>no;
	for (rw=1; rw<=no; rw++) {
		for (spc=no; spc>=rw; spc--) {
			cout<<" ";
		}
		for (c=1; c<=rw; c++) {
			cout<<c<<" ";
		}
		cout<<"\n";
	}
}
