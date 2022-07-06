#include "sort-procedures.h"

// ������������� ������ � ������� ��������� (��̲Ͳ�)
void BubbleSort(int* a, unsigned n)
{
	// ��������� ����� ���� ����� � �������� ������
	// ������������� ����. �������� ��������� n-1 ���
	for (unsigned last_unsorted = n - 1; last_unsorted > 0; --last_unsorted)
		for (unsigned i = 0; i < last_unsorted; ++i)
			if (a[i] > a[i + 1]) // ����������������� �����
			{					 // ������� ������� ������
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
			}
}

// ������������� ������ � ���������� ������� ��̲Ͳ�
void ReplaceSort(int* a, unsigned n)
{
	// ��������� ����� ���� ����� � �������� ������
	// ������������� ����. �������� �������������, ���� �������
	unsigned place_of_swap;         // ���� ���������� ���������� �����
	unsigned last_unsorted = n - 1; // �������� ���� ����� - ���������������
	while (last_unsorted > 0)
	{
		place_of_swap = 0;    // ����������, �� �� ���� � � ����������� �������
		for (unsigned i = 0; i < last_unsorted; ++i)
			if (a[i] > a[i + 1]) // ������� ����������������� �����
			{					 // ������� ������� �� ������
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
				place_of_swap = i;           // � ���������� ����, �� �� �������
			}
		last_unsorted = place_of_swap; // ������ ���� �������������� �������
	}
}

// ������������� ������ � ������� �̲�������
void ShakerSort(int* a, unsigned n)
{
	int first_unsorted = 0;  // ��� �������������� �������
	int last_unsorted = n - 1;
	while (first_unsorted != last_unsorted)
	{
		// ����������� �������������� ������� ���� �������
		int last_place_of_swap = first_unsorted;
		for (int i = first_unsorted; i < last_unsorted; ++i)
			if (a[i] > a[i + 1])
			{                  // �� �������� �������� �����
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
				last_place_of_swap = i;
			}
		last_unsorted = last_place_of_swap; // �������� ����� ���� ������
		// � ��� - ������ �����
		int first_place_of_swap = last_unsorted;
		for (int i = last_unsorted; i > first_unsorted; --i)
			if (a[i - 1] > a[i])
			{                 // ����� �������� �����
				int to_swap = a[i];
				a[i] = a[i - 1];
				a[i - 1] = to_swap;
				first_place_of_swap = i;
			}
		first_unsorted = first_place_of_swap; // �������� ��� ���� ��������
	}
}
