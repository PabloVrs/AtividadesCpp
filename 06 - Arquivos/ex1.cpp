#include <iostream>
#include <fstream>
using namespace std;

// criacao struct Aluno
struct Aluno{
    string nome;
    double nota1, nota2;
};

// criacao funcao para calcular a media
double calculaMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main()
{
    // inicializacao das variaveis
    int N;
    double media;

    // entrada do numer de alunos
    cout << "Numero de alunos: ";
    cin >> N;

    // alocacao dinamica do vetor de alunos
    Aluno *vet_alunos = new Aluno[N];

    // entrada dos dados
    for (int i = 0; i < N; i++){
        cout << "Dados do Aluno " << i + 1 << ": " << endl;
        cout << "Nome: ";
        cin >> vet_alunos[i].nome;
        cout << "Nota 1: ";
        cin >> vet_alunos[i].nota1;
        cout << "Nota 2: ";
        cin >> vet_alunos[i].nota2;
        cout << "\n";
    }

    // abertura do arquivo e escrita de N na primeira linha
    ofstream arquivo;
    arquivo.open("alunos.txt");
    arquivo << N << endl;

    // escrita dos dados no arquivo
    for (int i = 0; i < N; i++){
        media = calculaMedia(vet_alunos[i]);
        arquivo << vet_alunos[i].nome << " " << vet_alunos[i].nota1 << " " << vet_alunos [i].nota2 << " " << media << endl;
    }

    // fechamento do arquivo e liberacao da memoria
    arquivo.close();
    delete[] vet_alunos;

    return 0;
}