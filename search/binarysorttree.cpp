#include "binarysorttree.h"
#include<iostream>
  treeNode * binarysorttree:: find_data_in_tree_node(const treeNode * pTreeNode,int data) 
    {
        if(nullptr==pTreeNode)
                 return nullptr;
       else if(data==pTreeNode->value)
                  return pTreeNode;
       else if(data<pTreeNode->value)
             return find_data_in_tree_node(pTreeNode->leftchild,data)
       else return find_data_in_tree_node(pTreeNode->rightchild,data)
      
 	
		
}
treeNode * binarysorttree::bulidNode(const int &data)
{
     treeNode *pTreeNode=nullptr;
     pTreeNode=new treeNode(data);
     return pTreeNode;
}


int binarysorttree::count_node_number_in_tree(const treeNode *pTreeNode)
{
   if(nullptr==pTreeNode)
    return 0;
   return 1+count_node_number_in_tree(pTreeNode->leftchild)+count_node_number_in_tree(pTreeNode->rightchild);
}

int binarysorttree::print_all_node_data(const treeNode* pTreeNode)
{
   
    if(pTreeNode)
    {
      print_all_node_data(pTreeNode->leftchild);
      using std::cout;
     cout<<pTreeNode->value<<"\t";
     print_all_node_data(pTreeNode->rightchild);   
}
}
int count_tree_height(const treeNode *pTreeNode)
{
    int ldeepth,rdeepth;
   if(nullptr==pTreeNode) return 0;
   ldeepth=count_tree_height(pTreeNode->lchild);
   rdeepth=count_tree_height(pTreeNode->rchild);
   return (ldeepth>rdeepth)? (ldeepth+1):(rdeepth+1);   
}
bool binarysorttree::insert_node()
{} 
