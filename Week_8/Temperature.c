#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
  double temp;
  char unit;
  scanf("%lf %c", &temp, &unit);
  
  if (unit == 'c' || unit == 'C') {
    printFarenheit(celsiusToFahrenheit(temp));
  } else {
    printCelcius(fahrenheitToCelcius(temp));
  }

  return 0;
}

double celsiusToFahrenheit(double celcius) {
  double fahrenheit = 32 + (celcius * (180.0 / 100.0));
  return fahrenheit;
}

void printFarenheit(double fahrenheit) {
  printf("%.2lf f", fahrenheit);
}

double fahrenheitToCelcius(double fahrenheit) {
  double celcius = ((fahrenheit - 32) / (180.0 / 100.0));
  return celcius;
}

void printCelcius(double celcius) {
  printf("%.2lf c", celcius);
}
