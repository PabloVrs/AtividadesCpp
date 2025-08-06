#include <iostream>
#include <vector>

using namespace std;

// implementacao do template
template <class T>
bool estaOrdenado(vector<T> vetor){
    // percorre o vetor e verifica se o valor no indice posterior é maior que indice anterior
    for (size_t i = 1; i < vetor.size(); i++){
        if (vetor[i] < vetor[i-1]){
            return false;
        }
    }
    return true;
}

int main()
{

    // criacao dos vetores
    vector<int> vetorInt = {1, 2, 3, 4, 5};
    vector<double> vetorDouble = {0.8, 0.9, 1.5, 6.7, 3.9};
    vector<char> VetorChar = {'a', 'b', 'c'};

    // chamada da funcao
    bool resint = estaOrdenado(vetorInt);
    bool resdouble = estaOrdenado(vetorDouble);
    bool reschar = estaOrdenado(VetorChar);

    // impressao dos resultados (1 = true, 0 = false)
    cout << "Vetor int ordernado? " << resint << endl;
    cout << "Vetor double ordernado? " << resdouble << endl;
    cout << "Vetor char ordernado? " << reschar << endl;
    
    return 0; 
}