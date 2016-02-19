#include "quicksort.h"


int main()

{
   int data[10]={49,38,65,97,76,13,27,49,59,4};   
   quicksort qsort(data,10);
   qsort.improvsort(0,9,3);
   qsort.printNum();
   return 0;
}
