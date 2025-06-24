#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis
	int n, soma = 0;

    //Entrada de n
	cout << "Digite um valor inteiro: ";
	cin >> n;

    //Loop para calcular a soma dos valores ímpares
	for (int i= 1; i <= n; i++){
		if(i % 2 != 0){
		soma += i;
		}
	}
	
    //Saída do resulado
	cout << "Soma dos ímpares: " << soma << endl;

	return 0;
}