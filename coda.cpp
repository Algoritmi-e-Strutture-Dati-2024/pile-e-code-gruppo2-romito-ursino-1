#include <iostream>

// Definizione della classe Pila come template
template <typename T>
class Coda {
  private:
    T elementi[100];  // Array per gli elementi della pila
    int lung;         // Contatore degli elementi nella pila

  public:
    // Costruttore
    Coda() {
        lung = 0;
    }

    // Aggiunge un elemento alla pila
    void push(T elem) {
        if (lung < 100) { // Controlla che la pila non sia piena
            elementi[lung] = elem; // La fine del vettore è la testa
            lung++;
        } else {
            std::cout << "Errore: Pila piena." << std::endl;
        }
    }

    // Rimuove l'elemento in cima alla pila
    void pop() {
        if (lung == 0) { // Controlla se la pila è vuota
            std::cout << "Errore: Pila vuota." << std::endl;
        } else {
            std::cout << "Il numero che vuoi eliminare è: " << elementi[lung] << std::endl;
            lung--; // Decrementa il contatore
        }
    }

    // Restituisce l'elemento in cima alla pila
    void top() {
        if (lung == 0) { // Controlla se la pila è vuota
            std::cout << "Errore: Pila vuota." << std::endl;
        } else {
            std::cout << "Il numero in cima è: " << elementi[lung] << std::endl;
        }
    }

    // Restituisce true se la pila è vuota, altrimenti false
    bool isEmpty()
    {
      if (lung == 0)
      return true;
      else
      return false;
    }

    // Restituisce il numero di elementi nella pila.
    int size()
    {
      std::cout << "il numeri degli elementi della pila è: " << lung << std::endl;
    }
    
    



};
