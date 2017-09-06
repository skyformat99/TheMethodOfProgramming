//
//  main.c
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzhangbao. All rights reserved.
//

#include <stdio.h>

void testString()
{
    char s[10] = "abcdef";
    //    LeftRotateString(s, 6, 7);
    threeStepRotateString(s, 6, 2);
}

int main(int argc, const char * argv[])
{
    // insert code here...
    
    testString();
    
    return 0;
}

