#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int contarDivisores(int n)
{
	int cont = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			if(i*i == n)
			{
				cont++;
			}
			else
			{
				cont += 2;
			}
		}
	}	
	return cont;	
}

int main()
{
	
	int num = 1, qtd, maxDivisores, resultado;
	
	// leitura inicial
	cin >> num;
	
	if(num == 0)
	{
		return 0;	
	}	
	else
	{
		vector<int> nums(num);
		for(int i = 0; i < num; i++)
		{
			cin >> nums[i];	
		}		
		
		// logica algoritmo
		sort(nums.begin(), nums.end());
		
		for(int i = 0; i < nums.size(); i++)
		{
			qtd = contarDivisores(nums[i]);
			
			if(qtd > maxDivisores)
			{
				maxDivisores = qtd;
				resultado = nums[i];
			}
			else if(qtd == maxDivisores)
			{
				if(nums[i] < resultado)
				{
					resultado = nums[i];
				}
			}
		}
		
	}
	
	cout << resultado << endl;
	
	return 0;
}
