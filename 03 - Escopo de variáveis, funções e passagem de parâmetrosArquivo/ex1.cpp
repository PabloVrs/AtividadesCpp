#include <iostream>
using namespace std;

//implementacao da funcao para calcular a media
float media(float a, float b){
    return (a+b)/2;
}


int main()
{

    //inicializacao das variaveis
    float n1, n2, m;

    //entrada dos numeros
    cout << "Digite um numero real: ";
    cin >> n1;

    cout << "Digite outro numero real: ";
    cin >> n2;

    //chamada das funcoes
    m = media(n1, n2);

    //saida do resultado
    cout << "Media: " << m << endl;

    return 0;
}