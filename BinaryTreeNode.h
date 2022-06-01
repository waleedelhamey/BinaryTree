//
// Created by Pc on 5/5/2020.
//

#ifndef BINARYTREE_BINARYTREENODE_H
#define BINARYTREE_BINARYTREENODE_H
#include <bits/stdc++.h>
using namespace std;
template <class T>
class BinaryTreeNode {
private:
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;
    T key;
public:
    BinaryTreeNode(){
        left=right=0;
        key=0;
    }
    BinaryTreeNode(T k, BinaryTreeNode* l = 0, BinaryTreeNode* r = 0){
        key=k;
        left=l;
        right=r;
    }
    BinaryTreeNode(BinaryTreeNode* node){
        key=node->getKey();
        left=node->getLeft();
        right=node->getRight();
    }
    void setLeft(BinaryTreeNode<T>* l){
        left=l;
    }
    void setRight(BinaryTreeNode<T>* r){
        right=r;
    }
    void setKey(T k){
        key=k;
    }
    BinaryTreeNode<T>* getLeft(){
        return left;
    }
    BinaryTreeNode<T>* getRight(){
        return right;
    }
    T getKey(){
        return key;
    }
    void operator =(BinaryTreeNode<T>* node){
        key=node->getKey();
        left=node->getLeft();
        right=node->getRight();
    }

};



#endif //BINARYTREE_BINARYTREENODE_H
