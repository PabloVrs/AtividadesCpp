#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara??o das vari?veis
	float laboratorio, semestral, final, media;

	//Entrada das notas
	cout << "Digite a nota do trabalho de laborat�rio: ";
	cin >> laboratorio;

	cout << "Digite a nota da avalia��o semestral: ";
	cin >> semestral;

	cout << "Digite a nota do exame final: ";
	cin >> final;

	//C�lculo da m�dia
	media = ((laboratorio * 2) + (semestral * 3) + (final*5)) / 10;

	//Sa?da da m�dia
	cout << "M�dia ponderada: " << media << endl;
	
	//Estrutura de condi��o para as notas
	if (media >= 8 && media <= 10){
		cout << "Conceito: A" << endl;
	}else if (media >= 7 && media <= 7.9){
		cout << "Conceito: B" << endl;
	}else if (media >= 6 && media <= 6.9){
		cout << "Conceito: C" << endl;
	}else if (media >= 5 && media <= 5.9){
		cout << "Conceito: D" << endl;
	}else{
		cout << "Conceito: E" << endl;
	}

	return 0;
}