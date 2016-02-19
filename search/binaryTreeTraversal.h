#ifndef _BINARYTREETRAVERSAL_H
#define _BINARYTREETRAVERSAL_H
#include "treeNode.h"
  class binaryTreeTraversal
{
    private:
      treeNode *root;
      void createBinTree();
    public:
      binaryTreeTraversal(treeNode *root1);
      binaryTreeTravelsal();
      void preOrder();
      void inOrder();
      void postOrder();
      void postOrder1();
      
      
};

 
#endif 
