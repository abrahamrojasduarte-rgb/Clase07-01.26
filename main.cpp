#include <iostream>
using namespace std;
const int FILAS = 3;
const int COLUMNAS = 3;

void imprimirMatriz( int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void leerMatriz( int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cin >> matriz[i][j];
        }
    }
}

void girar( int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
}

void limpiar( int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = 0;
        }
    }
}

bool primo(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x/2; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void sumar(int matriz[FILAS][COLUMNAS]) {
    int sumasf = 0;
    int sumasc = 0;

    for (int i = 0; i < FILAS; i++) {
        int sumaF = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            sumaF += matriz[i][j];
        }
        cout << "Suma fila " << i << ": " << sumaF << endl;
        sumasf += sumaF;
    }
    cout<<"Suma total filas: " << sumasf << endl;

    for (int j = 0; j < COLUMNAS; j++) {
        int sumaC = 0;
        for (int i = 0; i < FILAS; i++) {
            sumaC += matriz[i][j];
        }
        sumasc += sumaC;
        cout << "Suma columna " << j << ": " << sumaC << endl;
    }
    cout<<"Suma total columnas: " << sumasc << endl;
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

void sumaDiagonal(int matriz[FILAS][COLUMNAS]) {
    int sumaD = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (i == j) {
                sumaD += matriz[i][j];
            }
        }
    }
    cout << "Suma diagonal mayor" << sumaD << endl;
}
int main() {
   /* int matriz[FILAS][COLUMNAS] = {0};
    cout<<"Ingrese los valores de la matriz: "<<endl;
    leerMatriz(matriz);
    cout<<"Matri< :"<<endl;
    imprimirMatriz(matriz);
    cout<<"Matriz girada : "<<endl;
    girar(matriz);*/

    int matriz2[FILAS][COLUMNAS] = {0,2,4,6,8,10,12,14,16};
    imprimirMatriz(matriz2);
    sumar(matriz2);
    sumaDiagonal(matriz2);
    return 0;
}