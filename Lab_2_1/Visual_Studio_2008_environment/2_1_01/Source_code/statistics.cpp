﻿/**************************************************************************
 * (C) Copyright 1992-2007 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
/*#include <stdio.h>*/
#include <assert.h>
#include "io.h"
#include "sort.h"
#include <iostream>

using namespace std;

// calculate average of all values
void mean(const int dataArray[], int arraySize)
{
    double total = 0.0;

    cout << "********\n  Mean\n********\n";

    // total response values
    for (int i = 0; i < arraySize ; i++)
        total += dataArray[i];

    // format and output results
    cout << "The mean is the average value of the data\n"
         << "items. The mean is equal to the total of\n"
         << "all the data items divided by the number\n"
         << "of data items ( " << arraySize << " ). The mean value for\n"
         << "this run is: " << total << " / " << arraySize <<
            " = " << total / arraySize <<"\n\n";
}

// sort array and determine median element's value
void median(int dataArray[], int arraySize)
{
    cout << "\n********\n Median\n********\nThe unsorted array of data is";

    printArray(dataArray, arraySize);  // output unsorted array

    sort(dataArray, arraySize);  // sort array of data

    cout << "\n\nThe sorted array is";
    printArray(dataArray, arraySize);  // output sorted array

    // display median element
    /*不實作：求出 median 值時是否有一半以上的資料大於等於它, 有一半以下的資料小於等於它*/
    cout << "\n\nThe median is the " << arraySize/2 << "-th element of\nthe sorted "
         << arraySize << " element array.\nFor this run the median is " << dataArray[arraySize / 2]
         << "\n\n";
}


// determine most frequent data value
/*freq陣列：*/
void mode(int freq[], int dataArray[], int arraySize)
{
    int j, k;
    int rating;
    int largest = 0;    // represents largest frequency
    int modeValue = 0;  // represents most frequent response

    /*checkFrequency()：檢查frequency陣列的和 == arraySize的函式
        傳回數值：
          0→正常
          -1→異常*/
    short checkFrequency(int freq[], unsigned arraySize);

    cout << "\n********\n  Mode\n********\n";

    // calculate the occuring frequency of data
    /* 將frequency陣列初始化為0 */
    for ( rating = 1; rating <= 9; rating++ ) {
      freq[ rating ] = 0;
    } /* end for */

    /* 總結frequency陣列 */
    for ( j = 0; j < arraySize; j++ ) {
      ++freq[ dataArray[ j ]];
    } /* end for */

    /*假設總結完freq[1~9]的和 == arraySize*/
    assert(checkFrequency(freq, arraySize) == 0);

    // output headers for result columns
    cout << "Data  Frequency       Histogram\n"
         << "                                1    1    2    2\n"
         << "                           5    0    5    0    5\n\n";

    // output results
    for (rating = 1; rating <= 9; rating++) {
        cout.width(4);
        cout << rating;
        cout.width(10);
        cout << freq[rating] << "         ";

        // keep track of mode value and largest fequency value
        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

        // output histogram bar representing frequency value
        for (k = 1; k <= freq[rating]; k++)
            cout << '*';
        cout << endl;
    }

    // display the mode value
    cout << "The mode is the most frequent value.\n"
         << "For this run the mode is "<< modeValue << " which "
         << "occurred " << largest <<" times.\n";
}

short checkFrequency(int freq[], unsigned arraySize)
{
  unsigned i, sum = 0;

  for(i = 1; i <= 9; ++i){
    sum += freq[i];
  }

  if(sum != arraySize){
    return -1;
  }
  return 0;
}