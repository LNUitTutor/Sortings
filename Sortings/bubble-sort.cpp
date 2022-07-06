#include "sort-procedures.h"

// ¬ѕќ–яƒ ”¬јЌЌя ћј—»¬” а ћ≈“ќƒќћ Ѕ”Ћ№ЅјЎ » (ќЅћ≤Ќ≤¬)
void BubbleSort(int* a, unsigned n)
{
	// пор≥вн€Їмо кожну пару сус≥д≥в ≥ обм≥н€Їмо м≥сц€ми
	// невпор€дкован≥ пари. перегл€д повторимо n-1 раз
	for (unsigned last_unsorted = n - 1; last_unsorted > 0; --last_unsorted)
		for (unsigned i = 0; i < last_unsorted; ++i)
			if (a[i] > a[i + 1]) // Ђневпор€дкованихї сус≥д≥в
			{					 // потр≥бно пом≥н€ти м≥сц€ми
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
			}
}

// ¬ѕќ–яƒ ”¬јЌЌя ћј—»¬” а ѕќ –јў≈Ќ»ћ ћ≈“ќƒќћ ќЅћ≤Ќ≤¬
void ReplaceSort(int* a, unsigned n)
{
	// пор≥вн€Їмо кожну пару сус≥д≥в ≥ обм≥н€Їмо м≥сц€ми
	// невпор€дкован≥ пари. перегл€д повтор€тимемо, поки потр≥бно
	unsigned place_of_swap;         // м≥сце останнього виконаного обм≥ну
	unsigned last_unsorted = n - 1; // спочатку весь масив - невпор€дкований
	while (last_unsorted > 0)
	{
		place_of_swap = 0;    // припустили, що вс≥ пари Ї у правильному пор€дку
		for (unsigned i = 0; i < last_unsorted; ++i)
			if (a[i] > a[i + 1]) // знайшли Ђневпор€дкованихї сус≥д≥в
			{					 // потр≥бно пом≥н€ти њх м≥сц€ми
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
				place_of_swap = i;           // ≥ запамТ€тати м≥сце, де це сталос€
			}
		last_unsorted = place_of_swap; // зм≥нили межу невпор€дкованоњ частини
	}
}

// ¬ѕќ–яƒ ”¬јЌЌя ћј—»¬” а ћ≈“ќƒќћ «ћ≤Ў”¬јЌЌя
void ShakerSort(int* a, unsigned n)
{
	int first_unsorted = 0;  // меж≥ невпор€дкованоњ частини
	int last_unsorted = n - 1;
	while (first_unsorted != last_unsorted)
	{
		// перегл€даЇмо невпор€дковану частину зл≥ва направо
		int last_place_of_swap = first_unsorted;
		for (int i = first_unsorted; i < last_unsorted; ++i)
			if (a[i] > a[i + 1])
			{                  // та виконуЇмо необх≥дн≥ обм≥ни
				int to_swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = to_swap;
				last_place_of_swap = i;
			}
		last_unsorted = last_place_of_swap; // посунули праву межу л≥воруч
		// а тод≥ - справа нал≥во
		int first_place_of_swap = last_unsorted;
		for (int i = last_unsorted; i > first_unsorted; --i)
			if (a[i - 1] > a[i])
			{                 // також виконуЇмо обм≥ни
				int to_swap = a[i];
				a[i] = a[i - 1];
				a[i - 1] = to_swap;
				first_place_of_swap = i;
			}
		first_unsorted = first_place_of_swap; // посунули л≥ву межу праворуч
	}
}
