#ifndef _SORTS_PROCEDURES_GUARD_
#define _SORTS_PROCEDURES_GUARD_

#include <iostream>
using std::cout;
using std::cin;

void SimpleInsertSort(int* a, unsigned n);
void FindMaxSort(int* a, unsigned n);
void BubbleSort(int* a, unsigned n);
void ReplaceSort(int* a, unsigned n);
void ShakerSort(int* a, unsigned n);

int* CreateRandomVector(unsigned n);
int* CreateCopyVector(int* a, unsigned n);
void PrintVector(int* a, unsigned n);
void Manage(void (*Sort)(int* a, unsigned n), int* a, unsigned n);

#endif