//Questao 3: Faça um programa e verifique se ele é primo
// Joao Marcio
#include<iostream>
using namespace std;

int main(){
    int num, cont = 1, numdivs = 1;
    cout << "digite um numero para ver se e primo :\n";
    cin >> num;
    while(cont++ <= num){
        if(num%cont == 0)
            numdivs++;
    }
    if(numdivs == 2){
        cout<<"o numero e primo";
    }
    else
        cout << "o numero nao primo\n";
}