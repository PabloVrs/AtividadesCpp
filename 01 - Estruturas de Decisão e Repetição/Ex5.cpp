#include <iostream>
#include <locale.h>
#include <climits>
using namespace std;

int main()
{
    //Declaração das variáveis
    setlocale(LC_ALL, "Portuguese");
	int n, maior, menor, total, posmaior, posmenor;
    float soma;
	menor = INT_MAX;
	maior = 0;
	total = 0;
    soma = 0;

    //Entrada do primeiro número
	cout << "Digite uma sequência de números inteiros (0 para encerrar): \n";
	cin >> n;
    //Estrutura de repetição para entrada dos demais numeros e condições para determinar valores maiores,
    //menores e suas posições
	while (n != 0){
		if (n > maior){
			maior = n;
			posmaior = total + 1;
		}
        if (n < menor){
			menor = n;
			posmenor = total + 1;
        }
		total += 1;
		soma += n;
		cin >> n;
	}

    //Saída dos valores e suas posições
	cout << "Maior: " << maior << " / Posição: " << posmaior << endl;
	cout << "Menor: " << menor << " / Posição: " << posmenor << endl;
	cout << "Média: " << soma/total << endl;
	cout << "Total de números: " << total << endl;	

	return 0;

}