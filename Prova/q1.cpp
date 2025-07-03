#include <iostream>

using namespace std;

//criacao da struct racional
struct Racional{
    int numerador, denominador;
};

Racional soma(Racional a, Racional b){
    //inicializacao da variavel resposta
    Racional res;
    //implementacao da formula da soma de fracoes para variavel resposta
    res.numerador = a.numerador * b.denominador + a.denominador*b.numerador;
    res.denominador = a.denominador * b.denominador;
    return res;
}

Racional sub(Racional a, Racional b){
    //inicializacao da variavel resposta
    Racional res;
    //implementacao da formula da subtracao de fracoes para variavel resposta
    res.numerador = a.numerador * b.denominador - a.denominador*b.numerador;
    res.denominador = a.denominador * b.denominador;
    return res;
}

Racional mult(Racional a, Racional b){
    //inicializacao da variavel resposta
    Racional res;
    //implementacao da formula da multiplicacao de fracoes para variavel resposta
    res.numerador = a.numerador * b.numerador;
    res.denominador = a.denominador * b.denominador;
    return res;
}

Racional div(Racional a, Racional b){
    //inicializacao da variavel resposta
    Racional res;
    //implementacao da formula da divisao de fracoes para variavel resposta
    res.numerador = a.numerador * b.denominador;
    res.denominador = a.denominador * b.numerador;
    return res;
}

Racional exp(Racional a, int b){
    //inicializacao da variavel resposta
    Racional res;
    //condicao para expoente 0
    if (b == 0){
        res.numerador = 1;
        res.denominador = 1;
        return res;
    }
    else{
        //caso contrario efetuar potenciacao com b positivo usando modulo
        res.numerador = 1;
        res.denominador = 1;
        int pot = abs(b);
        for (int i = 0; i < pot; i++){
            res.numerador *= a.numerador;
            res.denominador *= a.denominador;
        }
        // caso b realmente seja positivo retorna a resposta
        if (b > 0){
            return res;
        }else{
            // caso contrario inverte numerador e denominador
            int aux;
            aux = res.numerador;
            res.numerador = res.denominador;
            res.denominador = aux;
            return res;
        }
    }
}

// funcao apenas mantem o numerador como a e denominador 1 
Racional intToRacional(int a){
    Racional res;
    res.numerador = a;
    res.denominador = 1;
    return res;
}

int main()
{
    // inicializacao das variaveis
    Racional a, b;
    a.numerador = 2;
    a.denominador = 3;
    b.numerador = 3;
    b.denominador = 5;
    int expoente = -3;
    int inteiro = 4;

    // inicializacao das variaveis e chamada das funcoes
    Racional adicao = soma(a, b);
    Racional subtracao = sub(a, b);
    Racional multiplicacao = mult(a, b);
    Racional divisao = div(a, b);
    Racional exponenciacao = exp(a, expoente);
    Racional inteiro_racional = intToRacional(inteiro);

    // impressao dos resultados
    cout << "A soma de " << a.numerador << "/" << a.denominador << " e " <<
    b.numerador << "/" << b.denominador << " eh " << adicao.numerador << "/" << adicao.denominador << endl;

    cout << endl << "A subtracao de " << a.numerador << "/" << a.denominador << " e " <<
    b.numerador << "/" << b.denominador << " eh " << subtracao.numerador << "/" << subtracao.denominador << endl;

    cout << endl << "A multiplicacao de " << a.numerador << "/" << a.denominador << " e " <<
    b.numerador << "/" << b.denominador << " eh " << multiplicacao.numerador << "/" << 
    multiplicacao.denominador << endl;

    cout << endl << "A divisao de " << a.numerador << "/" << a.denominador << " e " <<
    b.numerador << "/" << b.denominador << " eh " << divisao.numerador << "/" << 
    divisao.denominador << endl;

    cout << endl << "A exponenciacao de " << a.numerador << "/" << a.denominador << " elevado a " <<
    expoente << " eh " << exponenciacao.numerador << "/" << 
    exponenciacao.denominador << endl;

    cout << endl << "A conversao  de inteiro para racional de " << inteiro <<
    " eh " <<inteiro_racional.numerador << "/" << inteiro_racional.denominador << endl;    

    return 0;
}