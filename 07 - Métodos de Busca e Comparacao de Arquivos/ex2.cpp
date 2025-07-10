#include <iostream>

using namespace std;

// funcao busca binaria imprimindo posicao
void busca_binaria(int v[], int n, int procurado){
    int esq = 0, dir = n - 1, meio, posicao = -1;
    while (esq <= dir){
        meio = (esq + dir) / 2;
        if (v[meio] == procurado){
            posicao = meio;
            break;
        }else if(v[meio] > procurado){
            dir = meio - 1;
        }else{
            esq = meio + 1;
        }
    }
    cout << "Posicao do elemento procurado: " << posicao << endl;
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