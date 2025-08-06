#include <iostream>
#include <deque>

using namespace std;

// implementacao da funcao que calcula a media do deque
double mediaDeque(deque<int> d){
    double soma = 0;

    // percorre os valores do deque e soma os valores
    for(int valor : d){
        soma += valor;
    }

    // divide a soma pelo tamanho do deque e retorna
    return soma / d.size();
}

int main()
{

    // inicia as variaveis
    deque<int> d;
    int valor;

    cout << "Entre com os valores do deque: ";

    // recebe os dados ate o usuario apertar o enter
    while (cin >> valor){
        d.push_back(valor);
        if (cin.peek() == '\n') break;
    }

    // chama a funcao e imprime a media
    double media = mediaDeque(d);
    cout << "Media dos valores: " << media << endl;

    return 0;
}