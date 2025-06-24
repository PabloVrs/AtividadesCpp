#include <iostream>
using namespace std;

//implementacao da funcao recursiva fatorial
long long fatorial(int n){

    if (n == 1 || n == 0){
        return 1;

    }else{
        return n * fatorial(n-1);
    }
}


int main()
{
    //inicializacao das variavies
    int n;
    long long f;

    //entrada do numero n
    cout << "Informe o numero: ";
    cin >> n;

    //chamda da funcao fatorial
    f = fatorial(n);

    //saida do resultado
    cout << "Fatorial: " << f << endl;


    return 0;
}
