// CYP03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main ()
{
		int dia = 0, mes = 0, ano = 0;
		int num1, num2, num3, suma;
		int meses[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		scanf_s("%i %i %i", &dia, &mes, &ano);
		if (dia == 4 && mes == 10 && ano == 1582) {
		dia = 14;
	}
		if (((ano % 4) == 0) && (ano != 100)) {
		meses[1] = 29;
	} //31 11 2000 ----> 1 12 2000
		if (dia == meses[mes - 1]) {
		dia = 1;
		if (mes == 12) {
			mes = 1;
			ano++;
		}
		else { mes++; }
	}
		else { dia++; }
		printf("%2i %2i %4i", dia, mes, ano);
		return 0;

		printf("ingresa tres numeros a sumar");
		scanf_s("%i", &num1);
		scanf_s("%i", &num2);
		scanf_s("%i", &num3);

		suma = num1 + num2 + num3;

		printf("%i", suma);
}


