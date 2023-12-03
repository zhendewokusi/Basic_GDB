long callee(long arg1, long arg2, long arg3, long arg4, long arg5, long arg6, long arg7, long arg8) {
    return arg7 + arg8;
}

int main() {
    long a = 7;
    long b = 8;
    callee(1, 2, 3, 4 ,5 ,6, a, b);
    return 0;
}