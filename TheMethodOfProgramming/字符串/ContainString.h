//
//  ContainString.h
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzb. All rights reserved.
//

#ifndef ContainString_h
#define ContainString_h

#include <stdio.h>

/** 题目描述
 *  给定两个分别由字母组成的字符串A和字符串B，字符串B的长度比字符串A短。
 *  请问，如何最快地判断字符串B中所有字母是否都在字符串A里？
 *  （这里字符串全部为小写或者大写）
 */

/**
 * Method 1. 逐一比较法 - 时间复杂：O(n * m)，空间复杂度O(1)
 */
void containString(char* a,char* b);

/**
 * Method 2.先哈希排序，再比较 - “最好的方法”，时间复杂度O(n + m)，空间复杂度O(1)
 */
void firstHashSortContainString(char* a,char* b);
#endif /* ContainString_h */
