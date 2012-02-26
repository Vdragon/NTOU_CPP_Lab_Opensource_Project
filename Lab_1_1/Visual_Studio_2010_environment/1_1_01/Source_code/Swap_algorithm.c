/* swap�t��k
 * -----------------------------------
 * �{���ج[����(program framework version)�GA
 * �{���ج[�׭q��(program framework revision number)�G201109251624
 * ��s����(changelog)�G
 *  Changelog is now stored on github
 * �w�����D(known issues)�G
 *  Known issues is now stored on github
 * �ݿ�ƶ�(todo)�G
 *  Todo is now stored on github
 * ���z�]�����v���ڡG
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

/*swap�禡(��ƱM�Ϊ���)
  �����G1.01(2)
  �ǤJ�ȡG���V�nswap����Ӿ���ܼƪ�����
  �Ǧ^�ȡG�L*/
void swapInt(int * swap_a, int * swap_b)
	{
		/*�ŧi�P�w�q(declaration & definition)*/
        int buffer;/*�ȮɫO�s�ƭȪ��ܼ�*/

		/*�СССССССССССССССССССС�*/
        /*swap*/
            buffer = *swap_a;/*backup a*/
            *swap_a = *swap_b;/*assign a with *b*/
            *swap_b = buffer;/*assign *b with backuped *a*/
		/*�СССССССССССССССССССС�*/
		return;
	}

/*swap func.(unsigned��ƱM�Ϊ���)
  �����G1.00(0)*/
void swap_unsigned_int(unsigned int * swap_a, unsigned int * swap_b)
	{
        /*�ŧi�P�w�q(Declaration & Definition)*/
        /*mem*/
            unsigned int buffer;

        /*�СССССССССССССССССССС�*/
        /*swap*/
        /*backup a*/
            buffer = *swap_a;
        /*assign a with *b*/
            *swap_a = *swap_b;
        /*assign *b with backuped a*/
            *swap_b = buffer;
        /*�СССССССССССССССССССС�*/
        return;
	}

/*swapLongInt func.(����ƱM�Ϊ���)
  �����G1.01(1)*/
void swapLongInt(long int * a,long int * b)
	{
		/*�ŧi�P�w�q(Declaration & Definition)*/
        /*mem*/
            long int mem;

		/*�СССССССССССССССССССС�*/
        /*swap*/
            /*backup a*/
                mem = *a;
            /*assign a with *b*/
                *a = *b;
            /*assign *b with backuped a*/
                *b = mem;
		/*�СССССССССССССССССССС�*/
		return;
	}

/*Swap(�L�t�u��ƱM�Ϊ���)
  �����G1.01(1)*/
void swapUnsignedShortInt(unsigned short int * swap_a, unsigned short int * swap_b)
	{
		/*�ŧi�P�w�q(Declaration & Definition)*/
        /*mem*/
            unsigned short int buffer;

		/*�СССССССССССССССССССС�*/
        /*swap*/
            /*backup a*/
                buffer = *swap_a;
            /*assign a with *b*/
                *swap_a = *swap_b;
            /*assign *b with backuped a*/
                *swap_b = buffer;
		/*�СССССССССССССССССССС�*/
		return;
	}

/*swap func.(����T�ׯB�I�Ƴq�Ϊ���)
  �����G1.01(2)*/
void swapDouble(double * a,double * b)
	{
		/*�ŧi�P�w�q(Declaration & Definition)*/
        /*mem*/
            double mem;

		/*�СССССССССССССССССССС�*/
        /*swap*/
            /*backup a*/
                mem = *a;
            /*assign a with *b*/
                *a = *b;
            /*assign *b with backuped a*/
                *b = mem;
		/*�СССССССССССССССССССС�*/
		return;
	}
