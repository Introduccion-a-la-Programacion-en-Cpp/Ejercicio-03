// Ejercicio-03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void menu() {
    std::cout << "Hello!\n";
    std::cout << "Bienvenido al programa Ejercicio 3." << std::endl;
    std::cout << "Debe ingresar 4 numeros enteros de forma consecutiva..." << std::endl;
    std::cout << "El programa calculara el maximo de estos numeros... y luego la suma de todos ellos..." << std::endl;
    std::cout << "Ingrese sus numeros: " << std::endl;
}

int max_of_four(int a, int b, int c, int d) {

    int respuesta = 0;

    // Escribir aqui la funcion faltante...

    return respuesta;
}

int main()
{
    menu(); // Invocamos funcion...

    int a, b, c, d;
    // Ingresamos 4 valores enteros...
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    int ans = max_of_four(a, b, c, d);

    std::cout << "El valor maximo de los 4 es: " << ans;

    std::cout << "La suma de todos los numeros es: " << sum_of_four(a, b, c, d);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
