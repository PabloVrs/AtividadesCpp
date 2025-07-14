#include <iostream>

using namespace std;

// implementacao do selection sort normal
void selection_sort(int A[], int n){
    int min, aux;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i+1; j < n; j++){
            if (A[j] < A[min]){
                min = j;
            }
        }
        aux = A[i];
        A[i] = A[min];
        A[min] = aux;
    }
}

// implementacao do selection sort decrescente
void selection_sort_desc(int A[], int n){
    int min, aux;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i+1; j < n; j++){
            if (A[j] > A[min]){
                min = j;
            }
        }
        aux = A[i];
        A[i] = A[min];
        A[min] = aux;
    }
}

// implementacao do insertion sort normal
void insertion_sort(int A[], int n){
    int aux, j;
    for (int i = 1; i < n; i++){
        aux = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > aux){
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = aux;
    }
}

// implementacao do insertion sort normal decrescente
void insertion_sort_desc(int A[], int n){
    int aux, j;
    for (int i = 1; i < n; i++){
        aux = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < aux){
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = aux;
    }
}


int main()
{
    // inicia as variaveis e entrada dos dados
    int vetor[10];
    int n;

    cout << "Digite o tamanho do vetor (maximo 10): ";
    cin >> n;
    cout << "Digite os elementos: ";
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    // imprime o vetor original
    cout << "Vetor original:" << endl;
    for (int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }    

    // chamada da funcao selection sort decrescente
    selection_sort_desc(vetor, n);
    
    // saida do vetor apos selection sort decrescente
    cout << endl << "Vetor apos selection sort decrescente: " << endl;
    for (int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }     

    // chamada da funcao insertion sort decrescente
    insertion_sort_desc(vetor, n);

    // saida do vetor apos insertion sort decrescente
    cout << endl << "Vetor apos insertion sort decrescente: " << endl;
    for (int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }  

    return 0;
}