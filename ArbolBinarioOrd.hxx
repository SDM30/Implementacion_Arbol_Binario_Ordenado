#include "ArbolBinarioOrd.h"
#include <queue>

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
unsigned int ArbolBinarioOrd<T>::tamano(){
  // si esta vacio, retornar 0
    if (this->esVacio())
        return 0;
    
    int tam = 0;

    tam += (this->raiz)->tamano();

    return tam;
}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::insertar(T &val){
    NodoBinario<T>* padre = this->raiz;
    NodoBinario<T>* nodo = this->raiz;
    bool insertado = false;
    bool duplicado = false;
    bool arbolVacio = false;

    if (this->esVacio()) {
        this->raiz = new NodoBinario<T>(val);
        arbolVacio = true;
    }

    while (nodo != NULL){
        padre = nodo;
        if (val < nodo->obtenerDato()) {
            nodo = nodo->obtenerHijoIzq();
        } else if (val > nodo->obtenerDato()) {
            nodo = nodo->obtenerHijoDer();
        } else {
            duplicado = true;
            break;
        }
    }

    if (!duplicado && !arbolVacio) {
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
    bool encontrado = buscar(val);
    bool eliminado = false;
    std::cout<<"PENDIENTE"<<std::endl;
    //Comparar con dato en nodo para bajar por izq o der
    //y para saber si val esta en el arbol
    while (nodo != NULL && !encontrado){
        padre = nodo;
        if (val < nodo->obtenerDato()) {
            nodo = nodo->obtenerHijoIzq();
        } else if (val > nodo->obtenerDato()) {
            nodo = nodo->obtenerHijoDer();
        }
    }
    //Si val esta en el arbol
    if(encontrado) {
        //Verificar caso de eliminacion
        if (nodo->obtenerHijoIzq == NULL && nodo->obtenerHijoDer == NULL){
            //1. Nodo hoja (borrar)
            delete nodo;
        }
        
        //2. Nodo con un solo hijo
        if (nodo->obtenerHijoIzq == NULL && nodo->obtenerHijoDer != NULL){
            //Usar hijo para remplazar nodo
            
        }

        if (nodo->obtenerHijoIzq != NULL && nodo->obtenerHijoDer != NULL){
            //Usar hijo para remplazar nodo
        }  
        
        //3. Nodo con dos hijos
        //Usar maximo de sub arbol izq para remplazar nodo
    }


    return eliminado;
}

//Recurrente o Iterativa
template < class T >
bool ArbolBinarioOrd<T>::buscar(T &val){
    NodoBinario<T>* nodo = this->raiz;
    bool encontrado = false;

    while (nodo != NULL && !encontrado){
        if (val < nodo->obtenerDato()) {
            nodo = nodo->obtenerHijoIzq();
        } else if (val > nodo->obtenerDato()) {
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
    if (!this->esVacio()) {
        (this->raiz)->preOrden();
    }
}

//Recurrente
template < class T >
void ArbolBinarioOrd<T>::posOrden(){
    if (!this->esVacio()) {
        (this->raiz)->posOrden();
    }
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
    if (!this->esVacio()) {
        std::queue<NodoBinario<T>*> cola;
        cola.push(this->raiz);
        NodoBinario<T>* nodo;
        // hacer un ciclo mientar haya algo en la cola
        while (!cola.empty()) {
            nodo = cola.front();
            cola.pop();
            std::cout<<nodo->obtenerDato()<<" ";
            if (nodo->obtenerHijoIzq() != NULL) {
                cola.push(nodo->obtenerHijoIzq());
            }
            if (nodo->obtenerHijoDer() != NULL) {
                cola.push(nodo->obtenerHijoDer());
            }
        }
    }
}
