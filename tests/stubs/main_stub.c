// 1656591080000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "main_stub.h"

#define NULL ((void*)0)

int main_symbolic[10];
int _main_symbolic[10];
int main(int argc, char ** argv) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_main_symbolic, sizeof(_main_symbolic), "_main_symbolic");
            for (int it_1_0 = 0; it_1_0 < 10; it_1_0 ++) {
                klee_prefer_cex(_main_symbolic, _main_symbolic[it_1_0] >= -10  & _main_symbolic[it_1_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _main_symbolic[cntCall++];
}


