#include <iostream>
#include "ArbolBinarioOrd.h"

int main() {
    // Crear el árbol binario ordenado
    ArbolBinarioOrd<int> arbol;

    // Verificar si el árbol está vacío
    if (arbol.esVacio()) {
        std::cout << "El árbol está vacío." << std::endl;
    } else {
        std::cout << "El árbol no está vacío." << std::endl;
    }

    // Insertar algunos elementos
    int val1 = 50, val2 = 30, val3 = 70, val4 = 20, val5 = 40;
    arbol.insertar(val1);
    arbol.insertar(val2);
    arbol.insertar(val3);
    arbol.insertar(val4);
    arbol.insertar(val5);

    // Verificar si el árbol está vacío después de las inserciones
    if (!arbol.esVacio()) {
        std::cout << "El árbol no está vacío después de las inserciones." << std::endl;
    }

    // Mostrar el dato de la raíz
    std::cout << "Dato en la raíz: " << arbol.datoRaiz() << std::endl;

    // Mostrar la altura del árbol
    std::cout << "Altura del árbol: " << arbol.altura() << std::endl;

    // Mostrar el tamaño del árbol
    std::cout << "Tamaño del árbol: " << arbol.tamano() << std::endl;

    // Buscar un elemento
    int buscarVal = 30;
    if (arbol.buscar(buscarVal)) {
        std::cout << "Elemento " << buscarVal << " encontrado en el árbol." << std::endl;
    } else {
        std::cout << "Elemento " << buscarVal << " no encontrado en el árbol." << std::endl;
    }

    // Recorridos del árbol
    std::cout << "Recorrido en preorden: ";
    arbol.preOrden();
    std::cout << std::endl;

    std::cout << "Recorrido en inorden: ";
    arbol.inOrden();
    std::cout << std::endl;

    std::cout << "Recorrido en posorden: ";
    arbol.posOrden();
    std::cout << std::endl;

    std::cout << "Recorrido por niveles: ";
    arbol.nivelOrden();
    std::cout << std::endl;

    // Eliminar un elemento
    // Mostrar el recorrido en inorden antes de la eliminación
    std::cout << "Recorrido en inorden antes de la eliminación: ";
    arbol.inOrden();
    std::cout << std::endl;

    // Eliminar un nodo hoja (por ejemplo, el 20)
    int eliminarVal1 = 20;
    if (arbol.eliminar(eliminarVal1)) {
        std::cout << "Elemento " << eliminarVal1 << " eliminado del árbol." << std::endl;
    } else {
        std::cout << "Elemento " << eliminarVal1 << " no pudo ser eliminado." << std::endl;
    }

    // Mostrar el recorrido en inorden después de la primera eliminación
    std::cout << "Recorrido en inorden después de eliminar " << eliminarVal1 << ": ";
    arbol.inOrden();
    std::cout << std::endl;

    // Eliminar un nodo con dos hijos (por ejemplo, el 30)
    int eliminarVal2 = 30;
    if (arbol.eliminar(eliminarVal2)) {
        std::cout << "Elemento " << eliminarVal2 << " eliminado del árbol." << std::endl;
    } else {
        std::cout << "Elemento " << eliminarVal2 << " no pudo ser eliminado." << std::endl;
    }

    // Mostrar el recorrido en inorden después de la segunda eliminación
    std::cout << "Recorrido en inorden después de eliminar " << eliminarVal2 << ": ";
    arbol.inOrden();
    std::cout << std::endl;

    //Volver a insertar 
    arbol.insertar(val1);
    arbol.insertar(val2);
    arbol.insertar(val3);
    arbol.insertar(val4);
    arbol.insertar(val5);
    // Mostrar el recorrido en inorden antes de la eliminación
    std::cout << "Recorrido en inorden antes de la eliminación del nodo 30: ";
    arbol.inOrden();
    std::cout << std::endl;

    // Eliminar un nodo con dos hijos (por ejemplo, el 30)
    if (arbol.eliminar(eliminarVal2)) {
        std::cout << "Elemento " << eliminarVal2 << " eliminado del árbol." << std::endl;
    } else {
        std::cout << "Elemento " << eliminarVal2 << " no pudo ser eliminado." << std::endl;
    }

    // Mostrar el recorrido en inorden después de eliminar el nodo 30
    std::cout << "Recorrido en inorden después de eliminar " << eliminarVal2 << ": ";
    arbol.inOrden();
    std::cout << std::endl;

    // Eliminar un nodo hoja (por ejemplo, el 20)
    if (arbol.eliminar(eliminarVal1)) {
        std::cout << "Elemento " << eliminarVal1 << " eliminado del árbol." << std::endl;
    } else {
        std::cout << "Elemento " << eliminarVal1 << " no pudo ser eliminado." << std::endl;
    }

    // Mostrar el recorrido en inorden después de la segunda eliminación
    std::cout << "Recorrido en inorden después de eliminar " << eliminarVal1 << ": ";
    arbol.inOrden();
    std::cout << std::endl;

    return 0;
}
