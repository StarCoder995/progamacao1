#include<iostream>
int main(){
    float salario, prestacao;
    std :: cout << "Digite o seu salario e a prestacao\n ";
    std :: cin >> salario >> prestacao;
    if (prestacao < (salario/5))
        std :: cout << "Emprestimo aceito \n";
    else
        std :: cout << "Emprestimo negado\n";
}