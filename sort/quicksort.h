#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include "sort.h"
class quicksort:public sort
{

    public:
     quicksort(int data[],int length);
     void ordinarysort(int low,int high);
     void improvsort(int low,int high,int k);
private:
     void qsort_improve(int low,int high,int k);
     void swap(int index1,int index2);
     int partition(int low,int high);
     int randIndex(int low,int high);
};
#endif
