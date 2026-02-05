#include <iostream>
using namespace std;
struct passageiro {
    string nome;
    int idade, id, classe, sobreviveu;
    char sexo;
    };
void imprime (passageiro p[], int quantidade){
    cout<<"===============================\n";
    cout<<"ID NOME IDADE SOBREVIVEU CLASSE SEXO\n";
    for (int i=0; i<quantidade; i++){
        cout<<p[i].id<<" ";
        cout<<p[i].nome<<" ";
        cout<<p[i].idade<<" ";
        cout<<p[i].sobreviveu<<" ";
        cout<<p[i].classe<<" ";
        cout<<p[i].sexo<<endl;
    }
}
void menu (){
    cout<<"===============================\n";
    cout<<"1.Cadastrar um passageiro\n";
    cout<<"2.Ler o arquivo de passageiros\n";
    cout<<"3.Imprimir lista de passageiros\n";
    cout<<"Escolha uma opcao ";
}
int main (){
    int tamanho=20, pos = 0, opcao = -1;
    passageiro vetor [tamanho];
    do {
        menu();
        cin>>opcao;
        if (opcao==1) {
            cout<<"Digite o id, sobreviveu, classe, nome,sexo, idade\n";
            cin>>vetor[pos].id;
            cin>>vetor[pos].sobreviveu;
            cin>>vetor[pos].classe;
            cin.ignore();
            getline(cin, vetor[pos].nome);
            cin>>vetor[pos].sexo;
            cin>>vetor[pos].idade;
            pos++;
        } else if (opcao==2) {
        //desenvolver o trecho
        } else if (opcao==3) {
            imprime(vetor, pos);
        }
    } while(opcao!=-1);
    return 0;
}