//
// Created by Pc on 5/5/2020.
//

#ifndef BINARYTREE_BINARYTREEFCI_H
#define BINARYTREE_BINARYTREEFCI_H
#include "BinaryTreeNode.h"
template <class T>
class BinaryTreeFCI {
public:
    BinaryTreeNode<T>* root;
    BinaryTreeFCI() ;
    void clear();
    bool isEmpty();
    T search(T element);
    BinaryTreeNode<T>* insert(T element);
    BinaryTreeNode<T>* insertNode(BinaryTreeNode<T>*it,T element);
    //void insert(BinaryTreeNode<T>* temp, int element);
    void display(BinaryTreeNode<T>*it);
};


#endif //BINARYTREE_BINARYTREEFCI_H
