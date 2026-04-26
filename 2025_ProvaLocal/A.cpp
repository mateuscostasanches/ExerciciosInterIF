// Problema A

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // variavel inicial
    int numTotal, alvo, cont = 0, soma = 0, usar;
    cin >> numTotal;
    
    // leitura de valores inicial
    vector<int> valores(numTotal);
    for(int i = 0; i < numTotal; i++)
    {
        cin >> valores[i];
    }
    cin >> alvo;
    
    // Ordenacao decrescente
    sort(valores.begin(), valores.end(), greater<int>());
    
    // Logica principal algoritmo
    for(int i = 0; i < numTotal; i++)
    {
        usar = (alvo - soma)/valores[i];
        soma += usar * valores[i];
        cont += usar;
    }

    // Impressao final
    if(soma == alvo)
    {
        cout << cont << endl;
    }
    else
    {
        cout << "frustraka\n";
    }
    return 0;
}
