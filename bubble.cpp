#include <iostream>

using namespace std;

int main() {
    //dichiarazione variabile temp e vettore vector (lunghezza 5)
    int temp;
    int vector[5];

    //aggiungo gli elementi chiesti nel vettore
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci l'elemento " << i << " della lista" << endl;
        cin >> vector[i];
    }

    //ordino il vettore
    for (int i = 0; i < 5; i++) { //seleziono il numero alla posizione i del vettore
        for (int j = i + 1; j < 5; j++){ //seleziono il numero successivo 
            if (vector[i] > vector[j]) { //controllo se vector[i] è maggiore di vector[j]
                //risposta affermativa sostituisco
                temp = vector[j]; 
                vector[j] = vector[i];
                vector[i] = temp;
            }
        }
    }

    //restituisco il vettore ordinato
    cout << "Lista ordinata ottenuta: ";
    for (int i = 0; i < 5; i++) {
        cout << vector[i] << ", ";
    }   
    return 0; //fine
}