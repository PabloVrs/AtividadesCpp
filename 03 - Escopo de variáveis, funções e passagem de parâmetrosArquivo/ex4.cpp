#include <iostream>
#include <locale.h>
using namespace std;

//implementacao da funcao para calcular media
float media(float a, float b){
    return (a+b)/2;
}

//implementacao da funcao para converter fahrenheit para celsius
float celsius(float f){
    return ((f - 32) / 1.8);
}

//implementacao da funcao para converter celsius para fahrenheit
float fahrenheit(float c){
    return (c * 1.8 + 32);
}

//implementacao da funcao para calcular o somatorio
float somatorio (int N){
    float S = 0;
    for (int i = 1; i <= N; i++){
    S += (i * ( i + 1.0) / (i + 3.0));
    }
    return S;
}

//implementacao da funcao para imprimir o menu e receber o valor de n
int imprimemenu(){
    int n;
    cout << endl;
    cout << "1. Calcular a media de dois n�meros" << endl;
    cout << "2. Converter uma temperatura de Celsius para Fahrenheit" << endl;
    cout << "3. Converter uma temperatura de Fahrenheit para Celsius" << endl;
    cout << "4. Calcular o valor de S, como definido na fun��o anterior" << endl;
    cout << "5. Sair" << endl;  
    cout << "Escolha uma opcao: ";
    cin >> n;
    cout << endl;

    return n;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //inicializacao da variavel n
    int n;

    //chamda da funcao de impressao
    n = imprimemenu();

    //condicao para nao parar o programa
    while(n != 5){
        if (n < 1 || n > 5){
            cout << "Opcao invalida, por favor escolha outra: ";
            cin >> n;

        //condicao para chamada da funcao media
        }else if (n == 1){
            float n1, n2, m;

            cout << "Digite um numero real: ";
            cin >> n1;

            cout << "Digite outro numero real: ";
            cin >> n2;

            m = media(n1, n2);

            cout << "Media: " << m << endl;

            n = imprimemenu();

        //condicao para chamada das funcoes de converter temperaturas
        }else if (n == 2 || n == 3){

            float temp, conversao;

            cout << "Digite a temperatura: ";
            cin >> temp;

            if(n == 3){
                conversao = celsius(temp);
                cout << "Temperatura convertida: " << conversao << "�C" << endl;

            }else if(n == 2){
                conversao = fahrenheit(temp);
                cout << "Temperatura convertida: " << conversao << "�F" << endl;
                }
                        
                n = imprimemenu();

        // condicao para chamada da funcao somatorio
        }else if (n == 4){

            int parcela;
            float soma;

            cout << "Digite o numero de parcelas da soma: ";
            cin >> parcela;

            soma = somatorio(parcela);

            cout << "A soma das parcelas: " << soma <<endl;

            n = imprimemenu();
        }

    }

    //finalizacao do programa caso n == 5
    cout << "Programa finalizado.";


    return 0;
}
