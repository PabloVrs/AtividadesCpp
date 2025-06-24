#include <iostream>
#include <locale.h>
using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");

    // declaracao das variaveis
    string frase;
    char letra;
    float n_ocorr = 0;
    int total_letras = 0;

    // entrada da frase e letra
    cout << "Digite uma frase: ";
    getline(cin,frase);

    cout << "Digite uma letra: ";
    cin >> letra;

    // percorre a frase e armazena o numero de ocorrencias da letra e o total das letras
    for(size_t i = 0; i < frase.length(); i++){
        if(letra == frase[i]){
            n_ocorr++;
        }
        if (isalpha(frase[i])){
            total_letras++;
        }
    }

    // saida dos resultados
    cout << "Caracteres na frase: " << total_letras << endl;
    cout << "Ocorrencias de " << letra << ": " << n_ocorr << endl;
    cout << "Percentual: " << n_ocorr/total_letras << endl;

	return 0; 
}