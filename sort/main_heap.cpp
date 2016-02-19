#include "heapsort.h"


int main()

{
   int data[10]={49,38,65,97,76,13,27,49,59,4};   
   heapsort heap(data,10);
   heap.printNum();
   return 0;
}
