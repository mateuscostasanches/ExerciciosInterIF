#include <iostream>

using namespace std;

void codificar(string mensagem, string senha)
{
	int valor_mensagem, valor_senha, novo;
	for(int i = 0; i < mensagem.size(); i++)
	{
		
		valor_mensagem = mensagem[i] - 'a';
		valor_senha = senha[i] - 'a' + 1;
		
		if(i % 2 == 0) //se i for par
		{
			novo = valor_mensagem - valor_senha;
		}
		else // se i for impar
		{
			novo = valor_mensagem + valor_senha;
		}
		novo = (novo % 26 + 26) % 26;
		mensagem[i] = (char)(novo + 'a');
	}
	
	// impressao final
	cout << mensagem << "\n";
}

void decodificar(string mensagem, string senha)
{
	int valor_mensagem, valor_senha, novo;
	for(int i = 0; i < mensagem.size(); i++)
	{
		
		valor_mensagem = mensagem[i] - 'a';
		valor_senha = senha[i] - 'a' + 1;
		
		if(i % 2 == 0) //se i for par
		{
			novo = valor_mensagem + valor_senha;
		}
		else // se i for impar
		{
			novo = valor_mensagem - valor_senha;
		}
		novo = (novo % 26 + 26) % 26;
		mensagem[i] = (char)(novo + 'a');
	}
	
	// impressao final
	cout << mensagem << "\n";
}

int main()
{
	int num = 1;
	string mensagem, senha;
	
	while (cin >> num && num != 0)
	{
		// leitura inicial
		cin >> mensagem >> senha;
		
		// algoritmo principal
		if(num == 1)
		{
			codificar(mensagem, senha);
		}		
		else if(num == 2)
		{
			decodificar(mensagem, senha);
		}
	}
	
	return 0;
}
