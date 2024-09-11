#ifndef __NODOBINARIO__H__
#define __NODOBINARIO__H__

#include <list>

template <class T> class NodoBinario {
protected:
  T dato;
  NodoBinario<T> *hijoIzq;
  NodoBinario<T> *hijoDer;

public:
  T &obtenerDato();
  void fijarDato(T &val);
  NodoBinario<T> *obtenerHijoIzq();
  NodoBinario<T> *obtenerHijoDer();
  void fijarHijoIzq(NodoBinario<T> *izq);
  void fijarHijoDer(NodoBinario<T> *der);
  bool esHoja();
  int altura();
  void inOrden();
};

#include "NodoBinario.hxx"

#endif