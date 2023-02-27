#include <iostream>
#include "sort.h"

using namespace std;

void imprimir(int[], int n);

int main() {
  int numeros[9] = {50, 3, 5, 10, 9, 11, 1, 25, 19};
  int *ptr = shell(numeros, 9);
  imprimir(ptr, 9);
  return 0;
}

void imprimir(int arreglo[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << arreglo[i] << "] ";
  }
    cout << "\n";
}