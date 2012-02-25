/*�ƧǺt��k
-----------------------------------
�{���ج[����(program framework version)�GA
�{���ج[�׭q��(program framework revision number)�G201109251624
��s����(changelog)�G
  Changelog is now stored on github
�w�����D(known issues)�G
  Known issues is now stored on github
�ݿ�ƶ�(todo)�G
  Todo is now stored on github
���z�]�����v���ڡG
*//* Copyright (C) 2012 �L�դ�(Henry Lin)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation version 2.1
 * of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*�зǿ�J����X�禡�w(standard input/output library)
  �����G1.12(4)
  for printf(), scanf(), fgetc()...etc*/
#include <stdio.h>
/*or in C++*/
/*#include <cstdio>*/

/*C Standard General Utilities Library
  �����G1.01(8)*/
#include <stdlib.h>
/*or in C++*/
/*#include <cstdlib>*/

/* swap algorithm header file
 * �����G1.00(0)
 */
#ifdef __cplusplus
extern "C"{
#endif
  #include "Swap_algorithm.h"
#ifdef __cplusplus
}
#endif

/*maxHeapify function prototype*/
void maxHeapify(int data[], unsigned array_size, unsigned current_index);

/*Insertion sort�]���J���ƧǺt��k�^�禡
  �����G1.02(12)
  �ǤJ�ȡGarray��ư}�C�Barray_size�}�C�j�p
  �Ǧ^�ȡG�L
  */
void insertionSort(int array[], unsigned array_size)
{
  /*�ŧi�P�w�q(Declaration & Definition)*/
  /*--�禡����(function prototype)--*/

  /*--�����ܼ�--*/
  /*��e�n���J������*/
  int current_insert_element;

  /*�СССССССССССССССССССС�*/
  {
    int final_insert_index;

    /*�B�z�ǦC���ĤG�Ӫ����̫�@�Ӫ��󪺰j��C������
     * �j���ܧǦC�w�g�����ƧǡC*/
    int i;
    for(i = 1; i < array_size; i++){
      /*�Τ@���ܼ�current_insert_element�ƥ��ثe�B�z�����󪺭ȡC*/
      current_insert_element = array[i];

      /*�Τ@���ܼ�final_insert_index�����̫�n���J�ثe�B
       * �z������index�]���ޡ^*/
      final_insert_index = i;

      /*�qi��0�M�䴡�J����m�]����{�b�n���J��������e�����������j�p�^*/
      while(final_insert_index != 0 &&
              array[final_insert_index - 1] >
              current_insert_element){
        /*�N�e������������᭱*/
        array[final_insert_index] = array[final_insert_index - 1];
        /*�P�_��e��������*/
        final_insert_index--;
      }

      /*���J�{�b�n���J������*/
      array[final_insert_index] = current_insert_element;

    }
  }
  /*�СССССССССССССССССССС�*/
  /*�Ǧ^���e*/
  return ;
}

/*bubble sort�禡
�ǤJ�ѼơG�@��int�}�Cdata�B�@��const unsigned��data
        �}�C�j�p�B�@�ӫ��V���ѱƧǶ��ǧP�_���禡������
�Ǧ^�ȡG�L*/
void bubbleSort(int data[],
                  const unsigned array_size,
                  int (*sortOrderBool)(int a,
                                        int b))
    {
        /*����bubble sort���W���Ǥ������禡*/
        int sortAscendingly(int a, int b);

        /*����bubble sort����Ǥ������禡*/
        int sortDescendingly(int a, int b);

        /*���ƭp�ƾ�*/
        unsigned times;
        unsigned compare;

        /*�q�̫�@�ӼƳQ�O�ұƧǥ��T�ܲĤG�ӼƳQ�O�ұƧǥ��T*/
        for(times = array_size - 1; times >= 1; times--){
            /*�q�Ĥ@�ӼƦ�times���e�@�Ӽƨ�compare�Pcompare+1�}�l�P�_*/
            for(compare = 0; compare <= times - 1; compare++){
                /*�p�Gcompare�j��compare+1�N����*/
                 if((*sortOrderBool)(data[compare], data[compare + 1])){
                    swapInt(&data[compare], &data[compare + 1]);
                 }
            }
        }
        return;
    }

/*����bubble sort���W���Ǥ������禡*/
int sortAscendingly(int a, int b)
    {
        /*�p�Ga�p��b�h�����*/
        return (a < b)? 0 : 1;
    }

/*����bubble sort����Ǥ������禡*/
int sortDescendingly(int a, int b)
    {
        /*�p�Ga�j��b�h�����*/
        return (a > b)? 0 : 1;
    }

/*�X�֦����ƧǺt��k
 * �����G1.00(0)201110052034
 * �ǤJ�ȡG
 *  array
 *  start_index
 *  end_index�G�̫�@�Ӧs�b��index value
 * �Ǧ^�ȡG
 *  0 -> ���\
 *  -1 ->�i�ΰO���餣��
 */
void mergeSort(int array[],
          unsigned start_index,
         unsigned end_index)
{
   int mergeAndSort(int subArray[], unsigned start_index,
         unsigned half_index, unsigned end_index);
      if(end_index > start_index){
        unsigned half_index = (start_index + end_index) / 2;

        /* split array in half and sort each half recursively */
        mergeSort( array, start_index, half_index ); /* first half */
        mergeSort( array, half_index + 1, end_index ); /* second half */
        mergeAndSort( array, start_index, half_index, end_index);
      }

}
/*�X�֨ñƧǤl�}�C���禡*/
int mergeAndSort(int subArray[], unsigned start_index,
      unsigned half_index, unsigned end_index)
{
  /*�N��l�}�C��ƽƻs��O����*/
  unsigned sizeA = half_index - start_index + 1,
            sizeB = end_index - half_index;

  int *memPtrA = (int *) malloc(sizeof(int) * sizeA);

  if(memPtrA != NULL){
  }else{
    printf("���ѡI�нT�w�i�ΰO����O�_�����C\n");
    return -1;
  }

  {
  unsigned i;
  for(i = 0; i < sizeA; i++){
    memPtrA[i] = subArray[start_index + i];
  }

  }

  int *memPtrB = (int *) malloc(sizeof(int) * sizeB);

  if(memPtrB != NULL){
  }else{
    printf("���ѡI�нT�w�i�ΰO����O�_�����C\n");
    return -1;
  }

  {
  unsigned i;
  for(i = 0; i < sizeB; i++){
    memPtrB[i] = subArray[half_index + 1 + i];
  }
  }

  {
  unsigned i;
  unsigned j = 0, k = 0;
  for(i = start_index; i <= end_index; i++){
    if(j != sizeA && k != sizeB){
      if(memPtrA[j] <= memPtrB[k]){
        subArray[i] = memPtrA[j];
        j++;
      }else{
        subArray[i] = memPtrB[k];
        k++;
      }
    }else{
      if(j == sizeA){
        subArray[i] = memPtrB[k];
        k++;
      }else{
        subArray[i] = memPtrA[j];
        j++;
      }
    }
  }
  }

  /*�����e�M�z*/
  free(memPtrA);
  free(memPtrB);

  return 0;
}


/*maxHeapify�禡
  �����G0.00(0)*/
void maxHeapify(int data[], unsigned array_size, unsigned current_index)
    {
    /*�ŧi�P�w�q(Declaration & Definition)*/
    /*--�禡����(function prototype)--*/

    /*--�����ܼ�--*/
    /*current largest node*/
    unsigned largest_index = current_index;

    /*the child index of current node may be*/
    unsigned left_child_index = current_index * 2,
            right_child_index = current_index * 2 + 1;
    /*�СССССССССССССССССССС�*/
    /*if left child exist and greater than current node*/
    if(left_child_index <= array_size - 1 &&
       data[left_child_index] > data[current_index]){
       largest_index = left_child_index;
    }

    /*if right child exist and greater than current node*/
    if(right_child_index <= array_size - 1 &&
       data[right_child_index] > data[current_index]){
       largest_index = right_child_index;
    }

    /*if largest node isn't current node then swap with the largest
      then maxheapify it's child*/
    if(largest_index != current_index){
      swapInt(&data[current_index], &data[largest_index]);
      maxHeapify(data, array_size, largest_index);
    }

    /*�СССССССССССССССССССС�*/
    /*�Ǧ^���e*/
    return ;
    }
