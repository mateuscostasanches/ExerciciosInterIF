#include <iostream>
#include <vector>

using namespace std;

void VerificaAnguloEscolhido(vector<int>& NumerosEscolhidosOutros, int& NumeroEscolhido, int& AnguloEscolhido){

	if(NumerosEscolhidosOutros.back() == NumeroEscolhido){
		NumeroEscolhido += 5;
	}	
	
	AnguloEscolhido = (NumeroEscolhido%359);
	if(AnguloEscolhido == NumerosEscolhidosOutros.back()){
		AnguloEscolhido += 5;
	}
}

int main()
{
	int NumeroEscolhido, i, AnguloEscolhido;
	vector<int> NumerosEscolhidosOutros;
	
	cin >> NumeroEscolhido;

	while(cin >> i && i != 0){
		NumerosEscolhidosOutros.push_back(i);
		VerificaAnguloEscolhido(NumerosEscolhidosOutros,NumeroEscolhido,AnguloEscolhido);
	}
	
	cout << AnguloEscolhido << endl;
}
