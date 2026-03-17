#ifndef LESSON4_INT_LIST_H
#define LESSON4_INT_LIST_H

#include <vector>

class IntList {
public:
    IntList(std::vector<int> values);

    int size() const;
    int get(int index) const;
    void set(int index, int value);

private:
    std::vector<int> values_;
};

#endif // LESSON4_INT_LIST_H`