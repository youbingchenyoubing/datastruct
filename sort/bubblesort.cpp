#include "bubblesort.h"
bubblesort::bubblesort(int data[],int length):sort(data,length)
{}
void bubblesort::simplebubblesort()
{
    int length=returnsize();
    for(int i=0;i<length-1;++i)
    for(int j=0;j<length-1-i;++j)
     if(returndata()[j+1]<returndata()[j])
      {
            int temp=returndata()[j];
            returndata()[j]=returndata()[j+1];
            returndata()[j+1]=temp;
}
}


void bubblesort::bubblesortwithflag()
{

   int length=returnsize();
   bool flag=true;
   for(int i=0;i<length-1;++i)
    {
     for(int j=0;j<length-1-i;++j)
    
      if(returndata()[j+1]<returndata()[j])
     {
       flag=false;
      int temp= returndata()[j+1];
      returndata()[j+1]=returndata()[j];
      returndata()[j]=temp;
}
     if(flag) break;
}
}

void bubblesort::diffcultbubblesort()
{

   int length=returnsize();
   int high=length-1;
   int low=0;
   int temp;
  while(low<high)
  {
    for(int j=low;j<high;++j)
   {
      if(returndata()[j]>returndata()[j+1])
      {temp=returndata()[j]; returndata()[j]=returndata()[j+1]; returndata()[j+1]=temp; }
      
}
   --high;
  for(int j=high;j>low;--j)
   if(returndata()[j]<returndata()[j-1])
   {temp=returndata()[j];returndata()[j]=returndata()[j-1];returndata()[j-1]=temp;}
 ++low;
}
}

void bubblesort::bubblesortpos()
{
    int length=returnsize();
    int i=length-1;
   while(i>0)
   {
    int pos=0;
    for(int j=0;j<i;++j)
    {
      if(returndata()[j]>returndata()[j+1])
         { pos=j;
int temp=returndata()[j];returndata()[j]=returndata()[j+1];returndata()[j+1]=temp;}
}
  i=pos;
}
}

