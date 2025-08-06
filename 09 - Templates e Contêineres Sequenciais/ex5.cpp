#include <iostream>
#include <list>

using namespace std;

//criacao do template
template<class T>
// funcao recebe duas listas de tipo T
list<T> mesclarListas(list<T> lista1, list<T> lista2){
    list<T> resultado;

    // armazena os endereços dos primeiros valores de cada lista
    auto it1 = lista1.begin();
    auto it2 = lista2.begin();

    // percorre ate as duas listas chegarem no final, incrementando os valores dentro da lista resultado
    while(it1 != lista1.end() && it2 != lista2.end()){
        if(*it1 <= *it2){
            resultado.push_back(*it1);
            ++it1;
        }
        else{
            resultado.push_back(*it2);
            ++it2;
        }
    }

    // adiciona os valores que podem ter restado da comparacao
    while (it1 != lista1.end()){
        resultado.push_back(*it1);
        ++it1;
    }

    while (it2 != lista2.end()){
        resultado.push_back(*it2);
        ++it2;
    }

    return resultado;
} 

// funcao para imprimir lista
template<class T>
void imprimirLista(list<T> lista){
    for (T i : lista){
        cout << i << " ";
    }
    cout << endl;
}


int main()
{

    // cria as listas
    list<int> lista1 = {1, 3, 5, 7, 9};
    list<int> lista2 = {2, 4, 6, 8, 10};

    // imprime as 3 listas
    cout << "Lista 1: ";
    imprimirLista(lista1);

    cout << "Lista 2: ";
    imprimirLista(lista2);

    list<int> mesclada = mesclarListas(lista1, lista2);

    cout << "Lista mesclada: ";
    imprimirLista(mesclada);

    return 0;
}

