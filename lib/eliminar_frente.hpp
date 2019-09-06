
NODO* Eliminar_Frente (
  NODO* _lista
){

  if ( _lista is nullptr )
    return nullptr;

  NODO* nodo   = _lista;
        _lista = _lista->prox;

  delete nodo;

  return _lista;

}
