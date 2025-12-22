#include <iostream>

using namespace std;

void Criptografar(int CoordenadaX, int CoordenadaY){
	
	int valorConvertidoX, valorConvertidoY;
	
	valorConvertidoX = CoordenadaX * 2;
	valorConvertidoY = CoordenadaY * 2;

	cout << "X = " << uppercase << hex << valorConvertidoX << endl;
	cout << "Y = " << uppercase << hex << valorConvertidoY << endl;
}

int main()
{
	int CoordenadaX, CoordenadaY;
	
	cin >> CoordenadaX;
	cin >> CoordenadaY;
	
	Criptografar(CoordenadaX, CoordenadaY);
	
}
