
////////////////////////////////////////////////////////////////

NODO* Eliminar_Lista (
  NODO* _raiz
){

  //////////////////////////////////////////////////////////////

  if ( _raiz is nullptr )
    return nullptr;

  //////////////////////////////////////////////////////////////

  while ( not Lista_Es_Vacia(_raiz) )
    _raiz = Eliminar_Frente( _raiz );

  //////////////////////////////////////////////////////////////

  return _raiz;

  //////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////