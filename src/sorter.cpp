#include "sorter.hpp"
#include <iostream>

void Sorter::selectionSortAscending(IntList& list) const {
    int list_size = list.size();

    for (int pass = 0; pass < list_size - 1; pass++) {
        int min_index = pass;

        for (int i = pass + 1; i < list_size; i++) {  // FIXED
            if (list.get(i) < list.get(min_index)) {
                min_index = i;
            }
        }

        if (min_index != pass) {  // cleaner condition
            int temp = list.get(pass);
            list.set(pass, list.get(min_index));
            list.set(min_index, temp);
        }
    }
}

void Sorter::bubbleSortAscending(IntList& list) const
{
    int n = list.size();
    bool didSwap = true;

    while (didSwap == true) {
        didSwap = false;
        for (int i = 0; i < n - 1; i++) {

            int a = list.get(i);
            int b = list.get(i + 1);

            if (a > b) {
                list.set(i, b);
                list.set(i + 1, a);
                didSwap = true;
            }
        }
    }
}
void Sorter::insertionSortAscending(IntList& list) const
{
    for (int i = 1; i < list.size(); i++) {
        int valueToInsert = list.get(i);
        int scanIndex = i - 1;

        while (scanIndex >= 0 && list.get(scanIndex) > valueToInsert) {
            list.set(scanIndex + 1, list.get(scanIndex)); 
            scanIndex--;
        }

        list.set(scanIndex + 1, valueToInsert); 
    }
