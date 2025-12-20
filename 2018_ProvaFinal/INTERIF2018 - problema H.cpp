#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int numeroPessoas, pessoaMorta, sobreviventes, j;
	int contadorPulos = 0, contadorMortes = 0;
	
	cin >> numeroPessoas;
	cin >> pessoaMorta;
	
	sobreviventes = numeroPessoas;
	
	vector<pair<int,int> > pessoas(numeroPessoas);
	
	for (int i = 0; i < numeroPessoas; i++){
		pessoas[i] = make_pair(i+1, 0);
	}
	
	j = 0;
	while (sobreviventes > 1){
		if (pessoas[j].second == 0){
			contadorPulos++;
			
			if (contadorPulos == 2){
				pessoas[j].second = 1;
				contadorMortes++;
				
				if (contadorMortes == pessoaMorta){
					cout << "Morte " << pessoaMorta << ": " << pessoas[j].first << endl;
				}
				sobreviventes--;
				contadorPulos = 0;
			}
			
		}	
	j = (j + 1) % numeroPessoas;
	}
	
	for (int i = 0; i < numeroPessoas; i++){
		if (pessoas[i].second == 0){
			cout << "Sobrevivente: " << pessoas[i].first << endl;
		}
	}
}
