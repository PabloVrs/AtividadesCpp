#include <iostream>

using namespace std;

// criacao da struct Aluno
struct Aluno{
    string nome;
    double media, faltas;
};


// criacao da funcao para verificar aprovacao
string verificaAprovacao(Aluno a){
    if (a.media >= 6 & a.faltas <= 18){
        return "APROVADO(A)";
    }
    else{
        return "REPROVADO(A)";
    }
}

int main()
{
    
    // inicializacao das variaveis
    int n;
    string situacao;
    
    // entrada do numero de alunos
    cout << "Digite o numero de alunos: ";
    cin >> n;
    
    // inicializacao da struct Aluno
    Aluno vet_alunos[n];
    
    // entrada dos dados dos alunos
    for (int i = 0; i < n; i++){
        cout << endl;
        cout << "Entre com os dados do aluno " << i + 1 << ":" << endl;
        cout << "Digite o nome: ";
        cin >> vet_alunos[i].nome;
        cout << "Digite a media: ";
        cin >> vet_alunos[i].media;
        cout << "Digite o numero de faltas: ";
        cin >> vet_alunos[i].faltas;
    }
    
    // verificacao da aprovacao e saida dos resultados
    for (int i = 0; i < n; i++){
        situacao = verificaAprovacao(vet_alunos[i]);
        cout << vet_alunos[i].nome << ": " << situacao << endl;
    }
    
    return 0;
}