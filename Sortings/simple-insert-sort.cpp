#include "sort-procedures.h"

// ������������� ������ � �������� ���������
void SimpleInsertSort(int* a, unsigned n)
{
	// �������� ������������� � ���� ������ ������� �����������
	// ���������� �� ���� � ����� � ��� �������� �� �������� ����
	for (unsigned index_to_insert = 1; index_to_insert < n; ++index_to_insert)
	{
		// ������ ���� ��� ��������� ��������
		int b = a[index_to_insert];
		int comparison_place = index_to_insert - 1;
		while (comparison_place >= 0 && a[comparison_place] > b)
		{					// �������� ����������� ��������
			a[comparison_place + 1] = a[comparison_place];
			--comparison_place;
		}
		// ���������� �������� ������� � ������������ �������
		a[comparison_place + 1] = b;
	}
	return;
}