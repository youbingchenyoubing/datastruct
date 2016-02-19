#coding:utf-8
#include "binaryTreeTraversal.h"
#include <iostream>
using namespace std;
binaryTreeTraversal::binaryTreeTraversal()
{
     createBinTree();
} 

binaryTreeTraversal::binaryTreeTraversal(treeNode *root1)
{
   root=root1;
}
//root-left-right
void binaryTreeTraversal::preorder()
{
    stack<treeNode *> stackNode;
    treeNode *current=root;
   while(nullptr!=current||!stackNode.empty())
  {
      while(nullptr!=current)
     { 
       stackNode.push(current);
       cout<<current->value<<",";
      if(nullptr!=current->lchild) 
         current=current->lchild;
      else break;
   }
     current=stackNode.top()->rchild;
     stackNode.pop();
}   

}
// left-root-right


void binaryTreeTraversal::inOrder()
{ 
    stack<treeNode *>stackNode;
    treeNode *current=root;
    
    while(nullptr!=current||!stackNode.empty())
   {
       while(nullptr!=current)
       {
         stackNode.push(current);
       if(nullptr!=current->lchild)
          current=current->lchild;
       else break;
      } 
      cout<<stackNode.top()->value<<",";
      current=stackNode.top()->rchild;
      stackNode.pop();   
    }
}
 

// left-right-root


void binaryTreeTravelsal::postOrder()
{
     stack<treeNode *> stackNode;
     treeNode* current=root;
     while(nullptr!=current||!stackNode.empty())
     {
        while(nullptr!=current)
        {
            stackNode.push(current);
            current=current->lchild;
}
   treeNode * temp=stackNode.top();
       if(temp->isFirst)
       {
        temp->isFirst=false;
        current=temp->rchild;
        
     }
       else {
        cout<<temp->value<<",";
        stackNode.pop();
}
}
}
//left-right-root
void binaryTreeTravelsal::psotOrder2()
{
     stack<treeNode *> stackNode;
     treeNode *pre=nullptr;
     stackNode.push(root);
     while(!stackNode.empty()) 
     {
       cur=stackNode.top();
      if((nullptr==cur->lchild&&nullptr==cur->rchild)||(nullptr!=pre&&(pre==cur->lchild||pre==cur->rchild)))
      {
           cout<<cur->value<<" ";
           stackNode.pop();
           pre=cur;
}
      else
{
         if(nullptr!=cur->rchild)
           stackNode(cur->rchild);
         if(nullptr!=cur->lchild)
            stackNode(cur->lchild);
}
}
   }

