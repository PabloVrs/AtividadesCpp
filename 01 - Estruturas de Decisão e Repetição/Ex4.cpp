#include <iostream>
#include <locale.h>
#include <climits>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis
	int n, maior, menor, total;
    float soma;
	menor = INT_MAX;
	maior = 0;
	total = 0;
    soma = 0;

    //Entrada dos números
	cout << "Digite uma sequência de números inteiros (0 para encerrar): \n";
	cin >> n;

    //Repetição e condições para verificar maior e menor
	while (n != 0){
		if (n > maior){
			maior = n;
		}
        if (n < menor){
			menor = n;
        }
		total += 1;
		soma += n;
		cin >> n;
	}

    // saída dos resultados
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	cout << "Média: " << soma/total << endl;

	return 0;
}