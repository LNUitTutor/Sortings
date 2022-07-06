#include "sort-procedures.h"

// ВПОРЯДКУВАННЯ МАСИВУ а ЗА ДОПОМОГОЮ ВИБОРУ НАЙБІЛЬШОГО
void FindMaxSort(int* a, unsigned n)
{
	// шукатимемо найбільший елемент невпорядкованої частини
	// і обмінюватимемо його з її останнім елементом.
	// спочатку невпорядкований весь вектор
	for (unsigned last_unsorted = n - 1; last_unsorted > 0; --last_unsorted)
	{
		int max_value = a[0]; // початкові значення і номер найбільшого
		unsigned index_of_max = 0;
		for (unsigned i = 1; i <= last_unsorted; ++i)
			if (a[i] > max_value)
			{
				max_value = a[i];
				index_of_max = i;
			}
		if (index_of_max != last_unsorted) // ставимо найбільшого на його місце
		{
			a[index_of_max] = a[last_unsorted];
			a[last_unsorted] = max_value;
		}
	}
	return;
}