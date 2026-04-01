#include "IntList.hpp"
#include "sorter.hpp"

#include <iostream>

void printList(const IntList& list) {
    for (int i = 0; i < list.size(); ++i) {
        std::cout << list.get(i) << ' ';
    }

    std::cout << '\n';
}

int main() {
    Sorter sorter;

    IntList selection({9, 4, 7, 1, 3});
    sorter.selectionSortAscending(selection);
    printList(selection);

    IntList bubble({9, 4, 7, 1, 3});
    sorter.bubbleSortAscending(bubble);
    printList(bubble);

    IntList insertion({9, 4, 7, 1, 3});
    sorter.insertionSortAscending(insertion);
    printList(insertion);

    return 0;
}
