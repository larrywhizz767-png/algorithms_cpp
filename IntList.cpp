#include "IntList.hpp"

IntList::IntList(std::vector<int> values) {
    values_ = values;
}

int IntList::get(int index) const{
    return values_[index];

}
void IntList::set(int index, int value) {
    values_[index] = value;
}

int IntList::size() const {
    return static_cast<int>(values_.size());
}