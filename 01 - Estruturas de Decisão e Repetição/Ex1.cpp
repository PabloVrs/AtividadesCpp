#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declara��o da vari�vel
	int ano;

    //entrada de dados
	cout << "Digite o ano: ";
	cin >> ano;

    //condi��o e sa�da da resposta
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		cout << ano << " � um ano bissexto" << endl;

	}else {
		cout << ano << " n�o � um ano bissexto" << endl;
	}

	return 0;
}