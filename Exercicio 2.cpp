#include <iostream>
using namespace std;

int main(){

    int n, qtdImpar = 0;
     for (int i = 1; i <= 5; i++)
     {
         cout << "Informe o numero:";
         cin >> n;
         if(n % 2 != 0){qtdImpar++;}

        
     }
     cout << "Quantidade de impares e:" << qtdImpar << endl;

     
    return 0;

}