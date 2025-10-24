//escriba un programa que solicite un numero binario(compuesto solo por digitos '0' y '1') como una cadena de textos y lo comvierta a su equivalente decimal(base 10).
#include <iostream>
#define MAX_SIZE 64
using namespace std;
int main() {
    char repetir;
    char binario_arr[MAX_SIZE];
    do{
	
    
    long long decimal = 0;
    long long valor_posicional = 1;
    int longitud = 0;
    int indice;

    
    cout << "Introduce un numero binario (max. " << MAX_SIZE - 1 << " digitos): ";
    
    cin >> binario_arr;

    
    while (binario_arr[longitud] != '\0') {
        longitud++;
    }

   
    indice = longitud - 1;


    while (indice >= 0) {
        char digito_char = binario_arr[indice];
        int digito;
        
        
        if (digito_char == '1') {
            digito = 1;
        } else if (digito_char == '0') {
            digito = 0;
        } else {
            
            cerr << "Error: El caracter '" << digito_char << "' no es un digito binario." << endl;
            return 1;
        }


        if (digito == 1) {
            decimal += valor_posicional;
        }

        
        indice--; 
        
        
        valor_posicional *= 2; 
    }


    cout << "El equivalente decimal es: " << decimal << endl;

}while(repetir == 'r'|| repetir == 'R');
    return 0;
}
