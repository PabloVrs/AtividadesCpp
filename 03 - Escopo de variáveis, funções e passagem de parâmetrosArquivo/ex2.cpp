#include <iostream>
#include <locale.h>
using namespace std;

//implementacao da funcao que converte para celsius
float celsius(float f){
    return ((f - 32) / 1.8);
}

//implementacao da funcao que converte para fahrenheit
float fahrenheit(float c){
    return (c * 1.8 + 32);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //inicializacao das variaveis
    float temp, conversao;
    string unidade;

    // entrada da temperatura e unidade
    cout << "Digite a temperatura: ";
    cin >> temp;

    cout << "Digite a unidade: ";
    cin >> unidade;

    //condicoes para chamada da funcao correspondente
    if(unidade[0] == 'c'){
        conversao = celsius(temp);
        cout << "Temperatura convertida: " << conversao << "ºC" << endl;

    }else if(unidade[0] == 'f'){
        conversao = fahrenheit(temp);
        cout << "Temperatura convertida: " << conversao << "ºF" << endl;

    }else{
        cout << "ERRO unidade não identificada" << endl;
    }

    return 0;
}