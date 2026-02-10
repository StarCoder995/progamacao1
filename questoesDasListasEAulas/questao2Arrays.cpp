#include<iostream>
#include<locale.h>
using namespace std;
int main(){
        setlocale(LC_ALL,"Portuguese");
        int numerosDigitados[10] ,contadorPositivo = 0, acumuladorNegativo = 0;
        cout<<"Vamos começar a digitar os numeros\n";
        for(int i = 0; i<= 9; i++){
            cout<<"Digite um número\n";
            cin >> numerosDigitados[i];
            if(numerosDigitados[i] >= 0){
                contadorPositivo ++;
            }else{
                acumuladorNegativo+= numerosDigitados[i];
            }
        }
        cout <<"Quantia de positivos inseridos :"<<contadorPositivo<<"\nSoma dos negativos inseridos :"<<acumuladorNegativo;
        cout<<"\nLista impressa ao contrário";
        for(int i = 9; i >= 0; i--){
            cout<<numerosDigitados[i]<<" ";
        }
        cout << endl;
        return 0;
}