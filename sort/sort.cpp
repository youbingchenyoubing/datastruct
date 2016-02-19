#include<iostream>
#include"sort.h"

sort::sort(int sortnum[],int length)
{
    using std::cout;
    using std::endl;
   if(length<=0)
    cout<<"the object of sort can't be constructed because length of data is less than zero "<<endl;
   else {
   numsize=length;
   sortdata=new int[numsize];
   for(int i=0;i<numsize;i++)
   {
     sortdata[i]=sortnum[i];
}
   cout<<"the object of sort is constructed"<<endl;
} 
}


void sort::printNum()
{
  using std::cout;
  using std::endl;
  for(int i=0;i<numsize;i++)
  {
    cout<<i+1<<":"<<sortdata[i]<<(i==numsize?"\n":",");
}
  cout<<endl;
}


