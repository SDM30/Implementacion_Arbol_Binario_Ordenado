#ifndef __ARBOLBINARIOORD__H__
#define __ARBOLBINARIOORD__H__

#include "NodoBinario.h"

template <class T> class ArbolBinarioOrd {
protected:
  NodoBinario<T> *raiz;

public:
  bool esVacio();
  T &datoRaiz();
  int altura();
  int tamano();
  bool insertar(T &val);
  bool eliminar(T &val);
  bool buscar(T &val);
  void preOrden();
  void posOrden();
  void inOrden();
  void nivelOrden();
};

#include "ArbolBinarioOrd.hxx"

#endif