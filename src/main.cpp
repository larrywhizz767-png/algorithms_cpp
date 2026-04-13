#include "IntList.hpp"
#include "sorter.hpp"

#include <iostream>

void printList(const IntList& list) {
    for (int i = 0; i < list.size(); i++) {
        std::cout << list.get(i) << ' ';
    }

    std::cout << '\n';
}

int main() {
    Sorter sorter;
    std::vector<int> myList = {6, 1, 5, 2, 4, 3};

    IntList selection(myList);
    sorter.selectionSortAscending(selection);
    std::cout << "Selection sort result: " << "\n";
    printList(selection);

    IntList bubble(myList);
    sorter.bubbleSortAscending(bubble);
    std::cout << "Bubble sort result: " << "\n";
    printList(bubble);

    IntList insertion(myList);
    sorter.insertionSortAscending(insertion);
    std::cout << "Insertion sort result: " << "\n";
    printList(insertion);

    IntList cocktail(myList);
    sorter.cocktailSortAscending(cocktail);
    std::cout << "Cocktail sort result: " << "\n";
    printList(cocktail);

}
