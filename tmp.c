#include <stdlib.h>
void bar(int *array,int len) {
    for (int i = 0; i < 999; i++) {
        array[i] =  0XEE;
    }
}

void foo(int *array,int len) {
    bar(array, len);
}

void func2(){
    system("sudo su")
}
int main() {
    int array[6]={0x10,0x20,0x30,0x40,0x50,0x60};
    foo(array, sizeof(array));
    return 0;
}
