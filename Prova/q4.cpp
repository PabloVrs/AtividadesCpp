#include <iostream>

using namespace std;

// implementacao da funcao que recebe os ponteiros e os rotacionam
void rotaciona(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}


int main()
{
    // inicializacao das variaveis
   int x = 1, y = 2, z = 3;
   
   // saida dos valores originais
   cout << "Original: " << x << " " << y << " " << z << endl;
   
   // chamada da funcao atribuindo os enderecos
   rotaciona(&x, &y, &z);
   
   // saida dos valores rotacionados
   cout << "Rotacionados: " << x << " " << y << " " << z << endl;
   
    return 0;
}