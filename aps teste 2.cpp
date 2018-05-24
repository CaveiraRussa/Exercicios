#include <bits/stdc++.h>
	using namespace std;
int main(){
int i,a,op,r,p,fim;
fim=0;
do{
a=1;
i=1;
r=0;
p=0;
if (fim==1){
	cout <<"Entao vamos novamente mortal"<<endl;
	cout <<" "<<endl;
}if (fim==0){
cout << "Bem vindo mortal"<<endl;
cout << "Sou Namuras, o Mago supremo"<<endl;
cout << "Protetor do mundo e de toda realidade"<<endl;
cout << "Usarei meus poderes para uma magica incrivel"<<endl;
cout << "Irei advinhar o numero que você esta pensando"<<endl;
cout << "Pense em um numero"<<endl;
cout << "Vamos la! "<<endl;
}
do

{
	cout << ""<<endl;
	cout << ""<<endl;
	cout << "[1] O numero e 1 [2] O numero e par [3] O numero e impar"<<endl;
	cin >> op;
	switch (op) {
		case 1: 
			cout << ""<<endl;
			cout <<"Estou concentrando as energias do universo!"<<endl;
			cout <<"LEAM YREVE "<<endl<<"RETFA HTEET"<<endl<<"RUOY HSURB "<<endl<<"DNA SELBATEGEV!"<<endl<<"RUOY TAE"<<endl; 		//Eat your vegetables and brush your teeth after every meal
			cout <<".";
			cout <<".";
			cout <<"."<<endl;
			cout <<"Encontrei!"<<endl;
			if (p==0){		
			cout << ""<<endl;
			cout <<"Seu numero e: "<<r+1<<endl;
			}
			if (a>1&&p==1){
			cout << ""<<endl;
			cout <<"Seu numero e: "<<r+a<<endl;
			} if (a==1){
			cout << ""<<endl;
			cout <<"Seu numero e: "<<r<<endl;
			cout << ""<<endl;}
		cout <<" Deseja tentar novamente"<<endl;
		cout <<" [1] SIM [2] NAO"<<endl;
		cin >>fim;
		break;
		
		case 2: 
		cout <<"Divida o numero por 2"<<endl;
		p=1;
		i =i+1;
		r= pow(2,i-1);
		break;
		
		case 3:
		cout <<"Agora subtraia 1 e divida por 2"<<endl;
		a=a+1;
		r=r+(pow(2,i));
		i= i+1;
		break;
	}
}while(op!=1);	
}while(fim==1);
return 0;
}
