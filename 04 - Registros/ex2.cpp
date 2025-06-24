#include <iostream>

using namespace std;

// criacao da struct Carro
struct Carro{
    string marca;
    int ano;
    double distancia, consumo;
};


int main()
{
    // inicializacao da struct
    Carro c;
    
    // entrada dos dados
    cout << "Digite a marca: ";
    cin >> c.marca;
    cout << "Digite o ano: ";
    cin >> c.ano;
    cout << "Digite a distancia: ";
    cin >> c.distancia;
    cout << "Digite o consumo: ";
    cin >> c.consumo;
    
    // condicionais para possiveis erros na entrada dos dados
    if (c.distancia < 0 || c.consumo < 0){
        cout << "ERRO! Valor negativo!" << endl;
    }
    else if ((c.distancia == 0) & (c.consumo == 0)){
        cout << "Este carro ainda não fez viagens!" << endl;
    }
    // condicional para calculo da quilometragem
    else{
        cout << endl;
        cout << "Quilometros por litro: " << c.distancia / c.consumo << endl;
    }
    
    return 0;
}