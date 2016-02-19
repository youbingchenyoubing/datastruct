#include "shellsort.h"

int main()
{
   int data[10]={49,38,65,97,76,13,27,49,59,4};
   shellsort shell(data,10);
   shell.printNum();
}
