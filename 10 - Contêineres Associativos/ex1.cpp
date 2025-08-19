#include <iostream>
#include <set>

using namespace std;

int main()
{
    // inicia as variaveis
    int n;
    set <int> visitados;
    bool ciclo = false;
    
    // entrada numero de estados
    cout << "Total de estados: ";
    cin >> n;
  
    // entra dos estados
    cout << "Lista de estados: ";    
    for(int i = 0; i < n; i++){
        int estado;
        
        cin >> estado;
        
        // confere se existe o estado dentro do set e retorna true
        if (visitados.count(estado)){
            ciclo = true;
        }
        // insere o estado no set
        visitados.insert(estado);
    }
    
    // imprime ciclo caso true
    if (ciclo){
        cout << "CICLO" << endl;
    }else{
        cout << "OK" << endl;
    }

    return 0;
}