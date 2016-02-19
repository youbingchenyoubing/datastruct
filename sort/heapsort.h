#ifndef _HEAPSORT_H
#define _HEAPSORT_H
#include "sort.h"

class heapsort:public sort
{

   public:
   heapsort(int data[],int length);
private:
    void HeapAdjust(int adjustIndex,int length);
    void BulidingHeap(int length);
};

#endif

