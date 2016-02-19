#include "mergesort.h"

mergesort::mergesort(int data[],int length):sort(data,length)

{
  temp=nullptr;
  temp=new int(length);
  beginsort(0,length-1);
  //exchange(length);
  if(temp) delete [] temp;
}


void mergesort::beginsort(int low,int high)
{

    if(low==high) return;
   else
{  
  int middle=(low+high)/2;
   beginsort(low,middle);
   beginsort(middle+1,high);
   merge(low,middle,high);
  
}
}
void mergesort::merge(int low,int middle,int high)
{
  //temp=nullptr;
  //temp=new int(high-low+1);
  int array1=low;
  int array2=middle+1;
  int tempIndex=low;
 while(array1<=middle&&array2<=high)
 {
   if(returndata()[array1]<=returndata()[array2]) 
     temp[tempIndex++]=returndata()[array1++];
   else temp[tempIndex++]=returndata()[array2++];
  
}

  while(array1<=middle) 
     temp[tempIndex++]=returndata()[array1++];

  while(array2<=high)
     temp[tempIndex++]=returndata()[array2++];
   for(int i=low;i<=high;++i)
     returndata()[i]=temp[i];
}


void mergesort::exchange(int length)
{
    for(int i=0;i<length;++i)
    returndata()[i]=temp[i];


   if(temp) delete [] temp;
     
}


mergesort::~mergesort(){
}
