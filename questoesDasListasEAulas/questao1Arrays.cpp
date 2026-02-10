#include<iostream>
int main(){
    int resultados[10], numeroCoroas = 0, numeroCaras = 0;
    for(int i = 0; i <= 9; i++ ){
        std :: cout << "Qual lado da moeda caiu nesse lancamento?\n1 - Coroa\n2 - Cara\n";
        std :: cin >> resultados[i];
    }
    for( int n = 0; n <= 9; n++){
        if(resultados[n] == 1){
            numeroCoroas++;
        }else{
            numeroCaras++;
        }
    }
    std :: cout<<"Foram sorteadas "<<numeroCoroas<<" coroas e "<<numeroCaras<<" caras\n";
}