#include <iostream>
#include <string>

using namespace chrono;
using namespace std;


void IdentificarGanhador(string Linha1, string Linha2, string Linha3){
	
		
	if ((Linha1 == "XXX" || Linha2 == "XXX" || Linha3 == "XXX")    ||
		(Linha1[0] == 'X' && Linha2[0] == 'X' && Linha3[0] == 'X') ||
		(Linha1[1] == 'X' && Linha2[1] == 'X' && Linha3[1] == 'X') ||
		(Linha1[2] == 'X' && Linha2[2] == 'X' && Linha3[2] == 'X') ||
		(Linha1[0] == 'X' && Linha2[1] == 'X' && Linha3[2] == 'X') ||
		(Linha1[2] == 'X' && Linha2[1] == 'X' && Linha3[0] == 'X'))
	{
		cout << "X venceu!\n";
	} 
	else if ((Linha1 == "OOO" || Linha2 == "OOO" || Linha3 == "OOO")    ||
			(Linha1[0] == 'O' && Linha2[0] == 'O' && Linha3[0] == 'O')  ||
			(Linha1[1] == 'O' && Linha2[1] == 'O' && Linha3[1] == 'O')  ||
			(Linha1[2] == 'O' && Linha2[2] == 'O' && Linha3[2] == 'O')  ||
			(Linha1[0] == 'O' && Linha2[1] == 'O' && Linha3[2] == 'O')  ||
			(Linha1[2] == 'O' && Linha2[1] == 'O' && Linha3[0] == 'O'))
	{
		cout << "O venceu!\n";
	} 
	else if(Linha1.find('#') != string::npos ||  Linha2.find('#') != string::npos ||  Linha3.find('#') != string::npos)
	{
		cout << "Jogo em andamento\n";
	}
	else{
		cout << "Velha\n";
	}
}


int main()
{
	string Linha1, Linha2, Linha3;
	cin >> Linha1 >> Linha2 >> Linha3;
	IdentificarGanhador(Linha1, Linha2, Linha3);	
}

