//
// Created by Shantanu Banerjee on 15/08/24.
//

#ifndef BINARY_TREE_PROPERTIES_H
#define BINARY_TREE_PROPERTIES_H

#include <cstddef>
#include <string>

struct serializable {
    virtual std::byte * serialize() const = 0;
    virtual size_t size() const = 0;
};

struct printable {
    virtual std::string print() const = 0;
};

#endif //BINARY_TREE_PROPERTIES_H
