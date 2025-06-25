#include <iostream>
#include <fstream>
using namespace std;

// criacao struct Aluno
struct Aluno{
    string nome;
    double nota1, nota2, media;
};


int main()
{
    // inicializacao das variaveis
    int N, maiorI = 0, maiorMedia = 0;

    // criacao do ponteiro para Aluno
    Aluno *vet_alunos;
    
    // leitura do arquivo
    ifstream arquivo("alunos.txt");

    // se arquivo aberto
    if (arquivo){
        arquivo >> N;
        
        // criacao do vetor de alunos de tamanho N
        vet_alunos = new Aluno[N];

        // passagem dos dados do arquivo para as variaveis
        for (int i = 0; i < N; i++){
            arquivo >> vet_alunos[i].nome >> vet_alunos[i].nota1 >> vet_alunos[i].nota2 >> vet_alunos[i].media;
        }
    }
    
    // fechamento do arquivo
    arquivo.close();

    // procura e armazena indice da maior media
    for (int i = 0; i < N; i++){
        if (vet_alunos[i].media > maiorMedia){
            maiorMedia = vet_alunos[i].media;
            maiorI = i;
        }    
    }

    // exibe dados do aluno com maior media
    cout << "Nome: " << vet_alunos[maiorI].nome << endl;
    cout << "Nota 1: " << vet_alunos[maiorI].nota1 << endl;
    cout << "Nota 2: " << vet_alunos[maiorI].nota2 << endl;
    cout << "Media: " << vet_alunos[maiorI].media << endl;

    // liberacao da memoria
    delete[] vet_alunos;

    return 0;
}