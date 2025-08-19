#include <iostream>
#include <set>

using namespace std;

int main(){
    // inicia numero de pacientes e numero que serao atendidos
    int n, m;

    // entrada dos dados
    cout << "Total de pacientes: ";
    cin >> n;

    cout << "Total de atendimentos: ";
    cin >> m;

    // inicia multiset
    multiset<int> fila;

    // entrada das prioridades
    cout << "Lista de prioridade dos pacientes: ";
    for (int i = 0; i < n; i++){
        int paciente;
        cin >> paciente;

        fila.insert(paciente);
    }

    // cria o ponteiro que aponta pro ultimo elemento decrementado
    cout << "Pacientes que devem ser atendidos: ";
    for (int i = 0; i < m ; i++){
        auto it = --fila.end();

        // imprime o ultimo elemento e exclui
        cout << *it << " ";
        fila.erase(*it);
    }

    return 0;
}