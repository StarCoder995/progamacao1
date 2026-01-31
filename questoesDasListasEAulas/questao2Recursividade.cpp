#include<iostream>
using namespace std;
int somatorio(int n, int k);
int main(){
    int n;
    cout <<"Digite o limite do somatorio: ";
    cin >> n;
    cout << "O somatorio de 1 a " <<n<< " e: "<< somatorio(n,1)<<"\n";
}
int somatorio(int n, int k){
    if(n == 1){
        return n;
    }
    else
        return k + somatorio(n-1, ++k);
}