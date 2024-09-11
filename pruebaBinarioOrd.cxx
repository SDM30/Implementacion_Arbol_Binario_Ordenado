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
    int eliminarVal = 30;
    if (arbol.eliminar(eliminarVal)) {
        std::cout << "Elemento " << eliminarVal << " eliminado del árbol." << std::endl;
    } else {
        std::cout << "Elemento " << eliminarVal << " no pudo ser eliminado." << std::endl;
    }

    return 0;
}
