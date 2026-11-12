#include "unique.h"

#include <utility>

Unique::Unique(std::vector<int> data) : arr_(std::move(data)) {}

void Unique::remove_duplicates() {
    if (arr_.empty()) return;

    // write = position of the next unique value to keep
    std::size_t write = 1;
    for (std::size_t read = 1; read < arr_.size(); ++read) {
        if (arr_[read] != arr_[write - 1]) {
            arr_[write++] = arr_[read];
        }
    }
    arr_.resize(write);
}

const std::vector<int>& Unique::data() const {
    return arr_;
}