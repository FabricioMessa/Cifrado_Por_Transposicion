# Cifrado_Por_Transposicion
1.- En el cifrado por Transposición usamos matrices, y la llave sería la transpuesta de dicha matriz:

    int main()
    {
        int opcion; //se guarda el valor de la opción
        char palabra[100][100]; //un array2D para la frase
        int filas;
        int columnas;
        cout << "======= Cifrado por Transposicion =======" << endl;
        cout << "Ingrese el numero de filas que quiere para su matriz: ";
        cin >> filas;
        cout << "Ingrese el numero de columnas que quiere para su matriz: ";
        cin >> columnas;
        for (char i = 0; i < filas; i++) //
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << "Ingrese su palabra letra por letra: "; //dentro de estos for escribimos la frase que queremos letra por letra
                cin >>palabra[i][j]; //esto es la posición de los índices
            }
        }
        cout << endl;
        cout << "Su palabra es: "; //aquí mostramos la palabra que hemos escrito
        for (char i = 0; i < filas; i++)
        {
            for (char j = 0; j < columnas; j++)
            {
                cout << palabra[i][j];
            }
        }
        cout << endl;
        retornar: //esto servirá más adeltante
        cout << endl;
        do //el do while de aquí sirve para que el usurio no ponga cualquier tipo de valor que NO se le indique
        {
            cout << "Digite una opcion: " << endl;
            cout << "1.- Encriptar" << endl;
            cout << "2.- Desencriptar" << endl;
            cout << "3.- Salir del programa" << endl;
            cin >> opcion;
        } while ((opcion == 1) && (opcion == 2) && (opcion == 3)); //el bucle seguirá hasta el valor de la variable opción sea una de estos 3

        switch (opcion) //dependiendo de lo que ponga el usurario ejecutamos la función respectiva
        {
        case 1: //en caso que coloque 1, encrpitamos la palabra
            cout << "Vamos a colocar su palabra en forma de matriz: ";
            cout << endl;
            for (char i = 0; i < filas; i++)
            {
                for (char j = 0; j < columnas; j++)
                {
                    cout << palabra[i][j]; //colocamos la palabra en forma de matriz dependiendo de las columnas y filas que hemos digitado al inicio
                }
                cout << endl;
            }
            cout << endl;
            cout << "Ahora vamos a encriptar tomando las filas: ";
            for (char i = 0; i < filas; i++)
            {
                for (char j = 0; j < columnas; j++)
                {
                    cout << palabra[j][i]; // esto es para imprimir la frase con las filas
                }
            }
            cout << endl;
            goto retornar; //retornamos al puntos anteorior para ver si quiere ir a otra opción del menú 
            break;
        case 2: //en el caso 2 es para desencriptar
            cout << "Vamos a desencriptar su palabra: " << endl;
            cout << "Encriptada: ";
            for (char i = 0; i < filas; i++)
            {
                for (char j = 0; j < columnas; j++)
                {
                    cout << palabra[j][i]; //palabra encriptada
                }
            }
            cout << endl;
            cout << "Desencriptada: ";
            for (char i = 0; i < filas; i++)
            {
                for (char j = 0; j < columnas; j++)
                {
                    cout << palabra[i][j]; //usamos la transpuesta
                }
            }
            cout << endl;
            goto retornar;
        case 3: //salimos del programa
            cout << "=== Finalizo el programa ===" << endl;
            system("pause");
            return 0;

        default:
            break;
        }

        system("pause");
        return 0;
    }
