#include <iostream>
#include <fstream>
#include "sort.h"

using namespace std;

string imprimir(int[], int n);
void escribir(string);
int *llenar(int[]);

int main() {
  string txt = "Arreglo desordenado\n";
  // int numeros[] = {50, 3, 5, 10, 9, 11, 1, 25, 19};
  int numerosA[9];

  cout << "Introduce 9 numeros para el arreglo\n";
  int *numeros = llenar(numerosA);

  txt += imprimir(numeros, 9);
  int *ptr = shell(numeros, 9);
  txt += ("Arreglo ordenado\n" + imprimir(ptr, 9));

  escribir(txt);

  return 0;
}

string imprimir(int arreglo[], int n) {
  string txt = "";

  for (int i = 0; i < n; i++) {
    txt += "[" + to_string(arreglo[i]) + "] ";
  }

  txt += "\n";

  return txt;
}

void escribir(string txt) {
  ofstream sort;
  sort.open("./sort.txt", ios::out);

  if (sort.fail()) {
    cout << "No se pudo abrir el archivo" << endl;
  }

  sort << txt;
  sort.close();
}

int *llenar(int arreglo[]) {
  int x;
  for (int i = 0; i < 9; i++) {
    cout << "Dame el siguiente valor" << endl;
    cin >> x;
    arreglo[i] = x;
  }
  return arreglo;
}