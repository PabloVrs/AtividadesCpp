#include <stdio.h>
#include <iostream>

using namespace std;

// criacao da struct Pessoa
struct Pessoa{
    string nome;
    int idade;
    double peso, altura;
};

// criacao da struct IMC
struct IMC{
    double valor;
    string faixa;
};

// funcao da struct IMC para calcular o IMC
IMC calcularIMC(Pessoa p){
    IMC resultado;
    
    // calculo da formula do IMC
    resultado.valor = p.peso / (p.altura * p.altura);
    
    // condicionais para o resultado do IMC baseado na idade e valores
    if (p.idade <= 60){
        if (resultado.valor < 18.5){
            resultado.faixa = "Abaixo do peso";
        }
        else if ((resultado.valor >= 18.5) & (resultado.valor <= 24.99)){
            resultado.faixa = "Peso ideal";
        }
        else if ((resultado.valor >= 25) & (resultado.valor <= 29.99)){
            resultado.faixa = "Sobrepeso";
        }
        else{
            resultado.faixa = "Obesidade";
        }
    }else{
        if (resultado.valor < 22){
            resultado.faixa = "Abaixo do peso";
        }
        else if ((resultado.valor >= 22) & (resultado.valor <= 27)){
            resultado.faixa = "Peso ideal";
        }
        else if ((resultado.valor >= 27) & (resultado.valor <= 29.99)){
            resultado.faixa = "Sobrepeso";
        }
        else{
            resultado.faixa = "Obesidade";        
        }
    }
    return resultado;
}
int main()
{
    // inicializacao das estruturas
    Pessoa p;
    IMC res;
    
    // entrada dos dados
    cout << "Entre com os dados da pessoa:" << endl;
    cout << "Digite o nome: ";
    cin >> p.nome;
    cout << "Digite a idade: ";
    cin >> p.idade;
    cout << "Digite o peso (em quilogramas): ";
    cin >> p.peso;
    cout << "Digite a altura (em metros): ";
    cin >> p.altura;

    // chamada da funcao
    res = calcularIMC(p);
    
    // saida dos dados
    cout << p.nome << "possui o IMC = " << res.valor << " e esta em " << res.faixa << endl;
    
    return 0;
}