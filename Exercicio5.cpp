#include <iostream>

using namespace std;

int main(){

    int valor1, valor2, soma;

    cout << "                                           " << endl;
    do{
        cout << "\nInforme valor 1:";
        cin >> valor1;
        cout << "\nInforme valor 2:";
        cin >> valor2;
        soma = (valor1 + valor2);
        cout << "\nValor total:" << soma;
    }while(soma < 15);
    cout << "\n\nAcima de 15:" << soma;
    cout << "                                            " << endl;
    return 0;
}