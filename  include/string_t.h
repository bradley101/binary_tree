//
// Created by Shantanu Banerjee on 15/08/24.
//

#ifndef BINARY_TREE_STRING_T_H
#define BINARY_TREE_STRING_T_H

#include "properties.h"

struct string_t : protected serializable, public printable {
    using type = std::string;

    string_t() : val("") {}
    string_t(type i) : val(i) {}
    string_t(const string_t& i) : val(i.val) {}

    void operator=(const string_t& i) {
        val = i.val;
    }

    inline type get() { return val; }

    std::byte * serialize() const override {
        auto buf = new std::byte[size()];
        memcpy(buf, val.c_str(), size());
        return buf;
    }

    size_t size() const {
        return val.size() + 1;
    }

    std::string print() const override {
        return val;
    }

private:
    type val;
};

#endif //BINARY_TREE_STRING_T_H
