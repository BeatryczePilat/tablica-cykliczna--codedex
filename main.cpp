//Beatrycze Piłat

#include <iostream>

const int N = 5; // Rozmiar tablicy cyklicznej

using namespace std;

int main() {
    int array[N];

    // Wczytaj elementy tablicy od użytkownika
    cout << "Podaj " << N << " elementow tablicy:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    // Operacja odwracania
    int length = 3;
    int start_index = 2;

    // Skoryguj start_index do poprawnego indeksu cyklicznego
    start_index = (start_index % N + N) % N;

    int end_index = (start_index + length - 1) % N;

    // Jeśli length przekracza wielkość tablicy, skoryguj długość
    int actual_length = (length > N - start_index) ? (N - start_index) : length;

    // Odwróć elementy między start_index a end_index
    int *left = array + start_index;
    int *right = array + end_index;

    while (left < right) {
        // Zamień elementy
        int temp = *left;
        *left = *right;
        *right = temp;

        // Przesuń wskaźniki
        left++;
        right--;
    }

    // Wyświetl tablicę po odwróceniu
    cout << "Po odwróceniu:" << endl;
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Operacja przesuwania w lewo
    int steps_left = 2;

    int shift_left = (steps_left % N + N) % N;

    // Odwróć pierwsze 'shift_left' elementów
    left = array;
    right = array + shift_left - 1;
    while (left < right) {
        // Zamień elementy
        int temp = *left;
        *left = *right;
        *right = temp;

        // Przesuń wskaźniki
        left++;
        right--;
    }

    // Odwróć pozostałą część
    left = array + shift_left;
    right = array + N - 1;
    while (left < right) {
        // Zamień elementy
        int temp = *left;
        *left = *right;
        *right = temp;

        // Przesuń wskaźniki
        left++;
        right--;
    }

    // Odwróć całą tablicę
    left = array;
    right = array + N - 1;
    while (left < right) {
        // Zamień elementy
        int temp = *left;
        *left = *right;
        *right = temp;

        // Przesuń wskaźniki
        left++;
        right--;
    }
// Operacja zastępowania elementu
    int index;
    int new_value;

    cout << "Podaj indeks elementu do zastąpienia (indeksowanie od 0): ";
    cin >> index;

    cout << "Podaj nową wartość: ";
    cin >> new_value;

    index = (index % N + N) % N; // Skoryguj indeks cykliczny

    // Zastąp element pod podanym indeksem
    array[index] = new_value;
    // Wyświetl tablicę po przesunięciu w lewo
    cout << "Po przesunięciu w lewo o " << steps_left << " kroków:" << endl;
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;



    // Wyświetl tablicę po zastąpieniu elementu
    cout << "Po zastąpieniu elementu o indeksie " << index << " nową wartością " << new_value << ":" << endl;
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
