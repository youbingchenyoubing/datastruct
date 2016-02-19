#include "heapsort.h"

#include<iostream>


heapsort::heapsort(int data[],int length):sort(data,length)
{
      BulidingHeap(length);
    for(int i=length-1;i>0;--i)
    {
         int temp=returndata()[i]; 
         returndata()[i]=returndata()[0];
         returndata()[0]=temp;
         HeapAdjust(0,i);
      }
}
void heapsort:: HeapAdjust(int adjustIndex,int length)
{
   int temp=returndata()[adjustIndex];
   int child=2*adjustIndex+1;  //left child position
   while(child<length){
      if(child+1<length&&returndata()[child]<returndata()[child+1]) //left child value bigger than right child
                 ++child;
      if(returndata()[child]>returndata()[adjustIndex]){
                     returndata()[adjustIndex]=returndata()[child];
                     adjustIndex=child;
                     child=2*adjustIndex+1;
                       }
           else break;
         returndata()[adjustIndex]=temp;
           }    
}

void heapsort::BulidingHeap(int length)
{

    for(int i=(length-1)/2;i>=0;--i)
       HeapAdjust(i,length);
}
