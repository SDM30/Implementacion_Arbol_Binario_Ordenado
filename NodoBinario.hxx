#include "NodoBinario.h"

template< class T >
T& NodoBinario<T>::obtenerDato(){

}

template< class T >
void NodoBinario<T>::fijarDato(T &val){

}

template< class T >
NodoBinario<T>* NodoBinario<T>::obtenerHijoIzq(){

}

template< class T >
NodoBinario<T>* NodoBinario<T>::obtenerHijoDer(){

}

template< class T >
void NodoBinario<T>::fijarHijoIzq(NodoBinario<T> *izq){

}

template< class T >
void NodoBinario<T>::fijarHijoDer(NodoBinario<T> *der){

}

template< class T >
bool NodoBinario<T>::esHoja(){
    return (this->hijoIzq == NULL && this->hijoDer == NULL)
}

template< class T >
int NodoBinario<T>::altura(){

    int valAlt;
    if (this->esHoja()){
        valAlt = 0;
    } else {
        int valAlt_izq = -1;
        int valAlt_der = -1;
        if (this->hijoIzq != NULL){
            valAlt_izq = (this->hijoIzq)->altura();
        }
        if (this->hijoDer != NULL){
            valAlt_der = (this->hijoDer)->altura();
        }
        
        if (valAlt_izq > valAlt_der){
            valAlt = valAlt_izq + 1;
        } else {
            valAlt = valAlt_der + 1;
        }
    }

    return valAlt;
}

template < class T >
void NodoBinario<T>::inOrden(){
    if (this->hijoIzq() != NULL)
        (this->hijoIzq())->inOrden();
    std::cout<<this->dato<<std::" ";
    if (this->hijoDer() != NULL)
        (this->hijoDer())->inOrden();
}