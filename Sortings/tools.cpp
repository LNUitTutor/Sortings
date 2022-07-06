#include "sort-procedures.h"
#include <ctime>
#include <iomanip>

int* CreateRandomVector(unsigned n)
{
	int* a = new int[n];
	std::srand(std::time(0));
	unsigned m = n * 2;
	for (unsigned i = 0; i < n; ++i)
		a[i] = std::rand() % m;
	return a;
}

int* CreateCopyVector(int* a, unsigned n)
{
	int* c = new int[n];
	for (unsigned i = 0; i < n; ++i) c[i] = a[i];
	return c;
}

void PrintVector(int* a, unsigned n)
{
	for (unsigned i = 0; i < n; ++i)
		cout << std::setw(5) << a[i];
	cout << std::endl;
}

void Manage(void (*Sort)(int* a, unsigned n), int* a, unsigned n)
{
	int* vector = CreateCopyVector(a, n);
	cout << "\nПеред впорядкуванням:\n"; PrintVector(vector, n);
	Sort(vector, n);
	cout << "\nПісля впорядкування:\n"; PrintVector(vector, n); 
	delete[] vector;
}