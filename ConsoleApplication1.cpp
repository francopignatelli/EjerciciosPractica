// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>
#include <string>
#include <numbers>
#include <cmath>

const double pi = 3.1415926;

//Funciones

double ValidarEleccionFigura(double eleccionFigura)
{
    if (eleccionFigura > 0 && eleccionFigura <= 3)
    {
        return eleccionFigura;
    }
    else
    {
        cout << "No ha ingresado una opcion valida.";
    }

}

double ValidarEleccionMedida(double eleccionMedida)
{
    if (eleccionMedida >= 1 && eleccionMedida <= 2)
    {
        return eleccionMedida;
    }
    else
    {
        cout << "No ha ingresado una opcion valida.";
    }
}

double DevolverPerimetro(int figura)
{
    double ladoC, lado1, lado2, lado3, radio;
    double perCuadrado, perTriangulo, perCircunferencia;
    

    switch (figura)
    {
    case 1: //Es un cuadrado
        cout << "Ingrese el valor de un lado del cuadrado:";
        cout << "\n";
        cin >> ladoC;
        perCuadrado = ladoC * 4;
        return perCuadrado;
        break;

    case 2: //Es un triangulo
        cout << "Ingrese lado 1, lado 2 y lado 3 del triangulo.";
        cout << "\n";
        cin >> lado1;
        cin >> lado2;
        cin >> lado3;
        if (lado1 > 0 && lado2 > 0 && lado3 > 0)
        {
            perTriangulo = lado1 + lado2 + lado3;
        }
        else
        {
            cout << "No ha ingresado valores de lados validos.";
        }
        break;

    case 3:
        cout << "Ingrese el valor del radio: ";
        cout << "\n";
        cin >> radio;
        if (radio > 0)
        {
            perCircunferencia = 2 * pi * radio;
            return perCircunferencia;
        }
        else
        {
            cout << "No ha ingresado valores de lados validos.";
        }
        break;

    }
}

double DevolverArea(int figura) 
{
    double ladoC, base, altura, radio;
    double areaCuadrado, areaTriangulo, areaCircunferencia;

    switch (figura)
    {
    case 1: //Es un cuadrado
        cout << "Ingrese el valor de un lado del cuadrado: ";
        cin >> ladoC;
        if (ladoC > 0)
        {
            areaCuadrado = ladoC * 2;
            return areaCuadrado;
        }
        else
        {
            cout << "No ha ingresado un valor de lado valido.";
        }
    case 2: //Es un triangulo
        cout << "Ingrese una base: ";
        cin >> base;
        cout << "Ingrese una altura: ";
        cin >> altura;

        if (base > 0 && altura > 0)
        {
            areaTriangulo = (base * altura) / 2;
            return areaTriangulo;
        }
        break;
    case 3: //Es una circunferencia
        cout << "Ingrese el radio: ";
        cin >> radio;
        if (radio > 0)
        {
            areaCircunferencia = pi * std::pow(radio, 2);
            return areaCircunferencia;
        }
        else
        {
            cout << "El radio ingresado no es valido.";
        }
    default:
        break;
    }
}


//Metodo main

int main()
{
    int valorEleccionFigura, valorEleccionMedida, eleccionFigura, eleccionMedida;
    double perimetro, area;


    cout << "CALCULO DE AREA Y PERIMETRO DE FIGURAS GEOMETRICAS.  \n\0";

    cout << "Seleccione una figura geometrica: \n\0";
    cout << "1. Cuadrado.\n\0";
    cout << "2. triangulo.\n\0";
    cout << "3. circunferencia.\n\0";
    cout << "\n";

    try
    {
        cin >> valorEleccionFigura;
    }
    catch (const std::exception&)
    {
        cout << "No ha ingresado una opcion valida.";
    }

    //Devuelve la figura (1. Cuadrado 2. Triangulo 3. Circunferencia)
    eleccionFigura = ValidarEleccionFigura(valorEleccionFigura);
   

    cout << "Que quiere calcular: \n\0";
    cout << "1. Perimetro \n\0";
    cout << "2. Area \n\0";
    cout << "\n";

    cin >> valorEleccionMedida;

    eleccionMedida = ValidarEleccionMedida(valorEleccionMedida);
    
    if (eleccionMedida == 1)    //Calcular Perimetro
    {
        perimetro = DevolverPerimetro(eleccionFigura);
        cout << "\n";
        cout << "El valor del perimetro es: " + std::to_string(perimetro);
    }
    else if (eleccionMedida == 2)   //Calcular Area
    {
        area = DevolverArea(eleccionFigura);
        cout << "\n";
        cout << "El valor del area es: " + std::to_string(area);
    }

   

    
    
    
}




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
