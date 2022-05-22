#include <iostream>
using namespace std;

int main()
{
    int opcion;
    char palabra[100][100];
    int filas;
    int columnas;
    cout << "======= Cifrado por Transposicion =======" << endl;
    cout << "Ingrese el numero de filas que quiere para su matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas que quiere para su matriz: ";
    cin >> columnas;
    for (char i = 0; i < filas; i++)
    {
        for (char j = 0; j < columnas; j++)
        {
            cout << "Ingrese su palabra letra por letra: ";
            cin >>palabra[i][j];
        }
    }
    cout << endl;
    cout << "Su palabra es: ";
    for (char i = 0; i < filas; i++)
    {
        for (char j = 0; j < columnas; j++)
        {
            cout << palabra[i][j];
        }
    }
    cout << endl;
    retornar:
    cout << endl;
    do
    {
        cout << "Digite una opcion: " << endl;
        cout << "1.- Encriptar" << endl;
        cout << "2.- Desencriptar" << endl;
        cout << "3.- Salir del programa" << endl;
        cin >> opcion;
    } while ((opcion == 1) && (opcion == 2) && (opcion == 3));

    switch (opcion)
    {
    case 1:
        cout << "Vamos a colocar su palabra en forma de matriz: ";
        cout << endl;
        for (char i = 0; i < filas; i++)
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << palabra[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cout << "Ahora vamos a encriptar tomando las filas: ";
        for (char i = 0; i < filas; i++)
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << palabra[j][i];
            }
        }
        cout << endl;
        goto retornar;
        break;
    case 2:
        cout << "Vamos a desencriptar su palabra: " << endl;
        cout << "Encriptada: ";
        for (char i = 0; i < filas; i++)
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << palabra[j][i];
            }
        }
        cout << endl;
        cout << "Desencriptada: ";
        for (char i = 0; i < filas; i++)
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << palabra[i][j];
            }
        }
        cout << endl;
        goto retornar;
    case 3:
        cout << "=== Finalizo el programa ===" << endl;
        system("pause");
        return 0;
    
    default:
        break;
    }

    system("pause");
    return 0;
}