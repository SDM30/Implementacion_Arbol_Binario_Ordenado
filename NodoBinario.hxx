#include "NodoBinario.h"

template< class T >
NodoBinario<T>::NodoBinario(T &val){
    this->dato = val;
    this->hijoIzq = NULL;
    this->hijoDer = NULL;  
}

template< class T >
T& NodoBinario<T>::obtenerDato(){
    return this->dato;
}

template< class T >
void NodoBinario<T>::fijarDato(T &val){
    this->dato = val;
}

template< class T >
NodoBinario<T>* NodoBinario<T>::obtenerHijoIzq(){
    return this->hijoIzq;
}

template< class T >
NodoBinario<T>* NodoBinario<T>::obtenerHijoDer(){
    return this->hijoDer;
}

template< class T >
void NodoBinario<T>::fijarHijoIzq(NodoBinario<T> *izq){
    this->hijoIzq = izq;
}

template< class T >
void NodoBinario<T>::fijarHijoDer(NodoBinario<T> *der){
    this->hijoDer = der;
}

template< class T >
bool NodoBinario<T>::esHoja(){
    return (this->hijoIzq == NULL && this->hijoDer == NULL);
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
unsigned int NodoBinario<T>::tamano(){
    //Nodo actual
    int contador = 1;
    if (this->hijoIzq != NULL)
        contador += (this->hijoIzq)->tamano();
    if (this->hijoDer != NULL)
        contador += (this->hijoDer)->tamano();
    return contador;
}

template < class T >
void NodoBinario<T>::preOrden(){
    std::cout<<this->dato<<" ";

    if (this->hijoIzq != NULL)
        (this->hijoIzq)->preOrden();
    if (this->hijoDer != NULL)
        (this->hijoDer)->preOrden();
}

template < class T >
void NodoBinario<T>::posOrden(){
    if (this->hijoIzq != NULL)
        (this->hijoIzq)->posOrden();
    if (this->hijoDer != NULL)
        (this->hijoDer)->posOrden();

    std::cout<<this->dato<<" ";
}

template < class T >
void NodoBinario<T>::inOrden(){
    if (this->hijoIzq != NULL)
        (this->hijoIzq)->inOrden();
    std::cout<<this->dato<<" ";
    if (this->hijoDer != NULL)
        (this->hijoDer)->inOrden();
}