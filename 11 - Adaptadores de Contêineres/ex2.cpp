#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// funcao para inverter k elementos
void inverteKElementos(queue<int>& fila, int k){
    // caso a fila seja vazia, ou k<=0, a funcao nao se aplica
    if (fila.empty() || k <= 0){
        return;
    }

    int n = fila.size();

    // k = n, se k > n
    if(k > n){
        k = n;
    }

    stack<int> pilha;

    // coloca k primeiro elementos dentro da pilha
    for(int i = 0; i < k; i++){
        pilha.push(fila.front());
        fila.pop();
    }

    // coloca os elementos da pilha de volta na fila (ficam invertidos)
    while (!pilha.empty())
    {
        fila.push(pilha.top());
        pilha.pop();
    }
    
    // move os elementos restantes para o fim da fila (para manter ordem original)
    int resto = n - k;
    for(int i = 0; i < resto; i++){
        fila.push(fila.front());
        fila.pop();
    }
}



int main()
{
    // inicia as variaveis
    queue<int> fila;
    int n, k, valor;

    // entrada dos dados
    cout << "Digite o tamanho da fila: ";
    cin >> n;

    cout << "Fila original: ";
    for(int i = 0; i < n ; i++){
        cin >> valor;
        fila.push(valor);
    }    

    cout << "Digite o valor de k: ";
    cin >> k;

    // imprime fila original
    cout << "Fila original: ";
    queue<int> copia = fila;
    while(!copia.empty()){
        cout << copia.front() << " ";
        copia.pop();
    }
    cout << endl;

    // chamada da funcao
    inverteKElementos(fila, k);

    // imprime fila modificada
    cout << "Fila modificada: ";

    while(!fila.empty()){
        cout << fila.front() << " ";
        fila.pop();
    }
    
    return 0;
}