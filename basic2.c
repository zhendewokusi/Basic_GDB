
// 出现段错误

#include <stdio.h>
#include "black_box.h"

void crash(int* p) {
    *p = 1;
}

void func(int* p) {
    int* tmp = p;
    tmp = func_box1(tmp);
    tmp = func_box2(tmp);
    crash(tmp);
}

int main() {
    int i;
    func(&i);
}