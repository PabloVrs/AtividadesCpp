#include <iostream>

using namespace std;

// busca binaria imprimindo quantos valores foram descartados
void busca_binaria(int v[], int n, int procurado){
    int esq = 0, dir = n - 1, meio, iteracao = 0, qtd;
    bool achou = false;
    while ((esq <= dir) && !achou){
        iteracao++;
        meio = (esq + dir) / 2;
        if (v[meio] == procurado){
            qtd = (dir - esq + 1) - 1;            
            achou = true;

        }else if(v[meio] > procurado){
            qtd = dir - meio + 1;
            dir = meio - 1;

        }else{
            qtd = meio - esq + 1;
            esq = meio + 1;

        }
        cout << iteracao << "a iteracao: " << qtd << endl;
    }    
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
    busca_binaria(vetor, n, procurado);

    // liberacao da memoria
    delete[] vetor;

    return 0;
}