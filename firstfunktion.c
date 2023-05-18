#include <stdio.h>

int average(int n1, int n2, int n3)
{
  float t = 3.0;
  float erg;
  int i;
  erg = (n1 + n2 + n3)/t;
  
  return erg;
}

void main()
{
  int number1 = 35, number2 = 454, number3 = 62;
  float erg;
  
  erg = average(number1, number2, number3);
  
  printf("Das Ergebnis von %i, %i, %i = %.2f", number1, number2, number3, erg); 
  
  return;
}