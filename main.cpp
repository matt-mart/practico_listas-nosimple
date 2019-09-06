#include <iostream>
#include "./lib/nodo.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/mostrar_lista.hpp"

using namespace std;

int main()
{
    NODO* raiz = nullptr;

    raiz = Agregar_Frente( raiz, 777);
    raiz = Agregar_Frente( raiz, 666);

    Mostrar_Lista( raiz );


}
