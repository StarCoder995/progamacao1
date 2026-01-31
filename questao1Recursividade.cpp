#include<iostream>
using namespace std;
int potencia(int k, int n);
int main(){
    int k, n;
     cout << "Digite a base da potencia: ";
     cin >> k;
     cout << "Agora, digite o expoente desejado: ";
     cin >> n;
     cout << "O resultado e "<< potencia(k,n) << "\n";
}

int potencia(int k, int n){
    if(n == 1){
        return k;
    }
    else
        return k * potencia(k, n-1);
}