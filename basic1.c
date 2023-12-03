#include <stdbool.h>
#include <stdio.h>
#define NUM 123

int add(int a,int b){
    return a+b;
}

void func2() {
    printf("FUNC2\n");
}

void func1(int* p, bool judge) {
    *p = NUM;
    if (judge)
        func2();
}

bool func3(int* p) {
    return *p % 2 == 0 ? true : false;
}

int main() {
    int j = 3;
    int k = 7;
    j += k;
    k = j * 2;
    func1(&j, func3(&k));
    printf("j:%d\n", j);
    return 0;
}