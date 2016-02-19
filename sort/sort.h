#ifndef _SORT_H
#define _SORT_H
#include<iostream>
class sort
{
  public:
   sort(int sortnum[],int length);
   ~sort()
{ 
delete [] sortdata;
  }
   void printNum();
   int *returndata()
   {
     return sortdata;
}

   int returnsize()
   {  
return numsize;
    }
   private:
    int *sortdata;
    int numsize;
};

#endif
