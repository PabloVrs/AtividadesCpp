#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    // incializacao das strings
    string nome, linha;

    // entrada do nome do arquivo
    cout << "Digite o nome do arquivo: ";
    cin >> nome;

    // leitura e escrita dos arquivos
    ifstream arquivo(nome);
    ofstream aceitas("aceitas.txt");
    ofstream recusadas("recusadas.txt");

    // condicao se os arquivos abriram normalmente
    if (arquivo.is_open() && aceitas.is_open() && recusadas.is_open()){
        // loop para armazenar cada linha
        while(getline(arquivo, linha)){
            // inicializacao das variaveis = 0
            int um = 0, zero = 0;
            // loop para leitura da quantidade de caracteres na linha
            for(size_t i = 0; i < linha.length(); i++){
                if (linha[i] == '1'){
                    um += 1;
                }else{
                    zero +=1;
                }
            }

            // caso aceite a condicao armazena no arquivo "aceitas"
            if ((zero % 2 == 0) && (um % 2 != 0)){
                aceitas << linha << endl;
            // caso contrario armazena no arquivo "recusadas"
            }else{
                recusadas << linha << endl;
            }           
        }

        // fecha os arquivos
        arquivo.close();
        aceitas.close();
        recusadas.close();
    }

    return 0;
}