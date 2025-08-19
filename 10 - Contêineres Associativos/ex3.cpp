#include <iostream>
#include <map>
#include <vector>

using namespace std;

// cria a struct com as estatisticas
struct Info{
    int frequencia = 0;
    int ultimaPosicao = 0;

};


int main(){

    // cria o mapa 
    map<string, Info> estatisticas;

    // entrada dos dados
    int n;
    cout << "Total de palavras: ";
    cin >> n;

    cout << "Palavras: ";
    for(int i = 0; i < n; i++){
        string palavra;
        cin >> palavra;

        // incrementa a frequencia para a palavra caso ja exista, senao cria e atribui 1
        estatisticas[palavra].frequencia++;
        // atualiza a posicao da palavra caso exista, senao cria naquela posicao
        estatisticas[palavra].ultimaPosicao = i + 1;
    }

    // impressao das palavras e estatisticas
    for (auto p : estatisticas){
        cout << "Palavra: " << p.first << endl
             << "- Ocorrencias: " << p.second.frequencia << endl
             << "- Ultima posicao: " << p.second.ultimaPosicao << endl;
    }

    return 0;

}