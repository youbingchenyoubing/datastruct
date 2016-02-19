#include "simpleselectionsort2.h"

simpleselectionsort2::simpleselectionsort2(int data[],int length):sort(data,length)
{

   for(int i=0;i<=length/2;++i)
  {

     int j=i+1;
     int max=i;
     int min=i;
    for(;j<length-i;++j)
    {
       if(returndata()[j]<returndata()[min]) {min=j; continue;}
       if(returndata()[j]>returndata()[max]) max=j;
}
   int temp;
   if(min!=i) {
    temp=returndata()[i];
    returndata()[i]=returndata()[min];
    returndata()[min]=temp;
    
}
   if(max!=(length-i-1))
   {
    temp=returndata()[length-i-1];
    returndata()[length-i-1]=returndata()[max];
    returndata()[max]=temp;
}
}
}
