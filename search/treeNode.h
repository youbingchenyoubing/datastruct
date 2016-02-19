#ifndef _TREENODE_H
#define _TREENODE_H


struct treeNode
{
    int value;
    bool isFirst;
    treeNode *leftchild;
    treeNode *rightchild;
    treeNode(const int &data):value(data),isFirst(true){
     leftchild=nullptr;
     rightchild=nullptr;
}
};


#endif
