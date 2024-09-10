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

}

//Recursiva
template < class T >
int ArbolBinarioOrd<T>::tamano(){

}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::insertar(T &val){

}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::eliminar(T &val){

}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::buscar(T &val){

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

}

//Iterativa
template < class T >
void ArbolBinarioOrd<T>::nivelOrden(){

}
