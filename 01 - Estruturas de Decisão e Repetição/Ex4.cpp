#include <iostream>
#include <locale.h>
#include <climits>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");
    //Declara��o das vari�veis
	int n, maior, menor, total;
    float soma;
	menor = INT_MAX;
	maior = 0;
	total = 0;
    soma = 0;

    //Entrada dos n�meros
	cout << "Digite uma sequ�ncia de n�meros inteiros (0 para encerrar): \n";
	cin >> n;

    //Repeti��o e condi��es para verificar maior e menor
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

    // sa�da dos resultados
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	cout << "M�dia: " << soma/total << endl;

	return 0;
}