#include"my.h"
int main() {
	//№1.задан массив,содержащий 20 целых чисел в диапазоне от -20 до 20.Найти сумму элементов этого массива с нечётными номерами.
	/*int n = 20;
	int* mas;
	mas = new int[n];
	fill_ran(mas,n);
	print_massive(mas, n);
	sum_nechot(mas, n);
	cout << sum_nechot(mas, n) << endl;*/
	//№2.задан массив,содержащий 15 целых чисел в диапазоне от -60 до 60.Найти произведение отрицательных элементов массива.
	/*int n = 15;
	int* mas;
	mas = new int[n];
	fill_ra(mas, n);
	print_massiv(mas,n);
	prois_otr(mas, n);
	cout << prois_otr(mas, n) << endl;*/
	//№3.дана матрица из n строк и n столбцов.заполнить матрицу случайными числами из диапазона от 0 до 30. найти среднее геометрическое элементов
	//на главной диагонали.
	/*int n = 3;
	int** mar;
	mar = new int* [n];
	for (int i = 0; i < n; i++) {
		mar[i] = new int[n];
	}
	fill_random(mar, n);
	print_matrix(mar, n);
	spednee_geometr(mar, n);
	cout << spednee_geometr(mar, n) << endl;*/
	//№4.дана матрица из n строк m столбцов,которая содержит целые числа в диапазоне от -40 до 40.ввести с клавиатуры номер столбца и подсчитать,
	//сколько в этом столбце положительных чисел.
	int n = 4;
	int m = 3;
	int** mar;
	mar = new int* [n];
	for (int i = 0; i < n; i++) {
		mar[i] = new int[n];
	}
	fill_rand(mar, n, m);
	print_matri(mar, n, m);
	cout << endl;
	poloz(mar, n, m);
}