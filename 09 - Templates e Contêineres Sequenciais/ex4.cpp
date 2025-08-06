#include <iostream>
#include <deque>

using namespace std;

// cria template e funcao que retorna maior elemento
template <class T>
T maiorElemento(deque<T> d){
    T maior = d[0];
    for (size_t i = 1; i < d.size(); i++){
        if(d[i] > maior){
            maior = d[i];
        }
    }
    return maior;
}

// cria template e funcao que retorna menor elemento
template <class T>
T menorElemento(deque<T> d){
    T menor = d[0];
    for (size_t i = 1; i < d.size(); i++){
        if(d[i] < menor){
            menor = d[i];
        }
    }
    return menor;
}

// cria template e funcao que conta quantidades do maior elemento
template <class T>
T contaMaior(deque<T> d){
    T maior = maiorElemento(d);
    int contador = 0;
    for (size_t i = 1; i < d.size(); i++){
        if(d[i] == maior){
            contador += 1;
        }
    }
    return contador;
}

// cria template e funcao que conta quantidades do menor elemento
template <class T>
T contaMenor(deque<T> d){
    T menor = menorElemento(d);
    int contador = 0;
    for (size_t i = 1; i < d.size(); i++){
        if(d[i] == menor){
            contador += 1;
        }
    }
    return contador;
}

int main()
{

    // cria deque 
    deque<int> d = {4, 2, 9, 9, 3, 1, 9, 1};

    // chama funcoes e imprime resultados
    cout << "Maior elemento: " << maiorElemento(d) << endl;
    cout << "Menor elemento: " << menorElemento(d) << endl;
    cout << "Quantidade de vezes que o maior aparece: " << contaMaior(d) << endl;
    cout << "Quantidade de vezes que o menor aparece: " << contaMenor(d) << endl;

    return 0;
}