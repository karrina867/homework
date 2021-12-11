#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
using namespace std; 
//заполнение матрицы случайными числами для задачи №3.
void fill_random(int** mar, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mar[i][j] = rand() % 30;
		}
	}
}
//заполнение матрицы случайными числами для задачи №4.
void fill_rand(int** mar, int n,int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mar[i][j] = rand() % 81 - 40;
		}
	}
}
//заполнение масива случайными числами для задачи №1.
void fill_ran(int* mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
	}
}
//заполнение масива случайными числами для задачи №2.
void fill_ra(int* mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 121-60;
	}
}
//печать матрицы задачи №3.
void print_matrix(int** mar, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << mar[i][j];
		}
		cout << endl;
	}
}
//печать матрицы задачи №4.
void print_matri(int** mar, int n,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << mar[i][j];
		}
		cout << endl;
	}
}
//печать массива задачи №1.
void print_massive(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
//печать массива задачи №2
void print_massiv(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
//найти сумму элементов массива с нечётными номерами.№1.
int sum_nechot(int* mas, int n) {
	int k = 0;
	for (int i= 1; i < n; i = i + 2) {
		k = k + mas[i];
	}
	return k;
}
//найти произведение отрицацельных элементов массива.№2.
int prois_otr(int* mas, int n) {
	int v = 1;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) v = v * mas[i];
	}
	return v;
}
//найти среднее геометрическое элементов на главной диагонали.№3.
double spednee_geometr(int** mar, int n) {
	double v = 1.0,c=1.0,f=1.0;
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 1; j++) {
			v =v*mar[i][j];
		}
	}
	for (int i = 1; i < 2; i++) {
		for (int j = 1; j < 2; j++) {
			c = c * mar[i][j];
		}
	}
	for (int i = 2; i < 3; i++) {
		for (int j = 2; j < 3; j++) {
			f = f * mar[i][j];
		}
	}
	v = sqrt(v*f*c);
	return v;
}
//сколько в этом столбце положительных чисел.№4
int poloz(int** mar, int n, int m) {
	int h, g = 0;
	cin >> h;
	if (h == 1) {
		if (mar[0][0] > 0) { g++; }
		if (mar[1][0] > 0) { g++; }
		if (mar[2][0] > 0) { g++; }
		if (mar[3][0] > 0) { g++; }
		cout << g;
	}
	else if (h == 2) {
		if (mar[0][1] > 0) { g++; }
		if (mar[1][1] > 0) { g++; }
		if (mar[2][1] > 0) { g++; }
		if (mar[3][1] > 0) { g++; }
		cout << g;
	}
	else if (h == 3) {
		if (mar[0][2] > 0) { g++; }
		if (mar[1][2] > 0) { g++; }
		if (mar[2][2] > 0) { g++; }
		if (mar[3][2] > 0) { g++; }
		cout << g;
	}
	return g;
}