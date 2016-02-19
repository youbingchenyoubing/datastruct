#ifndef _MERGESORT_H
#define _MERGESORT_H
#include "sort.h"
class mergesort:public sort
{
   public:
    mergesort(int data[],int length);
   ~mergesort();
  private:
     void beginsort(int low,int high);
     void merge(int low,int middle,int high);
     void exchange(int length);
     int *temp;
};
#endif
