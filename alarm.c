#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int global = 4;

void alarm_handler(int signo) {
    global++;
}

int main(int argc,char* argv[]) {
    int a,b,c;

    signal(SIGALRM, alarm_handler);
    alarm(1);

    a = 2;
    b = 3;
    c = 4;

    c = (a + b) / (global - c);
    return 0;
}