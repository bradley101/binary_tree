//
// Created by Shantanu Banerjee on 15/08/24.
//

#ifndef BINARY_TREE_TYPES_H
#define BINARY_TREE_TYPES_H

#include "properties.h"

struct int_t : protected serializable, public printable {
    using type = int;

    int_t() : val(0) {}
    int_t(type i) : val(i) {}
    int_t(const int_t& i) : val(i.val) {}

    int_t& operator=(const int_t& i) {
        val = i.val;
        return *this;
    }

    inline int get() { return val; }

    std::byte * serialize() const override {
        auto buf = new std::byte[size()];
        memcpy(buf, &val, size());
        return buf;
    }

    size_t size() const {
        return sizeof val;
    }

    std::string print() const override {
        return std::to_string(val);
    }

private:
    type val;
};

#endif //BINARY_TREE_TYPES_H
