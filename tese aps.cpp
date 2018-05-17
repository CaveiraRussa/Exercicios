#include <bits/stdc++.h>
	using namespace std;
int main(){
int i,a,op,r;
a=1;
i=0;
r=0;
do

{
	cout << "[1] o numero e 1, [2] o numero e par, [3] o numero e impar"<<endl;
	cin >> op;
	switch (op) {
		case 1: 
		cout <<"a:"<<a<<endl;
	cout <<"i:"<<i<<endl;
		r= pow(2,i);
			cout <<"r:"<<r<<endl;

	
		cout <<r+a<<endl;

		break;
		
		case 2: 
		i =i+1;
		cout <<i<<endl;
		break;
		
		case 3:
		a= a+1;
		i= i+1;
		break;
	}
}while(op!=1);	
return 0;
}
