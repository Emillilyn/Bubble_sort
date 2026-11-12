#ifndef BUBBLE_SORT_UNIQUE_H
#define BUBBLE_SORT_UNIQUE_H

#include <vector>

// Removes duplicate values from a SORTED sequence
// (duplicates are next to each other after bubble sort).
class Unique {
public:
    explicit Unique(std::vector<int> data);

    void remove_duplicates();
    const std::vector<int>& data() const;

private:
    std::vector<int> arr_;
};

#endif //BUBBLE_SORT_UNIQUE_H

