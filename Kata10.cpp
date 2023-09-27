int square_digits(int numero) {
  int factor = 1;
  int resultado = 0;
  while (numero > 0) {
    int digito = numero % 10;
    resultado += factor * digito * digito;
    factor *= (digito <= 3) ? 10 : 100;
    numero /= 10;
  }
  return resultado;
}
