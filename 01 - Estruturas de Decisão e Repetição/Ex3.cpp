#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Declara��o das vari�veis
	int n, soma = 0;

    //Entrada de n
	cout << "Digite um valor inteiro: ";
	cin >> n;

    //Loop para calcular a soma dos valores �mpares
	for (int i= 1; i <= n; i++){
		if(i % 2 != 0){
		soma += i;
		}
	}
	
    //Sa�da do resulado
	cout << "Soma dos �mpares: " << soma << endl;

	return 0;
}