NODO* Eliminar_Fondo (
  NODO* _raiz
){

  NODO* prev = nullptr;
  NODO* nodo = _raiz;
  NODO* raiz = _raiz;

  while ( nodo->prox != nullptr )

    prev = nodo,
    nodo = nodo->prox;

  delete nodo;

  if ( prev == nullptr )
    return nullptr;

  prev->prox = nullptr;
  return raiz;


}


