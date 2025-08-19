#include <iostream>
#include <queue>

using namespace std;


int main(){
    // inicia as variaveis
    int n, m, paciente;

    // entrada dos dados
    cout << "Total de pacientes: ";
    cin >> n;

    cout << "Total de atendimetos: ";
    cin >> m;

    priority_queue<int> fila;

    cout << "Lista de prioridade dos pacientes: ";
    for(int i = 0; i < n; i++){
        cin >> paciente;
        fila.push(paciente);
    }

    // imprime m maiores elementos, por ser uma priority_queue
    cout << "Pacientes que devem ser atendidos: ";
    for(int i = 0; i < m; i++){
        cout << fila.top() <<" ";
        fila.pop();
    }

    return 0;
}