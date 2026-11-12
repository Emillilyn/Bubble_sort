#include "reverse.h"

#include <utility>

Reverse::Reverse(std::vector<int> data) : arr_(std::move(data)) {}

void Reverse::reverse_order() {
    if (arr_.size() < 2) return;

    std::size_t i = 0;
    std::size_t j = arr_.size() - 1;
    while (i < j) {
        std::swap(arr_[i], arr_[j]);
        ++i;
        --j;
    }
}

const std::vector<int>& Reverse::data() const {
    return arr_;
}