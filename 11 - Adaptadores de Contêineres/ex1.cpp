#include <iostream>
#include <stack>

using namespace std;


int main()
{
    // inicia variaveis
    string frase;
    stack<char> pilha;

    // recebe a string original
    cout << "String Original: ";
    getline(cin, frase);

    // percorre a string armazenando os caracteres na pilha
    for(long unsigned i = 0; i < frase.size(); i++){
        pilha.push(frase[i]);
    }

    // enquanto a pilha nao esta vazia, imprime os caracteres pelo topo, invertendo a string
    cout << "String Invertida: ";
    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
    }

    return 0;
}