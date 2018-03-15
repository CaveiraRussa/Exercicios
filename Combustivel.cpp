#include <bits/stdc++.h>
	using namespace std;
	#define KMH 12
int main(){
	int horas, km;
	double litros;
	cin>>horas>>km;
	litros = (horas*km*1.0)/KMH;
	printf ("%.3f\n",litros);
}
