#include <iostream>

using namespace std;

// criacao da Struct Pessoa
struct Pessoa{
    string nome;
    int idade;
};

// implementacao da funcao para comparar as duas pessoas levando em conta nome e idade
int comparaPessoa(Pessoa a, Pessoa b){
    if (a.nome < b.nome){
        return -1;
    }else if (a.nome > b.nome){
        return 1;
    }else{
        if (a.idade > b.idade){
            return -1;
        }else if (a.idade < b.idade){
            return 1;
        }else{
            return 0;
        }
    }
}

int main()
{
    // entrada dos dados
    int n;

    cout << "Total de pessoas: ";
    cin >> n;

    // alocacao dinamica do vetor de pessoas
    Pessoa *vet_pessoas = new Pessoa[n];

    for(int i = 0; i < n; i++){
        cout << "Informe os dados da pessoa " << i + 1 << ": ";
        cin >> vet_pessoas[i].nome >> vet_pessoas[i].idade;
    }

    // loop de comparacao de pessoas as ordenando
    for(int i = 0; i < n - 1; i++){
        int indiceMenor = i;

        for (int j = i + 1; j < n; j++){
            if (comparaPessoa(vet_pessoas[j], vet_pessoas[indiceMenor]) == -1){
                indiceMenor = j;
            }
        }
        
        if (indiceMenor != i){
            Pessoa temp = vet_pessoas[i];
            vet_pessoas[i] = vet_pessoas[indiceMenor];
            vet_pessoas[indiceMenor] = temp;
        }
    }

    // saida do vetor ordenado
    cout << endl << "Vetor odenado: " << endl;
    for (int i = 0; i < n; i++){
        cout << vet_pessoas[i].nome << " " << vet_pessoas[i].idade << endl;
    }
    
    // liberacao da memoria
    delete[] vet_pessoas;

    return 0;
}