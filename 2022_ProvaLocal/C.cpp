#include <bits/stdc++.h>

using namespace std;

int main(){

	int kids, a,b,c;
	int total = 0;
	string resposta = "NENHUMA";
	
	cin >> kids;
	cin >> a >> b >> c;
		
	if(a%kids == 0 && a > total){
		total = a;
		resposta = "A";
	}
	int somaAB = a+b;
	if(somaAB%kids == 0 && somaAB > total){
		total = somaAB;
		resposta = "AB";
	}
	int somaAC = a+c;
	if(somaAC%kids == 0 && somaAC > total){
		total = somaAC;
		resposta = "AC";
	}
	if(b%kids == 0 && b > total){
		total = b;
		resposta = "B";
	}
	if(c%kids == 0 && c > total){
		total = c;
		resposta = "C";
	}
	int somaBC = b+c;
	if(somaBC%kids == 0 && somaBC > total){
		total = somaBC;
		resposta = "BC";
	}
	int somaABC = a+b+c;
	if(somaABC%kids == 0 && somaABC > total){
		total = somaABC;
		resposta = "ABC";
	}

	cout << resposta << endl;
	cout << total << endl;
	return 0;
}
