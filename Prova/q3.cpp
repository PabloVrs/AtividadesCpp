#include <iostream>

using namespace std;

// implementacao da funcao que recebe o vetor original, o tamanho do vetor original e o tamanho do nevo vetor
int *copia_vetor(int vetor[], int n, int &k){
    // se k > n, k passa a ser n
    if (k > n){
        k = n;
    }
    
    // alocacao dinamica do novo vetor
    int *novo_vetor = new int[k];
    
    // atribuicao dos k valores ao novo vetor
    for(int i = 0; i < k; i++){
        novo_vetor[i] = vetor[i];
        
    }
    
    return novo_vetor;
}


int main()
{
    // atribuicao dos valores nas variaveis
    int vetor[] = {1,2,3,4,5,6,7,8};
    int tamanho = 8;
    int k = 10;

    // chamada da funcao
    int *resultado = copia_vetor(vetor, tamanho, k);
    
    // saida dos valores
    cout << "Novo vetor com os " << k << " primeiros elementos:" << endl;
    for (int i = 0; i < k; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    // limpeza da memoria
    delete[] resultado;

    return 0;
}