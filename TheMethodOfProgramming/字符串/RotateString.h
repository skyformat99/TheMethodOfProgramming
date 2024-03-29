//
//  RotateString.h
//  TheMethodOfProgramming
//
//  Created by slcf666 on 2017/9/6.
//  Copyright © 2017年 panzb. All rights reserved.
//

#ifndef RotateString_h
#define RotateString_h

#include <stdio.h>

/** 题目描述
 *  给定一个字符串，要求把字符串前面的若干个字符移动到字符串的尾部，
 *  如把字符串“abcdef”前面的2个字符'a'和'b'移动到字符串的尾部，
 *  使得原字符串变成字符串“cdefab”。
 *  请写一个函数完成此功能，要求对长度为n的字符串操作的时间复杂度为 O(n)，空间复杂度为 O(1)。
 */


/**
 *  Method 1. 暴力移位法 - 时间复杂度为O(m * n)，空间复杂度为O(1)
 */
void leftRotateString(char* s, int m);

/**
 *  Method 2. 三步反转法 - 时间复杂度为O(n)，空间复杂度为O(1)
 */
void threeStepRotateString(char* s, int m);

#endif /* RotateString_h */
