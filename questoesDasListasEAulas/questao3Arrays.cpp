#include<iostream>
#include<locale.h>
using namespace std;
float media(float valores[], int numeroDeValores);
int main(){
        setlocale(LC_ALL,"Portuguese");
        int numeroDeAtletas;
        float mediaDePesos;
        cout << "Digite o número de atletas\n";
        cin >> numeroDeAtletas;
        float pesos[numeroDeAtletas];
        cout << "Agora, vamos recolher os pesos dos atletas";
        for(int i = 0; i < numeroDeAtletas ; i++){
            cout <<"Digite um peso\n";
            cin >> pesos[i];
        }
        mediaDePesos = media(pesos,numeroDeAtletas);
}
float media(float valores[], int numeroDeValores){
    float acumulador = 0;
    for(auto )
}