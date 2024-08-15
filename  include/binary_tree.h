//
// Created by Shantanu Banerjee on 15/08/24.
//

#ifndef BINARY_TREE_BINARY_TREE_H
#define BINARY_TREE_BINARY_TREE_H

#include <type_traits>

#include "properties.h"

template <typename T,
        typename = std::enable_if<std::is_base_of_v<serializable, T>>::type>
struct binary_tree {

};

#endif //BINARY_TREE_BINARY_TREE_H
