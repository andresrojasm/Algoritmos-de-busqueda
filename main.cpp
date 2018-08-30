#include <iostream>

using namespace std;

int busquedaBinaria(int arr[],int inicio, int fin, int inc){
    int centro;
    if(inicio<=fin){
        centro = ((fin-inicio)/2)+inicio;
        cout<< centro << ", "<< inicio<< ", "<< fin<< "\n"<< endl;
        if(arr[centro] ==inc){
            return centro;
        }else if(inc < arr[centro]){
            return busquedaBinaria(arr,inicio,centro-1,inc);
        }else{
            return busquedaBinaria(arr, centro+1, fin, inc);
        }
    }
    return -1;
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

    resultado = busquedaBinaria(arr, 0, tama_o-1, dato);

    cout << resultado << endl;
    return 0;
}
