#include <Windows.h>
#include "sort-procedures.h"

int main()
{
	// Основні алгоритми сортування

	SetConsoleOutputCP(1251); // налаштуємо виведення кирилицею
	cout << "Задайте розмір масиву для впорядкування: ";
	unsigned n; cin >> n;
	int* sample = CreateRandomVector(n);
	int answer;
	do
	{
		system("cls");
		cout << "Виберіть алгоритм впорядкування:\n\n 1 - Сортування вставками\n"
			<< " 2 - Сортування вибором\n 3 - Сортування обмінами\n"
			<< " 4 - Зміна масиву для сортування\n 5 - Завершення роботи\n >>>> ";
		cin >> answer;
		system("cls");
		switch (answer)
		{
		case 1: Manage(SimpleInsertSort, sample, n); break;
		case 2: Manage(FindMaxSort, sample, n); break;
		case 3: Manage(BubbleSort, sample, n); 
			Manage(ReplaceSort, sample, n);
			Manage(ShakerSort, sample, n);  break;
		case 4: delete[] sample;
			cout << "Задайте розмір масиву для впорядкування: ";
			cin >> n; sample = CreateRandomVector(n); break;
		default: cout << "До побачення!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 5);
	delete[] sample;
	return 0;
}