#include <iostream>

using namespace std;

int busquedaSecuencial(int arr[], int tama_o, int inc){
    int i;
    for(i=0; i<tama_o; i++){
        if (arr[i]==inc){
        return i;
        }
    }return -1;
}

int main()
{
    int tama_o = 0 , intento = 0, num = 0, dato = 0, resultado;

    cout<< "cuantos numeros desea ingresar? \n"<< endl;
    cin>> tama_o;

    int arr[tama_o] ={};

    while (intento < tama_o){
        cout<< "ingrese un numero: \n"<<endl;
        cin>> num;
        arr[intento] = num;
        intento++;
    }

    cout<< "que numero desea buscar"<< endl;
    cin>> dato;

    resultado = busquedaSecuencial(arr, tama_o-1, dato);

    cout << resultado << endl;
    return 0;
}
