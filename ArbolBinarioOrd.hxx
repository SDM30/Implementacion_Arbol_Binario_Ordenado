#include "ArbolBinarioOrd.h"

template < class T >
ArbolBinarioOrd<T>::ArbolBinarioOrd(){
    this->raiz = NULL;
}

template < class T >
ArbolBinarioOrd<T>::~ArbolBinarioOrd(){
    if (this->raiz != NULL) {
        delete this->raiz;
        this->raiz = NULL;
    }
}

template < class T >
bool ArbolBinarioOrd<T>::esVacio(){
    return this->raiz == NULL;
}
template < class T >
T& ArbolBinarioOrd<T>::datoRaiz(){
    return (this->raiz)->obtenerDato();
}

//Recursiva
template < class T >
int ArbolBinarioOrd<T>::altura(){
    if (this->esVacio()){
        return -1;
    } else {  
        return (this->raiz)->altura();
    }
}

//Recursiva
template < class T >
int ArbolBinarioOrd<T>::tamano(){

}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::insertar(T &val){
    NodoBinario<T>* padre = this->raiz;
    NodoBinario<T>* nodo = this->raiz;
    bool insertado = false;
    bool duplicado = false;

    while (nodo != NULL){
        padre = nodo;
        if (val < nodo->obtenerDato) {
            nodo = nodo->obtenerHijoIzq();
        } else if (val > nodo->obtenerDato) {
            nodo = nodo->obtenerHijoDer();
        } else {
            duplicado = true;
            break;
        }
    }

    if (!duplicado) {
        NodoBinario<T>* nodoIns = new NodoBinario<T>(val);
        //Verificar si hay algun fallo en la asignacion de mem
        if (nodoIns != NULL) {
            if (nodoIns->obtenerDato() > padre->obtenerDato()){
                padre->fijarHijoDer(nodoIns);
            } else {
                padre->fijarHijoIzq(nodoIns);
            }
        }
        insertado = true;
    }

    return insertado;
}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::eliminar(T &val){

    NodoBinario<T>* padre = this->raiz;
    NodoBinario<T>* nodo = this->raiz;
    bool eliminado = false;

    //Comparar con dato en nodo para bajar por izq o der
    //y para saber si val esta en el arbol
    
    //Si val esta en el arbol
    //Verificar caso de eliminacion
    //1. Nodo hoja (borrar)
    //2. Nodo con un solo hijo
    //Usar hijo para remplazar nodo
    //3. Nodo con dos hijos
    //Usar maximo de sub arbol izq para remplazar nodo
}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::buscar(T &val){
    NodoBinario<T>* nodo = this->raiz;
    bool encontrado = false;

    while (nodo != NULL && !encontrado){
        if (val < nodo->obtenerDato) {
            nodo = nodo->obtenerHijoIzq();
        } else if (val > nodo->obtenerDato) {
            nodo = nodo->obtenerHijoDer();
        } else {
            encontrado = true;
        }
    }

    return encontrado;
}

//Recurrente
template < class T >
void ArbolBinarioOrd<T>::preOrden(){

}

//Recurrente
template < class T >
void ArbolBinarioOrd<T>::posOrden(){

}

//Recurrente
template < class T >
void ArbolBinarioOrd<T>::inOrden(){
    if (!this->esVacio()) {
        (this->raiz)->inOrden();
    }
}

//Iterativa
template < class T >
void ArbolBinarioOrd<T>::nivelOrden(){

}
