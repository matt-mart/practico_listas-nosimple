
////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#include <iso646.h>
#define is ==
#define isnt !=

////////////////////////////////////////////////////////////////

#include "./lib/nodo.hpp"
#include "./lib/lista_es_vacia.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/mostrar_lista.hpp"
#include "./lib/eliminar_nodo.hpp"
#include "./lib/eliminar_frente.hpp"
#include "./lib/eliminar_valor.hpp"
#include "./lib/eliminar_lista.hpp"
#include "./lib/lugar.hpp"
#include "./lib/buscar.hpp"
#include "./lib/ocurrencias.hpp"
#include "./lib/avanzar.hpp"

/// frente
/// fondo
/// eliminar lugar
/// eliminar fondo

/// menor
/// mayor
/// total
/// promedio
/// medio
/// moda
/// ordenar
/// agregar ordenado
/// buscar ordenado
/// invertir

////////////////////////////////////////////////////////////////

int main(){

  //////////////////////////////////////////////////////////////

  NODO* raiz = nullptr;

  raiz = Agregar_Frente( raiz, 777 );
  raiz = Agregar_Frente( raiz, 333 );
  raiz = Agregar_Frente( raiz, 666 );
  raiz = Agregar_Frente( raiz, 333 );

  std::cout
    << Ocurrencias(      raiz, 333 )
    << "\n";

  raiz = Eliminar_Valor( raiz, 777 );
  raiz = Eliminar_Valor( raiz, 555 );
         Mostrar_Lista(  raiz );
  raiz = Eliminar_Lista( raiz );

  //////////////////////////////////////////////////////////////

  exit( EXIT_SUCCESS );

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////
