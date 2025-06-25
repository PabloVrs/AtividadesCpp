#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // declara as variaveis
    string linha, nome;
    int indice = 0;

    // entrada do nome do arquivo
    cout << "Digite o nome do arquivo: ";
    getline(cin, nome);

    // percorre o nome de tras pra frente para pegar o indice do ultimo ponto
    for (int i = int(nome.length()) - 1; i >= 0; i--){
        if(nome[i] == '.'){
            indice = i;
            break;            
        }
    }

    // abre o arquivo
    ifstream arquivo(nome);

    // caso nao abre, emite um erro
    if (!arquivo){
        cerr << "Erro: Nao foi possivel abrir o arquivo '" << nome << "'." << endl;
        return 1;
    }

    // cria o arquivo de copia com "Nome original + copia . extensao original"
    ofstream arquivoCopia(nome.substr(0, indice) + " copia" + nome.substr(indice));

    // pega linha por linha do arquivo original e inclui na copia
    while(getline(arquivo, linha)){
        arquivoCopia << linha << endl;
    }

    // fecha os arquivos
    arquivo.close();
    arquivoCopia.close();

    return 0;
}