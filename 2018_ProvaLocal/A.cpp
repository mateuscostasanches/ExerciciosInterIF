#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x, y;
	vector<int> resultado(3);
	cin >> x >> y;
	
	resultado[0] = pow((3*x),2) + pow(y,2);
	resultado[1] = 2 * pow(x,2) + pow((5*y),2);
	resultado[2] = -100*x + pow(y,3);
	
	if(resultado[0] > resultado[1] && resultado[0] > resultado[2])
	{
		cout << "Rafael Ganhou\n";
	}
	if(resultado[1] > resultado[0] && resultado[1] > resultado[2])
	{
		cout << "Beto Ganhou\n";
	}
	if(resultado[2] > resultado[0] && resultado[2] > resultado[1])
	{
		cout << "Carlos Ganhou\n";
	}
	
	return 0;
}
