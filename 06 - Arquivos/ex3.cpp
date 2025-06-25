#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // cria e abre o arquivo dados.txt 
    ofstream arquivo;
    arquivo.open("dados.txt");

    // percorre de 1 ate 100 gravando os indices em cada linha
    for (int i = 1; i <= 100; i++){
        arquivo << i << endl;
    }

    // fecha o arquivo
    arquivo.close();

    return 0;
}