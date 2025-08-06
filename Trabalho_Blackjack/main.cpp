#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <clocale>
#include <windows.h>

using namespace std;

// Struct para representar uma carta
struct Carta{
    string valor;
    string naipe;
    int pontos;
};

struct Jogador{
    string nome;
    bool ehBot;
    vector<Carta> mao;
};


// Funcao para criar e retornar um baralho completo com 52 cartas
vector<Carta> criarBaralho(){
    vector<Carta> baralho;
    vector<string> naipes = {"♥", "♦", "♣", "♠"};
    vector<string> valores = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    
    for (auto& naipe : naipes ){
        for (auto& valor : valores){
            int pontos;
            if (valor == "J" || valor == "Q" || valor == "K") pontos = 10;
            else if (valor == "A") pontos = 11;
            else pontos = stoi(valor);

            baralho.push_back({valor, naipe, pontos});
        }
    }
    // Embaralha o baralho
    srand(time(0));
    random_shuffle(baralho.begin(), baralho.end());

    return baralho;
}


// Funcao para imprimir uma carta
void mostrarCarta(const Carta& c){
    cout << c.valor << c.naipe << " ";
}

void mostrarMao(const Jogador& jogador, bool esconder = false){
    cout << jogador.nome << ": ";

    if(jogador.nome == "Dealer" && esconder){
        // Mostrar só a primeira carta e esconder a segunda
        mostrarCarta(jogador.mao[0]);
        cout << "??";
    }
    else if(jogador.ehBot || esconder){
        // Bots comuns: ocultar tudo
        for (size_t i = 0; i < jogador.mao.size(); i++){
                cout << "?? ";       
        }
    }
    else{
        // Jogador humano: mostrar todas
        for(const auto& carta: jogador.mao){
            mostrarCarta(carta);        
        }
    }
    cout << endl;
}

int main()
{
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    vector<Carta> baralho = criarBaralho();
    vector<Jogador> jogadores;

    // Jogador Humano
    Jogador jogadorHumano = {"Você", false, {}};
    jogadores.push_back(jogadorHumano);

    // Escolher numero de bots
    int numBots;
    do{
        cout << "Quantos bots participarão? (0 a 3): ";
        cin >> numBots;
    } while (numBots < 0 || numBots > 3);

    // Adicionar bots
    for (int i = 0; i < numBots; i++){
        Jogador bot = {"Bot " + to_string(i+1), true, {}};
        jogadores.push_back(bot);
    }

    // Dealer
    Jogador dealer = {"Dealer", true, {}};


    // Distribuir 2 cartas para cada jogador
    for (auto& jogador: jogadores){
        jogador.mao.push_back(baralho.back()); baralho.pop_back();
        jogador.mao.push_back(baralho.back()); baralho.pop_back();
    }
    dealer.mao.push_back(baralho.back()); baralho.pop_back();
    dealer.mao.push_back(baralho.back()); baralho.pop_back();

    // Mostrar maos
    cout << "\n=== Mãos iniciais ===\n";
    for(auto& jogador : jogadores){
        mostrarMao(jogador);
    }

    // Mostrar Dealer
    mostrarMao(dealer, true);

    return 0;
}