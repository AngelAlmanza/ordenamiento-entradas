int *shell(int arreglo[], int n) {
  int ints, i, aux;
  bool band;

  ints = n;

  while (ints > 1) {
    ints = (ints/2);
    band = true;
    while (band) {
      band = false;
      i = 0;
      while((i + ints) <= n) {
        if (arreglo[i] > arreglo[i + ints]) {
          aux = arreglo[i];
          arreglo[i] = arreglo[i + ints];
          arreglo[i + ints] = aux;
          band = true;
        }
        i++;
      }
    }
  }

  return arreglo;
}