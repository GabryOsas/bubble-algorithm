#include <iostream>

using namespace std;

int main() {
    int temp;
    int vector[5];
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci l'elemento " << i << " della lista" << endl;
        cin >> vector[i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++){
            if (vector[i] > vector[j]) {
                temp = vector[j];
                vector[j] = vector[i];
                vector[i] = temp;
            }
        }
    }
    cout << "Lista ordinata ottenuta: ";
    for (int i = 0; i < 5; i++) {
        cout << vector[i] << ", ";
    }   
    return 0;
}