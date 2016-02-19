#include<iostream>
#include "straight_insertion_sort.h" 

straightinsertionsort::straightinsertionsort(int data[],int length):sort(data,length)
{
    int usedata;
    int datasize=returnsize();
    for(int i=1;i<datasize;i++)
    {

      usedata=returndata()[i];
      int j=i-1;
      for(;j>=0;j--)
      {
        if(usedata>=returndata()[j])
            break;
        else returndata()[j+1]=returndata()[j];
} 
          returndata()[j+1]=usedata;
}
}
