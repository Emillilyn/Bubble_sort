#ifndef BUBBLE_SORT_REVERSE_H
#define BUBBLE_SORT_REVERSE_H

#include <vector>

// Reverses the order of elements in place.
class Reverse {
public:
    explicit Reverse(std::vector<int> data);

    void reverse_order();
    const std::vector<int>& data() const;

private:
    std::vector<int> arr_;
};

#endif //BUBBLE_SORT_REVERSE_H