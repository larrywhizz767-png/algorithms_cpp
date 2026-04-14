#ifndef LESSON4_SORTER_H
#define LESSON4_SORTER_H
#include "IntList.hpp"

class IntList;

class Sorter {
public:
    void selectionSortAscending(IntList& list) const;
    void selectionSortDescending(IntList& list) const;
    void bubbleSortAscending(IntList& list) const;
    void bubbleSortDescending(IntList& list) const;
    void insertionSortAscending(IntList& list) const;
    void insertionSortDescending(IntList& list) const;
    void cocktailSortAscending(IntList& list) const;
    void cocktailSortDescending(IntList& list) const;
};

#endif // LESSON4_SORTER_H