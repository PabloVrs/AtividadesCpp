#include <iostream>
#include <list>

using namespace std;

// implementacao da funcao que conta ocorrencias do valor na lista
int ConteValores(list<int> lista, int valor){
    int cont = 0;

    // percorre a lista e soma a contagem caso encontre o valor
    for(int n : lista){
        if (n == valor){
            cont += 1;
        }
    }
    return cont;
}



int main ()
{

    // inicia as variaveis
    list <int> lista;
    int valor;
    int valorProcurado;

    // entrada dos dados ate o usuario apertar enter
    cout << "Entre com os valores da lista: ";

    while (cin >> valor){
        lista.push_back(valor);
        if (cin.peek() == '\n') break;
    }

    // entrada do valor a ser procurado
    cout << "Entre com qual elemento deseja encontrar: ";
    cin >> valorProcurado;

    // chamada e impressao da funcao
    int cont = ConteValores(lista, valorProcurado);
    
    cout << "Numero de ocorrencias do valor " << valorProcurado << ": " << cont;

    return 0;
}