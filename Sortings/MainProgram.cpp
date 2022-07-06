#include <Windows.h>
#include "sort-procedures.h"

int main()
{
	// ������ ��������� ����������

	SetConsoleOutputCP(1251); // ��������� ��������� ���������
	cout << "������� ����� ������ ��� �������������: ";
	unsigned n; cin >> n;
	int* sample = CreateRandomVector(n);
	int answer;
	do
	{
		system("cls");
		cout << "������� �������� �������������:\n\n 1 - ���������� ���������\n"
			<< " 2 - ���������� �������\n 3 - ���������� �������\n"
			<< " 4 - ���� ������ ��� ����������\n 5 - ���������� ������\n >>>> ";
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
			cout << "������� ����� ������ ��� �������������: ";
			cin >> n; sample = CreateRandomVector(n); break;
		default: cout << "�� ���������!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 5);
	delete[] sample;
	return 0;
}