#include "mergesort.h"


int main()

{
   int data[10]={49,38,65,97,76,13,27,49,59,4};   
   mergesort mSort(data,10);
   mSort.printNum();
   return 0;
}
