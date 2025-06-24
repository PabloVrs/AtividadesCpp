#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //declara as variaveis string
    string palavra, confere;

    // entrada da palavra
    cout << "Digite uma palavra: ";
    cin >> palavra;

    //loop para percorrer a palavra de tras pra frente e armazenar na string "confere"
    for(int i = palavra.size() - 1 ; i >= 0; i--){
        confere+=palavra[i]; 
    }

    // condicao para checar se as duas strings sao iguais
    if (confere == palavra){
        cout << palavra << " é palíndromo";
    }else{
        cout << palavra << " não é palíndromo";
    }

	return 0; 
}