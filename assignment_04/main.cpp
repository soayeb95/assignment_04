#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
using namespace std;

int main()
{
    BubbleSort  bs;
    int arr[]={10,33,27,14,35,19,48,44};
    int length= sizeof(arr)/sizeof(arr[0]);
  // bs.BubbleSorter(arr,length);
    cout<<endl<<endl;

    SelectionSort ss;
  // ss.SelectionSorter(arr,length);
    InsertionSort is;
   // is.InsertionSorter(arr,length);

    MergeSort ms;
    ms.MergeSorter(arr,length);

}
