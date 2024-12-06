#include <iostream>

// Definizione della classe Coda come template
template <typename T>
class Coda {
  private:
    T elementi[100];  // Array per gli elementi della coda
    int lung;         // Contatore degli elementi nella coda
    int start;        // Indice dell'elemento iniziale
    int end;          // Indice dove aggiungere il prossimo elemento

  public:
    // Costruttore
    Coda() {
        lung = 0;
        start = 0;
        end = 0;
    };

    // Aggiunge un elemento alla fine della coda
    void enqueue(T elem) {
        if (lung == 100) { // Controlla se la coda è piena
            std::cout << "Errore: Coda piena." << std::endl;
        } else {
            elementi[end] = elem;
            end = (end + 1) % 100; // Incremento circolare
            lung++;
        }
    }

    // Rimuove l'elemento in testa alla coda e lo restituisce. Gestire eventuali errori (ad esempio, coda vuota).
    void dequeue() {
        if (lung == 0) { // Controlla se la coda è vuota
            std::cout << "Errore: Coda vuota." << std::endl;
        } else {
            T elem = elementi[start]; // Salva l'elemento in testa
            start = (start + 1) % 100; // Incremento circolare
            lung--;
            std::cout << "L'elemento in testa era: " << elem << std::endl;
        }
    }

    // Restituisce l'elemento in testa alla coda senza rimuoverlo.
    void front() {
        if (lung == 0) { // Controlla se la coda è vuota
            std::cout << "Errore: Coda vuota." << std::endl;
        } else {
            std::cout << "L'elemento in testa è: " << elementi[start] << std::endl;
        }
    }

    //Restituisce true se la coda è vuota, altrimenti false.
    bool isEmpty()
    {
      if (lung == 0)
      return true;
      else
      return false;
    }

    // Restituisce il numero di elementi nella coda.
    void size() {
        std::cout << "Il numero di elementi nella coda è: " << lung << std::endl;
    }
};

    
