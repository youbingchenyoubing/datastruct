#ifndef _SHELLSORT_H
#define _SHELLSORT_H


#include"sort.h"


class shellsort:public sort
{
public:
   shellsort(int data[],int length);
  void  shellinsert();
private:
    int dk;
};

#endif
