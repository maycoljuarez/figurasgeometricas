/*nombre:
autor:maycol juarez
lugar: ITV
instrucciones: 
*/
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float a;
	float al;
	float ap;
	float ap_1;
	float at;
	float b;
	float b_1;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float r;
	float r_1;
	float v;
	do {
		cout << "ingresar valores para V de TETRAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (sqrtf(2))/12*pow(a,3);
	cout << " la Volumen  es igual a " << v << endl;
	return 0;
}

