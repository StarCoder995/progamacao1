#include<iostream>
#include<fstream>
#include<filesystem>
namespace fs = std:: filesystem;
using namespace std;
int main(){
    ifstream arq("../inicio.txt");
    int n;
    arq >> n;
    while(n >= 1){
        cout << n;
        n--;
    }
}