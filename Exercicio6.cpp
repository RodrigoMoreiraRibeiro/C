#include <iostream>
using namespace std;

int main(){

    int numero, pares = 0;
    setlocale(LC_ALL, "portuguese");
    cout << "                                                  ";

    do{
        cout << "\nInforme um numero:";
        cin >> numero;
        if((numero % 2) == 0);{
            pares++;
        }
    }while((numero % 11)!=0);
    cout << "\nQuantidade de numeros pares sao: " << pares << endl;
    cout << "                                                  ";
    return 0;
    
}