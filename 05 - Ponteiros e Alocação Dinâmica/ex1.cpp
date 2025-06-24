#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    // TRECHO 1

    // inicializacao das variaveis x e y
    int x = 5, y = 2;
    // o ponteiro z recebe o endereco de x
    int *z = &x;
    // o ponteiro w recebe o valor do que z aponta (5), alocando espaço dinâmico
    int *w = new int;
    *w = *z;
    // r recebe a soma 5 + 2 + 5 + 5
    int r = x + y + *w + *z;    
    // r = 17
    cout << r << endl;


    // TRECHO 2

    // inicializacao das variaveis b1, b2 e b3
    bool b1 = true, b2 = false, b3 = true;
    // ponteiro c recebe o endereco de b2
    bool *c = &b2;
    // d recebe o valor b3 (true)
    bool d = b3;
    // r2 = true and false and true
    bool r2 = b1 and *c and d;
    // r2 = false = 0
    cout << r2 << endl;

    // TRECHO 3

    // declaracao das variaveis
    float a3 = 2.3, *b33 = &a3, c3 = 4.5;
    // declaracao da lista v de tamanho 3
    float v[3] = {1.1, 2.2, 3.3};
    // inicializacao do ponteiro x3
    float *x3 = new float[3];
    // ponteiro y3 recebe vaor de v
    float *y3 = v;
    // x3 posicao 0 recebe a3 (2.3)
    x3[0] = a3;
    // x3 posicao 1 recebe ponteiro b33 que aponta para valor a3 (2.3)
    x3[1] = *b33;
    // x3 posicao 2 recebe y3 posicao 2 + c3 (3.3 + 4.5 = 7.8)
    x3[2] = y3[2] + c3;
    // r3 = 2.3 + 2.3 + 7.8
    float r3 = x3[0] + x3[1] + x3[2];
    // r3 = 12.4
    cout << r3 << endl;

    delete[] x3;

    return 0;
}