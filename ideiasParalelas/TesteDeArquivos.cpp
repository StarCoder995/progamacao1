#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs = std::filesystem;
int main(){
    int i = 0;
    const fs :: path pasta = fs :: current_path();
    string listaArquivos[5];
    cout << "Veja os arquivos na pasta \n";
    for (auto const& iteradorDePasta : fs :: directory_iterator{pasta}){
        listaArquivos[i] = iteradorDePasta.path().string();
        cout << listaArquivos[i] << "\n";
        i++;
    }

}