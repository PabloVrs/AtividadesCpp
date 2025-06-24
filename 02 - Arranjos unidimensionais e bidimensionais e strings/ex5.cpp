#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");

    // declaracao das variaveis
	int N, M;	
	int maiores = 0;

    // entrada do numero de linhas e colunas da matriz
	cout << "Informe o numero de linhas: ";
	cin >> N;

	cout << "Informe o numero de colunas: ";
	cin >> M;
	
    // declaracao da matriz de tamanho NxM
	int matriz[N][M];

    // entrada dos elementos da matriz
	cout << "Informe os elementos da matriz: " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cin >> matriz [i][j];

            // condicao para somar numero de elementos maiores que 10
			if (matriz[i][j] > 10){
				maiores++;
			}
		}
	}

    // saida do resultado
	cout << "Elementos maiores que 10 = " << maiores << endl;

	return 0; 
}