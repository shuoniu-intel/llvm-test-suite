//===--- local-array.c --- Test Cases for Bit Accurate Types --------------===//
//
// This file was developed by Guoling han and donated to the LLVM research
// group and is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//===----------------------------------------------------------------------===//
//
// This is another test for local arrays.
//
//===----------------------------------------------------------------------===//
#include <stdio.h>

typedef int __attribute__ ((bitwidth(4))) int4;
typedef int __attribute__ ((bitwidth(6))) int6;

int4 test(int6 X) {
  int4 student_t[32]={0 , 12 , 4 , 3 , 2 , 2 ,
                               2 , 2 , 2 , 2 , 2 ,
                               2 , 2 , 2 , 2 , 2 ,
                               2 , 2 , 2 , 2 , 2 ,
                               2 , 2 , 2 , 2 , 2 ,
                               2 , 2 , 2 , 2,  3, 4 };
  return student_t[X];
}


int main()
{
    int4 result = test(31);
    if(result != 4)
        printf("error: return = %d\n", result);

    return 0;
}