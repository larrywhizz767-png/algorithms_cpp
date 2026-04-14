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

    IntList selection_asc(myList);
    sorter.selectionSortAscending(selection_asc);
    std::cout << "Selection sort result: " << "\n";
    printList(selection_asc);

    IntList selection_desc(myList);
    sorter.selectionSortDescending(selection_desc);
    std::cout << "Selection sort descending: " << "\n";
    printList(selection_desc);

    IntList bubble_asc(myList);
    sorter.bubbleSortAscending(bubble_asc);
    std::cout << "Bubble sort ascending: " << "\n";
    printList(bubble_asc);

    IntList bubble_desc(myList);
    sorter.bubbleSortDescending(bubble_desc);
    std::cout << "Bubble sort descending: " << "\n";
    printList(bubble_desc);

    IntList insertion_asc(myList);
    sorter.insertionSortAscending(insertion_asc);
    std::cout << "Insertion sort ascending: " << "\n";
    printList(insertion_asc);

    IntList insertion_desc(myList);
    sorter.insertionSortDescending(insertion_desc);
    std::cout << "Insertion sort descending: " << "\n";
    printList(insertion_desc);

    IntList cocktail_asc(myList);
    sorter.cocktailSortAscending(cocktail_asc);
    std::cout << "Cocktail sort ascending: " << "\n";
    printList(cocktail_asc);

    IntList cocktail_desc(myList);
    sorter.cocktailSortDescending(cocktail_desc);
    std::cout << "Cocktail sort descending: " << "\n";
    printList(cocktail_desc);


}
