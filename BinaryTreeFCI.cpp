//
// Created by Pc on 5/5/2020.
//

#include <bits/stdc++.h>
#include "BinaryTreeFCI.h"
#include "BinaryTreeNode.h"
using namespace std;
template <class T>
BinaryTreeFCI<T>::BinaryTreeFCI(){
    root = 0;
}
template <class T>
void BinaryTreeFCI<T>:: clear()   {
    root = 0;
}
template <class T>
bool BinaryTreeFCI<T>:: isEmpty() {
    return root == 0;
}
template <class T>
T BinaryTreeFCI<T>:: search(T element){
    if(isEmpty()){
        cerr<<"The BST is already empty \n";
        return 0;
    }
    BinaryTreeNode<T>*it =root;
    while(it!=0){
        if(it->getKey()==element){
            return it->getKey();
        }
        else if(element<it->getKey()){
            it = it->getLeft();
        }
        else{
            it = it->getRight();
        }
    }
    delete it;
    return 0;
}
template <class T>
BinaryTreeNode<T>* BinaryTreeFCI<T>:: insert(T element){
    if(root==0){
        root=new BinaryTreeNode<T>(element);
        return root;
    }
    else{
        BinaryTreeNode<T>*it=root;
        return insertNode(it,element);

    }

}
template <class T>
BinaryTreeNode<T>* BinaryTreeFCI<T>::insertNode(BinaryTreeNode<T>*it,T element){
//    if(it->getLeft()==0){
//        BinaryTreeNode<T>* newNode= new BinaryTreeNode<T>(element);
//        it->setLeft(newNode);
//    }
//    else if(it->getRight()==0){
//        BinaryTreeNode<T>* newNode= new BinaryTreeNode<T>(element);
//        it->setRight(newNode);
//    }
//    else{
//        insertNode(it->getLeft(),element);
//        insertNode(it->getRight(),element);
//       }
/* If the tree is empty, return a new node */
    if (it == NULL) {
        BinaryTreeNode<T>* newNode= new BinaryTreeNode<T>(element);
        return newNode ;
    }

    /* Otherwise, recur down the tree */
    if (!it->getLeft())
        it->setLeft(insert(it->getLeft(), element)) ;
    else if (!it->getRight())
        it->setRight(insert(it->getRight(), element)) ;

    /* return the (unchanged) node pointer */
    return it;
}
//template <class T>
//void BinaryTreeFCI<T>::insert(BinaryTreeNode<T>* it, int element){
//    if(root==0){
//        root=new BinaryTreeNode<T>(element);
//        return;
//    }
//    queue<BinaryTreeNode<T>*> q;
//    q.push(it);
//    while (!q.empty()) {
//        BinaryTreeNode<T>* temp = q.front();
//        q.pop();
//
//        if (!temp->getLeft()) {
//            BinaryTreeNode<T>* newNode= new BinaryTreeNode<T>(element);
//            temp->setLeft(newNode);
//            break;
//        } else
//            q.push(temp->getLeft());
//
//        if (!temp->getRight()) {
//            BinaryTreeNode<T>* newNode= new BinaryTreeNode<T>(element);
//            temp->setRight(newNode);
//            break;
//        } else
//            q.push(temp->getRight());
//    }
//}
template <class T>
void BinaryTreeFCI<T>:: display(BinaryTreeNode<T>*it){
    if (it == 0)
        return;
    display(it->getLeft());
    cout << it->getKey() << " ";
    display(it->getRight());
}