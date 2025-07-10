#include <iostream>

using namespace std;

int descubra(int vet[], int n, int k){
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if (vet[i] < k){ // comparacao 1
            x += vet[i];
        }
        if (vet[i] > k){ // comparacao 2
            y += vet[i];
        }
    }
    return y - x;
}


int main()
{
    // inicializao das variaveis
    int n, k, res;

    // entrada do numero de elementos do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    // alocacao dinamica do vetor
    int *vetor = new int [n];

    // leitura dos dados no vetor
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    // entrada do elemento a ser procurado
    cout << "Digite k: ";
    cin >> k;

    // chamada da funcao
    res = descubra(vetor, n, k);

    cout << "A funcao retornou: " << res << endl;

    // liberacao da memoria
    delete[] vetor;

    return 0;
}


/******************************************************************************
Agora responda:

1. O que essa funcao retorna?

Essa funcao retorna a soma dos elementos maiores que k menos a soma dos elementos menores que k

2. Quantas vezes a comparacao 1 eh realizada?

A comparacao 1 eh realizada n vezes (o numero de elementos do vetor)


3. Quantas vezes a compara¸c˜ao 2 ´e realizada?

A comparacao 2 eh realizada n vezes (o numero de elementos do vetor) 

4. Qual eh o total de comparacoes?

2n comparacoes

*******************************************************************************/