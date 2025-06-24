#include <iostream>
using namespace std;

//implementacao da funcao somatorio
float somatorio (int N){
    float S = 0;
    for (int i = 1; i <= N; i++){
        S += (i * ( i + 1.0) / (i + 3.0));
    }
    return S;
}

int main()
{
    //inicializacao das variaveis
    int parcela;
    float soma;

    // entrada do numero de parcelas
    cout << "Digite o numero de parcelas da soma: ";
    cin >> parcela;

    //chamada da funcao
    soma = somatorio(parcela);

    //saida da soma
    cout << "A soma das parcelas: " << soma;


    return 0;
}