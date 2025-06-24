#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");
    // declaracao das variaveis
	int n;
	int pares = 0, soma = 0;
	
    // entrada do numero de elementos
	cout << "Informe o numero de elementos: ";
	cin >> n;

    // declaracao do vetor de tamanho n
	int vetor[n];

    // entrada dos elementos no vetor
	cout << "Informe os elementos: ";
	for (int i=0; i < n; i++){
		cin >> vetor[i];

        // condicao para somar no numero de pares
		if (vetor[i] % 2 == 0){
			pares++;
        // condicao para somar os elementos impares
		}else{
			soma += vetor[i];
		}
    }

    // saida dos resultados
	cout << "Quantidade de pares: " << pares << endl;
	cout << "Soma dos �mpares: " << soma << endl;
	

	return 0; 
}