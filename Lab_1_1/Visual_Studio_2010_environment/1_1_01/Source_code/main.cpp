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
/*���z�]�����v���ڡG
  *************************************************************************
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


    return 0;  // indicates successful termination
}
