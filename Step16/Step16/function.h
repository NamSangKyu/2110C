#pragma once
//중복 include 막는 방법
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}
#endif