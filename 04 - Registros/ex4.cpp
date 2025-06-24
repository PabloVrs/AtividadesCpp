#include <iostream>

using namespace std;

// criacao da struct Pessoa
struct Pessoa{
    string nome, CPF;
    int idade;
};

// implementacao da funcao para buscar o primeiro caractere do nome
void buscaNome(Pessoa p[], int num){
    char letra;

    cout << "Digite a letra inicial do nome: ";
    cin >> letra;

    cout << "Pessoas com nome iniciado por " << letra << ":" << endl;
    for (int i = 0; i < num; i++){
        if (p[i].nome[0] == letra){
            cout << "- " << p[i].nome << ", " << p[i].idade << " anos, CPF: " << p[i].CPF << endl;
        }
    }
}

// implementacao da funcao para buscar idade maior que
void buscaIdade(Pessoa p[], int num){
    int idade;
    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    cout << "Pessoas com idade maior que " << idade << ":" << endl;
    for (int i = 0; i < num; i++){
        if (p[i].idade > idade){
            cout << "- " << p[i].nome << ", " << p[i].idade << " anos, CPF: " << p[i].CPF << endl;
        }
    }    
}

// implementacao da busca pelo CPF
void buscaCPF (Pessoa p[], int num){
    string CPF;
    cout << "Digite o CPF: ";
    cin >> CPF;

    bool encontrado = false;
    for (int i = 0; i < num; i++){
        if (p[i].CPF == CPF){
            cout << "Pessoa encontrada: " << endl;
            cout << "- " << p[i].nome << ", " << p[i].idade << " anos, CPF: " << p[i].CPF << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado){
        cout << "Pessoa nao encontrada: " << endl;        
    }    
}

// implementacao da funcao para imprimir o menu
int imprimeMenu(){
    int n;
    cout << endl;
    cout << "Menu de opcoes:" << endl;
    cout << "1. Listar pessoas por inicial do nome." << endl;
    cout << "2. Listar pessoas com idade maior que." << endl;
    cout << "3. Buscar pessoa pelo CPF." << endl;
    cout << "4. Sair." << endl;  
    cout << "Escolha uma opcao: ";
    cin >> n;
    cout << endl;

    return n;
}



int main()
{
    // inicializacao das variaveis
    int num, n;

    // entrada do numero de pessoas a cadastrar
    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> num;
    cin.ignore();

    // inicializacao da variavel pessoas
    Pessoa vet_pessoas[num];
    
    // entrada dos dados das pessoas
    for (int i = 0; i < num; i++){
    cout << endl;
    cout << "Digite o nome da pessoa " << i + 1 << ": ";
    getline(cin, vet_pessoas[i].nome);
    cout << "Digite a idade da pessoa " << i + 1 << ": ";
    cin >> vet_pessoas[i].idade;
    cout << "Digite o CPF da pessoa " << i + 1 << ": ";
    cin >> vet_pessoas[i].CPF;
    cin.ignore();
    }
    
    n = imprimeMenu();

    // loop para entrada e chamada das funcoes
    while (n != 4) {
        if (n < 1 || n > 4){
            cout << "Opcao invalida, por favor escolha outra: ";
            cin >> n; 
        }
        else if (n == 1){

            buscaNome(vet_pessoas, num);
            n = imprimeMenu();
        } 
        else if (n == 2){

            buscaIdade(vet_pessoas, num);
            n = imprimeMenu();            
        }
        else if (n == 3){
            buscaCPF(vet_pessoas, num);
            n = imprimeMenu();
        }   
    }

    return 0;
}