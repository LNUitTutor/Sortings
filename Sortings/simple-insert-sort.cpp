#include "sort-procedures.h"

// ¬ѕќ–яƒ ”¬јЌЌя ћј—»¬” а ѕ–ќ—“»ћ» ¬—“ј¬ јћ»
void SimpleInsertSort(int* a, unsigned n)
{
	// спочатку впор€дкованим Ї лише перший елемент посл≥довност≥
	// переберемо вс≥ ≥нш≥ ≥ кожен з них вставимо на в≥дпов≥дне м≥сце
	for (unsigned index_to_insert = 1; index_to_insert < n; ++index_to_insert)
	{
		// шукаЇмо м≥сце дл€ чергового елемента
		int b = a[index_to_insert];
		int comparison_place = index_to_insert - 1;
		while (comparison_place >= 0 && a[comparison_place] > b)
		{					// посуваЇмо впор€дкован≥ елементи
			a[comparison_place + 1] = a[comparison_place];
			--comparison_place;
		}
		// вставл€Їмо черговий елемент у впор€дковану частину
		a[comparison_place + 1] = b;
	}
	return;
}