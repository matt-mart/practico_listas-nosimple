#include <iostream>

#include <iso646.h>
#define is ==
#define isnt !=

#include "./lib/nodo.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/mostrar_lista.hpp"
#include "./lib/eliminar_nodo.hpp"
#include "./lib/eliminar_frente.hpp"
#include "./lib/eliminar_valor.hpp"

using namespace std;

int main()
{
    NODO* raiz = nullptr;

    raiz = Agregar_Frente( raiz, 777);
    raiz = Agregar_Frente( raiz, 666);
    raiz = Agregar_Frente( raiz, 777);

    raiz = Eliminar_Valor( raiz, 777 );

    Mostrar_Lista( raiz );


}
