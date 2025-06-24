#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declaração da variável
	int ano;

    //entrada de dados
	cout << "Digite o ano: ";
	cin >> ano;

    //condição e saída da resposta
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		cout << ano << " é um ano bissexto" << endl;

	}else {
		cout << ano << " não é um ano bissexto" << endl;
	}

	return 0;
}