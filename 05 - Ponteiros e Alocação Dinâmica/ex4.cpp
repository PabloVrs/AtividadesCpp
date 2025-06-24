#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    // declaracao das variaveis
    int m, n, valor, encontrado = 0;

    // entrada do tamanho da matriz
    cout << "Digite o valor de m e n: ";
    cin >> m >> n;

    // Alocacao da matriz
    int **matriz = new int*[m];
    for (int i = 0; i < m; i++){
        matriz[i] = new int[n];
    }

    // Leitura da matriz
    cout << "Digite a matriz: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    // Leitura do valor a ser procurado
    cout << "Digite o valor a ser procurado: ";
    cin >> valor;

    // Busca pelo valor
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] == valor){
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    // Saida do resultado
    if (encontrado){
        cout << "\nValor encontrado!" << endl;
    }
    else{
        cout << "\nValor nao encontrado!" << endl;
    }

    // Desalocacao da matriz
    for (int i = 0; i < m; i++){
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}