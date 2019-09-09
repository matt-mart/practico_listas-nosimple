
int Fondo (
  NODO* _raiz
){

  NODO* nodo = _raiz;

  while ( nodo->prox != nullptr )
    nodo=nodo->prox;

  return nodo->valor;

  }

