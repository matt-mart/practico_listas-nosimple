NODO* Agregar_Frente (
  NODO* _raiz,
  int  _valor
){

  NODO* nuevo_nodo = new NODO;

  nuevo_nodo->valor = _valor;
  nuevo_nodo->proximo = _raiz;

  return nuevo_nodo;


}