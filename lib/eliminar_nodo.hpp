NODO* ELiminar_Nodo (
  NODO* _prev,
  NODO* _nodo
){

  NODO* prox;
  if ( _nodo == nullptr )
    prox = nullptr;
  else
    prox = _nodo->prox;

  delete _nodo;

  if ( _prev == nullptr)
    return nullptr;

  return (_prev->prox = prox);

}
