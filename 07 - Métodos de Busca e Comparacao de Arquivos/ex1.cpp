#include <iostream>

using namespace std;

// busca sequencial usando for
bool busca_sequencial(int v[], int n, int procurado){
    for (int i = 0; i < n; i++){
        if (v[i] == procurado){
            return true;
        }
    }
    return false;
}

// busca sequencial usando while
bool busca_sequencial_while(int v[], int n, int procurado){
    int i = 0;
    while (i < n){
        if(v[i] == procurado){
            return true;
        }
        i++;
    }
    return false;
}



int main()
{
    // inicializacao das variaveis
    bool res;
    int vetor[] = {1, 5, 9, 7, 12, 3, 17};
    int n = 7;
    int procurado;

    // entrada do valor a ser procurado
    cout << "Digite qual valor deseja encontrar: ";
    cin >> procurado;

    // chamada da funcao
    res = busca_sequencial_while(vetor, n, procurado);

    // saida do resultado conforme variavel res
    if (res){
        cout << "Valor encontrado!";
    }else{
        cout << "Valor nao encontrado!";
    }

    return 0;
}