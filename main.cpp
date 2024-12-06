#include <iostream>
#include "Pila.cpp"  
#include "Coda.cpp" 

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

    
    // Crea una coda di interi
    Coda<int> coda;

    // Aggiungi alcuni elementi alla coda
    coda.enqueue(10);
    coda.enqueue(20);
    coda.enqueue(30);
    coda.enqueue(40);

    // Visualizza la dimensione della coda
    coda.size();  // La dimensione dovrebbe essere 4

    // Visualizza l'elemento in testa alla coda
    coda.front();  // L'elemento in testa è 10

    // Rimuovi un elemento dalla coda
    coda.dequeue();  // Rimuove 10

    // Visualizza la dimensione della coda dopo il dequeue
    coda.size();  // La dimensione sarà 3

    // Visualizza l'elemento in testa alla coda dopo il dequeue
    coda.front();  // L'elemento in testa sarà 20

    // Rimuovi tutti gli altri elementi
    coda.dequeue();  // Rimuove 20
    coda.dequeue();  // Rimuove 30

  //non dovrei stampare nulla, perche gia nelle funzioni richiamate si fa tutto
}
