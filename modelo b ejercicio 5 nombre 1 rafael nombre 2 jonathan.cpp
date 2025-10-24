#include <iostream>

using namespace std;

bool esPrimo(int n) {
    
    if (n <= 1) {
        return false;
    }

    int i = 2; 

    while (i * i <= n) {
        if (n % i == 0) {
            
            return false;
        }
        i++;
    }


    return true;
}

int main() {
    int inicio, fin;

    
    cout << "Ingrese el n�mero de inicio del rango : ";
    
    if (!(cin >> inicio)) {
        cerr << "Entrada inv�lida. Saliendo." << endl;
        return 1;
    }

    cout << "Ingrese el n�mero final del rango : ";
    
    if (!(cin >> fin)) {
        cerr << "Entrada inv�lida. Saliendo." << endl;
        return 1;
    }

        cout << "El inicio era mayor que el fin. Intercambiando valores." << endl;
        int temp = inicio;
        inicio = fin;
        fin = temp;
    
    
    if (inicio< 2){
	
        inicio = 2;
    }

    cout << "\nN�meros primos entre " << inicio << " y " << fin << " son:" << endl;

    int numeroActual = inicio;

    while (numeroActual <= fin) {
        
        if (esPrimo(numeroActual)) {
        
            cout << numeroActual << " ";
        }
        
        numeroActual++;
    }

    cout << "\n" << endl;

    return 0;
}


    
 	
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

