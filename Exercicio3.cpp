#include <iostream>
using namespace std;

int main(){

    int idade, maiorIdade = 0;
    cout << "                                                 ";
    for(int i = 0; i<10;i++){
        cout << "\nInforme a idade: ";
        cin >> idade;
        if(idade >= 18){
            maiorIdade++;
        }
    }
    cout << "\nQuantidade de pessoas maiores de idade sao: " << maiorIdade << endl;
    cout <<"                                                                      ";
    return 0;
}