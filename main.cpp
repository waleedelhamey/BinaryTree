#include <bits/stdc++.h>
#include "BinaryTreeFCI.cpp"
#include "BinaryTreeNode.h"
using namespace std;
int main() {
    BinaryTreeFCI<int>BT1;
    BinaryTreeNode<int>* it=BT1.root;
    BT1.root=BT1.insert(5);
    BT1.root=BT1.insert(7);
    BT1.root=BT1.insert(3);
    BT1.root=BT1.insert(6);
    BT1.root=BT1.insert(8);
    BT1.display(it);
    return 0;
}