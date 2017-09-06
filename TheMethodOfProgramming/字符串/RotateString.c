//
//  RotateString.c
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzb. All rights reserved.
//

#include "RotateString.h"

/**
 *  Method 1. 暴力移位法 - 时间复杂度为O(m n)，空间复杂度为O(1)
 */
void leftShiftOne(char* s, int n)
{
    char t = s[0];  //保存第一个字符
    for (int i = 1; i < n; i++)
    {
        s[i - 1] = s[i];
    }
    s[n - 1] = t;
}

void leftRotateString(char* s, int n, int m)
{
    m %= n;               //若要左移动大于n位，那么和%n 是等价的
    while (m--)
    {
        leftShiftOne(s, n);
    }
    
    printf("1. 暴力移位法：%s\n", s);
}

/**
 *  Method 2. 三步反转法 - 时间复杂度为O(n)，空间复杂度为O(1)
 */
void reverseString(char* s,int from,int to)
{
    while (from < to)
    {
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

void threeStepRotateString(char* s,int n,int m)
{
    m %= n;               //若要左移动大于n位，那么和%n 是等价的
    reverseString(s, 0, m - 1); //反转[0..m - 1]，套用到上面举的例子中，就是X->X^T，即 abc->cba
    reverseString(s, m, n - 1); //反转[m..n - 1]，例如Y->Y^T，即 def->fed
    reverseString(s, 0, n - 1); //反转[0..n - 1]，即如整个反转，(X^TY^T)^T=YX，即 cbafed->defabc。
    printf("2. 三步反转法：%s\n", s);
}
