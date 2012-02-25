/*main.cpp
-----------------------------------
�{���ج[����(program framework version)�GA
�{���ج[�׭q��(program framework revision number)�G201109251624
��s����(changelog)�G
  Changelog is now stored on github.
�w�����D(known issues)�G
  Known issues is now stored on github.
�ݿ�ƶ�(Todo)�G
  Todo is now stored on github.
*/

/*--------------�{���X�}�l(Code Started)--------------*/
/*--------------�e���B�z�����O(Preprocessor Directive)--------------*/
/*////////���ҳ]�w(Environment Settings)////////*/
/*�O�_��ܰ����ƾڡ]�����_�^�H*/
/*#define SHOW_DEBUG_MESSAGE*/

/*�sĶ�ݢ�����G
Windows console = 0, Linux console = 1, Symbian console = 2, PSP console = 3*/
#define SYSTEM_CATEGORY 0

#define DEBUG

/*////////�{����include�����Y��(Included Headers)////////*/
#include <stdio.h>
#include <stdlib.h>

#include "io.h"
#include "statistics.h"
/*////////�`�ƻP����(Constants & Macros)�H�Ψ�L#define���O////////*/

#define DATASIZE 150
/*////////��L�e���B�z�����O(Other Preprocessor Directives////////*/

/*--------------����ŧi�P�w�q(Global Declaration & Definition)--------------*/
/*////////��Ƶ��c(Structures)�Btypedefs��enumerations////////*/

/*////////�禡����(Function Prototypes)////////*/

/*////////�����ܼ�(Global Variables)////////*/

/*--------------�D�n�{���X(Main Code)--------------*/

// This program is supposed to compute the mean, median and mode
// of the data. In addition, this program print out the sorted
// data according to the computed statistics

int main()
{
    int dataSize;
    int frequency[10] = {0};
    int data[DATASIZE];


    /*���շ�e���u�@�ؿ�����H*/
    #ifdef SHOW_DEBUG_MESSAGE
    printf("\n====�����θ�T======\n");
    printf("�ثe���u�@�ؿ����G\n");
    if(SYSTEM_CATEGORY == 0){
        system("dir");
    }
    else{
        system("ls -l");
    }
    printf("\n==================\n"
           "�Ы�Enter���~��...");
    getchar();
    #endif

    // reading file
    readFile(&dataSize, data);


    // process responses
    mean(data, dataSize);
    median(data, dataSize);
    mode(frequency, data, dataSize);

    return 0;  // indicates successful terminhttps://docs.google.com/?tab=Xo&authuser=0#homeation
}





// determine most frequent data value
/*freq�}�C�G*/
void mode(int freq[], int dataArray[], int arraySize)
{
    int /*i,*/ j, k;
    int rating;
    int largest = 0;    // represents largest frequency
    int modeValue = 0;  // represents most frequent response

    printf("\n********\n  Mode\n********\n");

    // calculate the occuring frequency of data
    /* �Nfrequency�}�C��l�Ƭ�0 */
    for ( rating = 1; rating <= 9; rating++ ) {
      freq[ rating ] = 0;
    } /* end for */

    /* �`��frequency�}�C */
    for ( j = 0; j < arraySize; j++ ) {
      ++freq[ dataArray[ j ]];
    } /* end for */

    // output headers for result columns
    printf("Data  Frequency       Histogram\n"
           "                                1    1    2    2\n"
           "                           5    0    5    0    5\n\n");

    // output results
    for (rating = 1; rating <= 9; rating++) {
        printf("%4d%10d         ", rating, freq[rating]);

        // keep track of mode value and largest fequency value
        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

        // output histogram bar representing frequency value
        for (k = 1; k <= freq[rating]; k++)
            printf("*");
        printf("\n");
    }

    // display the mode value
    printf("The mode is the most frequent value.\n"
           "For this run the mode is %d which "
           "occurred %d times.\n", modeValue, largest);
}

