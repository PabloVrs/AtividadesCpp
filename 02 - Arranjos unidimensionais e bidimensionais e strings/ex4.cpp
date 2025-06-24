#include <iostream>
#include<climits>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //declaracao das variaveis
	int N, M;	
	int maior = INT_MIN;
	int soma = 0, pos = 0;

    // entrada do numero de linhas e colunas da matriz
	cout << "Informe o número de linhas: ";
	cin >> N;

	cout << "Informe o número de colunas: ";
	cin >> M;
	
    // declarao da matriz de tamanho NxM
	int matriz[N][M];

    // entrada dos elementos da matriz
	cout << "Informe os elementos da matriz: " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cin >> matriz [i][j];

            // condicao para pegar o maior elemento da matriz e sua posicao
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
				pos = j;
			}
		}
	}

    // loop para somar os elementos da coluna "pos" (de maior valor)
	for (int i = 0; i < N; i++){
		soma += matriz[i][pos];
	}

    // saida do resultado da soma da coluna
	cout << "Soma = " << soma << endl;

	return 0; 
}