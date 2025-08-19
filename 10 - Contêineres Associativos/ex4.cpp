#include <iostream>
#include <map>
#include <set>


using namespace std;

// cria estrutura users
struct users{
    string usuario;
    string categoria;
};


int main()
{
    // recebe total de acessos
    int n;

    cout << "Total de acessos: ";
    cin >> n;

    // cria o mapa
    map<string, set<string>> users;

    // entrada dos acessos inserindo usuarios para cada categoria
    cout << "Acessos:" << endl;
    for(int i = 0; i < n; i++){
        string usuario, categoria;
        cin >> usuario >> categoria;

        users[categoria].insert(usuario);
    }

    //impressao do relatorio
    cout << endl << "Relatorio: " << endl << endl;

    // percorre cada categoria
    for (auto p : users){
        cout << p.first << " (" << p.second.size() << "):";
        // percorre usuarios para cada categoria
        for(auto q : p.second){
            cout << " " << q;
        }
        cout << endl;
    }

    return 0;
}