#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");
    // declaracao das variaveis
	int n;
	
    // entrada do numero de elementos
	cout << "Informe o numero de elementos: ";
	cin >> n;

    // declaracao do vetor de tamanho n
	int vetor[n];

    // entrada dos elementos no vetor
	cout << "Informe os elementos: ";
	for (int i=0; i < n; i++){
		cin >> vetor[i];
    }

    // loop para percorrer o vetor trocando os pares lado a lado
	for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){

                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // saida do vetor resultante
    cout << "Vetor resultante: ";
    for (int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }

	return 0; 
}