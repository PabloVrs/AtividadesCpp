#include <iostream>
#include <cmath>

using namespace std;

// criacao da struct Ponto
struct Ponto{
    double x;
    double y;
};

// implementacao da funcao para calcular distancia euclidiana
double distanciaEuclidiana(Ponto p, Ponto q){
    return sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y), 2));
}

// implementacao da funcao para percorrer os pontos e somar suas distancias
double calculaDist(Ponto *vet_pontos, int N){
    double dist = 0;
    for (int i = 0; i < N - 1; i++){
        dist += distanciaEuclidiana(vet_pontos[i], vet_pontos[i+1]);        
    }
    return dist;
}


int main()
{
    // inicializacao das variaveis
    int N;
    double distanciatot;

    // entrada do numero de pontos
    cout << "Informe o numero de pontos: ";
    cin >> N;

    // alocacao do vetor de pontos
    Ponto *vet_pontos = new Ponto[N];
    
    // entrada das coordenadas
    for (int i = 0; i < N; i++){
        cout << "Informe as coordenadas do Ponto " << i + 1 << ": ";
        cin >> vet_pontos[i].x >> vet_pontos[i].y;
    }

    // chamada da funcao e saida do resultado
    distanciatot = calculaDist(vet_pontos, N);
    cout << "\nTamanho do caminho: " << distanciatot << endl;

    // desalocacao do vetor
    delete[] vet_pontos;

    return 0;
}