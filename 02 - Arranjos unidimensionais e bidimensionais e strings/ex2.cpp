#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
	setlocale(LC_ALL, "Portuguese");

    // declaracao das variaveis
	int vetor[8], positivo[8], negativo[8];
	int pos_i = 0, neg_i = 0;
	
    // entrada dos 8 numeros inteiros
	cout << "Digite 8 numeros inteiros: ";
	for(int i = 0; i < 8; i++){
		cin >> vetor[i];

        // condicao para armazenar os valores positivos e negativos em seus respectivos vetores
		if(vetor[i] >= 0){
			positivo[pos_i] = vetor[i];
			pos_i++;
		}else{
			negativo[neg_i] = vetor[i];
			neg_i++;
		}
	}

	
    // impressao dos positivos
	cout << "Positivos: ";
	for(int i = 0; i < pos_i; i++){
		cout << positivo[i] << " ";
	}

    // impressao dos negativos
	cout << endl << "Negativos: ";
	for(int i = 0; i < neg_i; i++){
		cout << negativo[i] << " ";
	}

	return 0; 
}