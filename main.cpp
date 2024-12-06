#include <iostream>
#include "Pila.cpp"  

int main() 
{
    // Crea una pila di interi
    Pila<int> pila;

    // Aggiungi elementi alla pila
    pila.push(12);
    pila.push(24);
    pila.push(36);
    pila.push(44);

    // Visualizza la dimensione della pila
    pila.size();

    // Visualizza l'elemento in cima alla pila
    pila.top();

    // Rimuovi un elemento dalla pila
    pila.pop();

    // Visualizza la dimensione della pila dopo il pop
    pila.size();

    // Visualizza l'elemento in cima alla pila dopo il pop
    pila.top();

  //non dovrei stampare nulla, perche gia nella funzione richiamata fa tutto
}
