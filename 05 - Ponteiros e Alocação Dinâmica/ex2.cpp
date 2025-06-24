#include <iostream>

using namespace std;

// criacao da funcao para contar pares e impares
void contaNums(int *v, int n, int *ptrp, int *ptri){
    *ptrp = 0;
    *ptri = 0;

    for (int i = 0; i < n; i++){
        if (v[i] % 2 == 0){
            *ptrp += 1;
        }
        else{
            *ptri += 1;
        }
    }   
}

int main()
{
    // entrada do tamanho n
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    // alocacao dinamica do vetor de tamanho n
    int *vetor = new int [n];

    // entrada dos dados no vetor
    cout << "Digite os elementos: ";
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    int pares, impares;

    // chama da funcao
    contaNums(vetor, n, &pares, &impares);

    // saida dos resultados
    cout << "\nQuantidade de pares: " << pares << endl;
    cout << "Quantidade de impares: " << impares << endl;    

    // liberacao da memoria
    delete[] vetor;

    return 0;
}