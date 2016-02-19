#include "bubblesort.h"

#include<iostream>
int main()

{
   using std::cout;
   int data[10]={49,38,65,97,76,13,27,49,59,4};   
   cout<<"simple sort\n";
   bubblesort bubble1(data,10);
   bubble1.simplebubblesort();
   bubble1.printNum();
   cout<<"bubble sort with flag\n";
   bubblesort bubble2(data,10);
   bubble2.bubblesortwithflag();
   bubble2.printNum();
   cout<<"bubble sort diffcult\n" ;
   bubblesort bubble3(data,10);
   bubble3.diffcultbubblesort();
   bubble3.printNum();
   cout<<"bubble sort with position\n";
   bubblesort bubble4(data,10);
   bubble4.bubblesortpos();
   bubble4.printNum();
   return 0;
}
