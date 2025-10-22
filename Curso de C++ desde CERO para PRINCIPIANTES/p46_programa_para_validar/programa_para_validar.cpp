#include <iostream>

using namespace std;

bool validarTarjetaCredito(string tarjeta);
int pasoProcesarDigitosPares(int pares[], int size);
int pasoProcesarDigitosImpares(int arreglo[], int size);

// Algoritmo de Luhn
int main(){
    string tarjeta = "6011000990139424";
    bool valido = validarTarjetaCredito(tarjeta);
    cout << "La tarjeta " << tarjeta << " es " << (valido ? "valida" : "invalida") << endl;
    return 0;
}

// Funcion principal para validar tarjeta de credito
bool validarTarjetaCredito(string tarjeta){
    int longitud = tarjeta.length();

    int sizeArreglos = longitud/2;

    int pares[sizeArreglos];
    int impares[sizeArreglos];

    int indicePares = 0;
    int indiceImpares = 0;

    // Separar digitos en posiciones pares e impares
    for (int i = 0; i < longitud; i++){

        if (i % 2 == 0){
            pares[indicePares] = tarjeta[i] - '0';
            indicePares++;
        }
        else{
            impares[indiceImpares] = tarjeta[i] - '0';
            indiceImpares++;
        }
    }

    int suma =  pasoProcesarDigitosPares(pares, sizeArreglos) + pasoProcesarDigitosImpares(impares, sizeArreglos);;
    return suma % 10 == 0; // Retorna true si es divisible por 10, false en caso contrario
}

// Procesar digitos en posiciones pares, duplicandolos y sumando los digitos si es necesario
int pasoProcesarDigitosPares(int pares[], int size){
    int suma = 0;
    for(int i = 0; i < size; i++){
        pares[i] = pares[i] * 2;
        
        if(pares[i] >= 10){
            int primerDigito = pares[i] / 10;  
            int segundoDigito = pares[i] % 10; 
            pares[i] = primerDigito + segundoDigito;
        }
        suma += pares[i];
    }
    return suma;
}

// Procesar digitos en posiciones impares, sumandolos directamente
int pasoProcesarDigitosImpares(int arreglo[], int size){
    int suma = 0;
    for(int i = 0; i < size; i++){
        suma += arreglo[i];
    }
    return suma;
}

// Algoritmo de Luhn
/*
Paso 1:
6011000990139424
6011 0009 9013 9424
61 00 91 92
6 1 0 0 9 1 9 2
12 2 0 0 18 2 18 4
1 2 2 0 0 1 8 2 1 8 4

Paso 2:
1 2 2 0 0 1 8 2 1 8 4
29

Paso 3:
6011000990139424
6011 0009 9013 9424
01 09 03 44
0 1 0 9 0 3 4 4
21

Paso 4:
29 + 21
50

Paso 4:
Divisible por 10? Si -> Es valido, No -> No es valido
*/