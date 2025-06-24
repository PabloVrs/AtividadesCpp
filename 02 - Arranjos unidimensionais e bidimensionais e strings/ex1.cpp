#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declaracao da variavel n
	int n;
	
    //entrada do numero de elementos do vetor
	cout << "Informe o número de elementos: ";
	cin >> n;

    // declaracao das demais variaveis
	float vetor[n], menor, temp;
	int pos = 0;
	
    //loop para armazenar valores
	cout << "Informe os elementos: ";
	for(int i = 0; i < n; i++){        
        cin >> vetor[i];
    }
	
    //pega menor valor e respectiva posicao
	menor = vetor[0];
	for(int i = 0; i < n; i++){
		if (vetor[i] < menor){
			menor = vetor[i];
			pos = i;
	    }
    }

    //troca menor valor com primeiro valor
	temp = menor;
	vetor[pos] = vetor[0];
	vetor[0] = temp;
	
    //imprime vetor resultante
    cout << "Vetor resultante: ";
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }


	return 0; 
}