//
//  main.c
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzhangbao. All rights reserved.
//

#include <stdio.h>

#include "RotateString.h"
#include "ContainString.h"

void testString()
{
//    char s[10] = "abcdef";
//        leftRotateString(s, 7);
//    threeStepRotateString(s, 2);
    
    char A[10] = "abcdbac";
    char B[3] = "acc";
//    containString(A, B);
    firstHashSortContainString(A, B);
    
    
}

int main(int argc, const char * argv[])
{
    // insert code here...
    
//    testString();
     
    return 0;
}

