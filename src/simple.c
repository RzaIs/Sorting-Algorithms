#include "simple.h"

void simpleSort(int * array, int size) {
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[i])
                swap(array, i, j);
}