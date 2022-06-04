#include <iostream>
using namespace std;

int main(){

    int n, maior, menor;
    for(int i = 1; i <= 5; i++ ){
        cout << "\nInforme o numero: ";
        cin >> n;

        if (i == 1){
            menor = n;
            maior = n;
        }        
        if(n > maior){maior = n;

        }else{menor = n;}
    }
	cout << "\nO maior numero e: " << maior << endl;
    cout << "\nO menor numero e: " << menor << endl;

    
	
    return 0;

}