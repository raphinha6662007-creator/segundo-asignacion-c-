//escriba, compile y ejecute un programa en c++ que emplee instrucciones repetitivas para determinar el numero de vehiculos cyo precio de venta sea menor de 25 mil, entre 75 mil y 120 mil y mayores de 120 mil de un total de n ventas realizadas mensualmente por teclado
    #include <iostream>
using namespace std;

int main() {
    char repetir;
    do{
    int n;
    int menos25k = 0;
    int entre75k_120k = 0;
    int mas120k = 0;
    double precio;
    cout << "Ingrese el número total de ventas realizadas este mes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el precio de venta del vehículo #" << i << ": ";
        cin >> precio;

        if (precio < 25000) {
            menos25k++;
        } else if (precio >= 75000 && precio <= 120000) {
            entre75k_120k++;
        } else if (precio > 120000) {
            mas120k++;
        }
    }

    cout << "\nResultados del mes:\n";
    cout << "Vehículos con precio menor a $25,000: " << menos25k << endl;
    cout << "Vehículos con precio entre $75,000 y $120,000: " << entre75k_120k << endl;
    cout << "Vehículos con precio mayor a $120,000: " << mas120k << endl;
    cin>>repetir;
}while(repetir== 'j'|| repetir =='J');
    return 0;
}

