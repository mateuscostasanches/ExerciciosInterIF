#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int valor;
	vector<int> louca;
	
	do{
		cin >> valor;
		if(valor != 0 && valor != -1)
		{
			louca.push_back(valor);
		}
		else if (valor == 0)
		{
			if(!louca.empty())
			{
			louca.pop_back();	
			}
		}
	} while(valor != -1);
	
	if(louca.empty())
	{
		cout << "-1" << endl;	
	} 
	else 
	{
		for(int i = 0; i < louca.size(); i++)
		{
			cout << louca[i] << endl;
		}	
	}
	return 0;
}
