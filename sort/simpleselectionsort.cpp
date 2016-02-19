#include"simpleselectionsort.h"
simpleselectionsort::simpleselectionsort(int data[],int length):sort(data,length)
{

    for(int i=0;i<length-1;++i)
    {
        int flag=i;
      for(int j=i+1;j<length;++j)
         if(returndata()[j]<returndata()[flag]) flag=j;
      
     int usedata=returndata()[i];
     returndata()[i]=returndata()[flag];
     returndata()[flag]=usedata;
}
}


