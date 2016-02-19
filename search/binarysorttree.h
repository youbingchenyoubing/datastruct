#ifndef _BINARYSORTTREE_H
#define _BINARYSORTTREE_H
#include "treeNode.h"
class binarysorttree
{

   private:
    treeNode *root;
    int nodeNum;
   public:
     binarysorttree(int data[],int length);
     treeNode * bulidNode(const int &data);
     treeNode * find_data_in_tree_node(const treeNode * pTreeNode,const int &data);
     int count_node_number_in_tree(const treeNode *pTreeNode);
     void print_all_node_value(const treeNode *pTreeNode);
     int count_tree_height(const treeNode *pTreeNode); 
};

#endif
