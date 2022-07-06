#include "sort-procedures.h"

// ������������� ������ � �� ��������� ������ �����������
void FindMaxSort(int* a, unsigned n)
{
	// ���������� ��������� ������� �������������� �������
	// � ������������� ���� � �� ������� ���������.
	// �������� ��������������� ���� ������
	for (unsigned last_unsorted = n - 1; last_unsorted > 0; --last_unsorted)
	{
		int max_value = a[0]; // �������� �������� � ����� ����������
		unsigned index_of_max = 0;
		for (unsigned i = 1; i <= last_unsorted; ++i)
			if (a[i] > max_value)
			{
				max_value = a[i];
				index_of_max = i;
			}
		if (index_of_max != last_unsorted) // ������� ���������� �� ���� ����
		{
			a[index_of_max] = a[last_unsorted];
			a[last_unsorted] = max_value;
		}
	}
	return;
}