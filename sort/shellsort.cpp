#include "shellsort.h"
#include <iostream>
shellsort::shellsort(int data[],int length):sort(data,length)
{
   dk=length/2;
   while(dk>=1)
   {
     shellinsert();
    dk/=2;
}
}

void shellsort::shellinsert()
{
    int number=returnsize();
    for(int i=dk;i<number;i++)
    {
     int usedata=returndata()[i];
     int j=i-dk;
     for(;j>=0;j-=dk)
     {
       if(usedata>=returndata()[j])
             break;
      else returndata()[j+dk]=returndata()[j];
}
     returndata()[j+dk]=usedata;
}
}
