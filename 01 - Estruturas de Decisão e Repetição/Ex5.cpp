#include <iostream>
#include <locale.h>
#include <climits>
using namespace std;

int main()
{
    //Declara��o das vari�veis
    setlocale(LC_ALL, "Portuguese");
	int n, maior, menor, total, posmaior, posmenor;
    float soma;
	menor = INT_MAX;
	maior = 0;
	total = 0;
    soma = 0;

    //Entrada do primeiro n�mero
	cout << "Digite uma sequ�ncia de n�meros inteiros (0 para encerrar): \n";
	cin >> n;
    //Estrutura de repeti��o para entrada dos demais numeros e condi��es para determinar valores maiores,
    //menores e suas posi��es
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

    //Sa�da dos valores e suas posi��es
	cout << "Maior: " << maior << " / Posi��o: " << posmaior << endl;
	cout << "Menor: " << menor << " / Posi��o: " << posmenor << endl;
	cout << "M�dia: " << soma/total << endl;
	cout << "Total de n�meros: " << total << endl;	

	return 0;

}