//
// Created by Shantanu Banerjee on 15/08/24.
//

#ifndef BINARY_TREE_BINARY_TREE_H
#define BINARY_TREE_BINARY_TREE_H

#include <type_traits>
#include <vector>

#include "properties.h"

template <typename T, typename = std::enable_if<std::is_base_of_v<serializable, T>>::type>
struct binary_tree_node {
    binary_tree_node * left;
    binary_tree_node * right;
    T val;

    binary_tree_node(T val) : val(val) {
        left = right = nullptr;
    }

    virtual ~binary_tree_node() {
        delete left;
        delete right;
    }
};

template <typename T, typename = std::enable_if<std::is_base_of_v<binary_tree_node<T>, T>>::type>
struct binary_tree {
    T * root = nullptr;

    virtual ~binary_tree() {
        delete root;
    }

    std::vector<T*> traverse_inorder() {
        std::vector<T*> traversal {};
        _traverse_inorder(root, traversal);
        return traversal;
    }



private:
    void _traverse_inorder(T * r, std::vector<T*>& inorder) {
        if (!r)
            return;
        _traverse_inorder(r->left, inorder);
        inorder.push_back(r);
        _traverse_inorder(r->right, inorder);
    }

};

#endif //BINARY_TREE_BINARY_TREE_H
