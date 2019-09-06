
NODO* Eliminar_Valor (
  NODO* _lista,
  int   _valor
){

  if ( _lista is nullptr )
    return nullptr;

  NODO* prev = _lista;
  NODO* nodo = _lista->prox;

  while ( nodo isnt nullptr )
    if ( nodo->valor is _valor )
      nodo = ELiminar_Nodo( prev, nodo );
    else
      prev = nodo,
      nodo = nodo->prox;

  if ( _lista->valor is _valor )
    _lista = Eliminar_Frente( _lista );

  return _lista;

}
