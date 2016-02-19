#ifndef _BUFFLESORT_H
#define _BUFFLESORT_H

#include "sort.h"
class bubblesort:public sort
{

    public:
    bubblesort(int data[],int length);
    void simplebubblesort();
    void bubblesortwithflag();
    void diffcultbubblesort();
    void bubblesortpos();
};
#endif
