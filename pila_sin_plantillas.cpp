#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
    int num;
    Nodo *sig;
};

void push(Nodo *&pila, int n);
void mostrar(Nodo *&pila);
void pop(Nodo *&pila, int &n);

void push(Nodo *&pila, int n)
{
    Nodo *nuevo = new Nodo();
    nuevo->num = n;
    nuevo->sig = pila;
    pila = nuevo;

}

void mostrar(Nodo *&pila)
{
    Nodo *aux = pila;
    cout << "\nDatos\n";
    while(aux!=NULL)
    {
        cout << " " << aux->num;
        aux = aux->sig;
    }
}

void pop(Nodo *&pila, int &n)
{

    Nodo *aux = pila;
    n = pila->num;
    pila = aux->sig;

    delete aux;
}

int main()
{
    Nodo *pila = NULL;
    int dato = 5;

    push(pila,5);
    push(pila, 8);
    push(pila, 10);
    mostrar(pila);
    getch();
    pop(pila, dato);
    mostrar(pila);

    getch();
    return 0;
}
