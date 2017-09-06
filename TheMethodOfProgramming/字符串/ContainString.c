//
//  ContainString.c
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzb. All rights reserved.
//

#include "ContainString.h"
#include <string.h>

#pragma mark - Method 1. 逐一比较法 - 时间复杂：O(n * m)
void containString(char* a,char* b)
{
    int aLength = (int)strlen(a);
    int bLength = (int)strlen(b);
    
    for (int i = 0; i < bLength; ++i) {
        int j;
        for (j = 0; (j < aLength) && (a[j] != b[i]); ++j)
        if (j >= aLength)
        {
            printf("A 中字母不包含 B 中字母\n");
            return;
        }
    }

   printf("A 中字母包含 B 中字母\n");
}
#pragma mark - Method 2. 先哈希排序，再比较 - “最好的方法”，时间复杂度O(n + m)，空间复杂度O(1)
//注意A B中可能包含重复字符，所以注意A下标不要轻易移动。这种方法改变了字符串。如不想改变请自己复制
void firstHashSortContainString(char* a,char* b)
{
    int aLength = (int)strlen(a);
    int bLength = (int)strlen(b);

    int hash = 0;
    for (int i = 0; i < aLength; ++i)
    {
        hash |= (1 << (a[i] - 'A'));
    }
    for (int i = 0; i < bLength; ++i)
    {
        if ((hash & (1 << (b[i] - 'A'))) == 0)
        {
            printf("A 中字母不包含 B 中字母\n");
            return;
        }
    }
    printf("A 中字母包含 B 中字母\n");
}
