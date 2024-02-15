#include <iostream>
using namespace std;
/**
 * @brief genera un array de 3x3 para la creacion de la matriz
 */
int matriz[3][3];

/**
 * @brief Almacena los datos los renglones de la matriz 
 */
int renglon;

/**
 * @brief Almacena los datos las columnas de la matriz
 */
int columna;

/**
 * @brief Almacena el dato de la opcion del usuario que se usa en la funcion menu
 */
int opcion;


void generarMatriz();
void mostrarMatriz();
void generarTranspuesta();

/**
 * @file Matriz 3x3.cpp
 * @version 1.1
 * @date 02/15/2024
 * @author Fabian Murillo
 * @title Matriz 3x3 y matriz transpuesta
 * @brief Generar una matriz 3x3 con los datos que el usuario requiera y posteriormente mostrar la matriz transpuesta
 */

/**
 * @brief Llama a la funcion menu
 */
int 
main()
{
  generarMatriz();
  mostrarMatriz();
  generarTranspuesta();
  return 0;
}

/**
 * @brief Con el uso de un ciclo 'For' generar la matriz con las variables renglon y columna hasta completar la matriz 3x3
 */
void generarMatriz()
{
  cout << "Ingrese los datos para la matriz 3x3" << endl;
  for (renglon = 0; renglon < 3; renglon++)
  {
    for (columna = 0; columna < 3; columna++)
    {
      cin >> matriz[renglon][columna];
    }
    cout << endl;
  }
}

/**
 * @brief Mostrar la matriz 3x3 por medio del ciclo for con uso de las variables renglon y columna, mostrando la matriz con los datos que el usuario ingreso
 */
void mostrarMatriz()
{
  cout << "La matriz 3x3 es: " << endl;
  for (renglon = 0; renglon < 3; renglon++)
  {
    for (columna = 0; columna < 3; columna++)
    {
      cout << matriz[renglon][columna] << " ";
    }
    cout << endl;
  }
}

/**
 * @brief Llama a la matriz ya generada pero la muestra 90 grados rotada a la derecha para generar la matriz transpuesta
 */
void generarTranspuesta()
{
  cout << "La matriz transpuesta es: " << endl;

  for (renglon = 0; renglon < 3; renglon++)
  {
    for (columna = 0; columna < 3; columna++)
    {
      cout << matriz[columna][renglon] << " ";
    }
    cout << endl;
  }

}