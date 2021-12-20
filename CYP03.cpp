// CYP03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main ()
{
		int dia = 0, mes = 0, ano = 0;
		int n1, n2, suma;

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
		printf("\nDame un numero: ");
		scanf_s("%d", &n1);
		printf("Dame otro numero: ");
		scanf_s("%d", &n2);
		suma = n1 + n2;
		printf("\n El resultado de la suma es, %d", suma);
}


