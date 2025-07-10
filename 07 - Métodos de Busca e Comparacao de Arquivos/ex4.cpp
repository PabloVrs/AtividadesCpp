#include <iostream>

using namespace std;

bool buscaR(int v[], int n, int procurado, int esq, int dir){
    int meio = (esq + dir) / 2;
    if (esq <= dir){
        if (v[meio] == procurado){
            cout << "Achou!";
            return true;
        }
        else if (v[meio] > procurado){
            return buscaR(v, n, procurado, esq, meio - 1);
        }
        else if (v[meio] < procurado){
            return buscaR(v, n, procurado, meio + 1, dir);
        }
    }
    cout << "Nao achou!";
    return false;
}


int main()
{
    // inicializao das variaveis
    int n, procurado;

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
    cout << "Digite o elemento procurado: ";
    cin >> procurado;

    // chamada da funcao
    int esq = 0, dir = n - 1;
    buscaR(vetor, n, procurado, esq, dir);

    // liberacao da memoria
    delete[] vetor;

    return 0;
}

/******************************************************************************
Agora responda:

1. Qual eh o melhor caso dessa funcao? Em um vetor de tamanho n, quantas comparacaoes
ocorreriam?

O melhor caso eh quando o valor procurado encontra exatamente no meio do vetor. A funcao 
calcula o meio e encontra o elemento imediatamente, sendo apenas 1 comparacao.

2. Qual eh o pior caso dessa funcao? Em um vetor de tamanho n, quantas comparacoes
ocorreriam?

O pior caso eh quando o valor procurado encontra em uma das pontas do vetor ou quando
nao se encontra no vetor. A cada chamada recursiva, o espaço de busca é dividido pela metade. 
Como em cada passo são feitas no máximo 2 comparacoes de chave (== e >), o número de comparações
eh proporcional a log_2n. A complexidade do pior caso é logaritmica, representada como 
O(logn).


3. Em qual classe de algoritmos (reveja a tabela apresentada na aula) essa fun¸c˜ao se
encaixa? Justifique

A busca binária se encaixa na classe de algoritmos de complexidade Logarítmica.
A característica principal da função é que ela não percorre todos os elementos. 
Em vez disso, a cada passo, ela descarta metade do conjunto de dados restante. 

*******************************************************************************/