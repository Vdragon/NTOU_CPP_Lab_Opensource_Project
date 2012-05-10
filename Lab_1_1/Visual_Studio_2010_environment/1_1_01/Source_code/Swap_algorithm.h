#ifndef INCLUDED_SWAP_ALGORITHM_H
  #define INCLUDED_SWAP_ALGORITHM_H
  /*�ϥ�C����ƽեξ���Mnamespace�B�z�W�h�A�ӫDC++��Name Mangling*/
  #ifdef __cplusplus
  extern "C"{
  #endif
    /*swap�禡 func. prototype*/
        void swapInt(int * swap_a, int * swap_b);

    /*func. prototype for swap func.(unsigned��ƱM�Ϊ���)*/
        void swapUnsignedInt(unsigned int * swap_a, unsigned int * swap_b);

    /*func. prototype of swapLongInt*/
        void swapLongInt(long int * a,long int * b);

    /*func. prototype for Swap(�L�t�u��ƱM�Ϊ���)*/
        void swapUnsignedShortInt(unsigned short int * swap_a, unsigned short int * swap_b);

    /*swapDouble func. prototype*/
        void swapDouble(double * a,double * b);
  #ifdef __cplusplus
  }
  #endif
#endif

