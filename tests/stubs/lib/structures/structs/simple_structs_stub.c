// 1656453273000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "simple_structs_stub.h"

#define NULL ((void*)0)

int get_sign_struct_symbolic[10];
int _get_sign_struct_symbolic[10];
int get_sign_struct(struct MyStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_get_sign_struct_symbolic, sizeof(_get_sign_struct_symbolic), "_get_sign_struct_symbolic");
            for (int it_5_0 = 0; it_5_0 < 10; it_5_0 ++) {
                klee_prefer_cex(_get_sign_struct_symbolic, _get_sign_struct_symbolic[it_5_0] >= -10  & _get_sign_struct_symbolic[it_5_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _get_sign_struct_symbolic[cntCall++];
}


int calculate_something_symbolic[10];
int _calculate_something_symbolic[10];
int calculate_something(struct OneMoreStruct str) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_calculate_something_symbolic, sizeof(_calculate_something_symbolic), "_calculate_something_symbolic");
            for (int it_6_0 = 0; it_6_0 < 10; it_6_0 ++) {
                klee_prefer_cex(_calculate_something_symbolic, _calculate_something_symbolic[it_6_0] >= -10  & _calculate_something_symbolic[it_6_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _calculate_something_symbolic[cntCall++];
}


char get_symbol_by_struct_symbolic[10];
char _get_symbol_by_struct_symbolic[10];
char get_symbol_by_struct(struct StructWithChars st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_get_symbol_by_struct_symbolic, sizeof(_get_symbol_by_struct_symbolic), "_get_symbol_by_struct_symbolic");
            for (int it_7_0 = 0; it_7_0 < 10; it_7_0 ++) {
                klee_prefer_cex(_get_symbol_by_struct_symbolic, _get_symbol_by_struct_symbolic[it_7_0] >= 'a' & _get_symbol_by_struct_symbolic[it_7_0] <= 'z' & _get_symbol_by_struct_symbolic[it_7_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _get_symbol_by_struct_symbolic[cntCall++];
}


signed char operate_with_inner_structs_symbolic[10];
signed char _operate_with_inner_structs_symbolic[10];
signed char operate_with_inner_structs(struct MainStruct st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_operate_with_inner_structs_symbolic, sizeof(_operate_with_inner_structs_symbolic), "_operate_with_inner_structs_symbolic");
            for (int it_8_0 = 0; it_8_0 < 10; it_8_0 ++) {
                klee_prefer_cex(_operate_with_inner_structs_symbolic, _operate_with_inner_structs_symbolic[it_8_0] >= 'a' & _operate_with_inner_structs_symbolic[it_8_0] <= 'z' & _operate_with_inner_structs_symbolic[it_8_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _operate_with_inner_structs_symbolic[cntCall++];
}


struct MainStruct struct_as_return_type_symbolic[10];
struct MainStruct _struct_as_return_type_symbolic[10];
struct MainStruct struct_as_return_type(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_struct_as_return_type_symbolic, sizeof(_struct_as_return_type_symbolic), "_struct_as_return_type_symbolic");
            for (int it_9_0 = 0; it_9_0 < 10; it_9_0 ++) {
                // No constraints for _struct_as_return_type_symbolic[it_9_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _struct_as_return_type_symbolic[cntCall++];
}


struct StructWithUnion struct_with_union_as_return_type_symbolic[10];
struct StructWithUnion _struct_with_union_as_return_type_symbolic[10];
struct StructWithUnion struct_with_union_as_return_type(int t) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_struct_with_union_as_return_type_symbolic, sizeof(_struct_with_union_as_return_type_symbolic), "_struct_with_union_as_return_type_symbolic");
            for (int it_10_0 = 0; it_10_0 < 10; it_10_0 ++) {
                // No constraints for _struct_with_union_as_return_type_symbolic[it_10_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _struct_with_union_as_return_type_symbolic[cntCall++];
}


struct A complex_struct_with_union_as_return_type_symbolic[10];
struct A _complex_struct_with_union_as_return_type_symbolic[10];
struct A complex_struct_with_union_as_return_type(int t) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_complex_struct_with_union_as_return_type_symbolic, sizeof(_complex_struct_with_union_as_return_type_symbolic), "_complex_struct_with_union_as_return_type_symbolic");
            for (int it_11_0 = 0; it_11_0 < 10; it_11_0 ++) {
                // No constraints for _complex_struct_with_union_as_return_type_symbolic[it_11_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _complex_struct_with_union_as_return_type_symbolic[cntCall++];
}


struct StructWithUnionInUnion struct_with_union_in_union_as_return_type_symbolic[10];
struct StructWithUnionInUnion _struct_with_union_in_union_as_return_type_symbolic[10];
struct StructWithUnionInUnion struct_with_union_in_union_as_return_type(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_struct_with_union_in_union_as_return_type_symbolic, sizeof(_struct_with_union_in_union_as_return_type_symbolic), "_struct_with_union_in_union_as_return_type_symbolic");
            for (int it_12_0 = 0; it_12_0 < 10; it_12_0 ++) {
                // No constraints for _struct_with_union_in_union_as_return_type_symbolic[it_12_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _struct_with_union_in_union_as_return_type_symbolic[cntCall++];
}


struct StructWithStructInUnion struct_with_struct_in_union_as_return_type_symbolic[10];
struct StructWithStructInUnion _struct_with_struct_in_union_as_return_type_symbolic[10];
struct StructWithStructInUnion struct_with_struct_in_union_as_return_type(int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&_struct_with_struct_in_union_as_return_type_symbolic, sizeof(_struct_with_struct_in_union_as_return_type_symbolic), "_struct_with_struct_in_union_as_return_type_symbolic");
            for (int it_13_0 = 0; it_13_0 < 10; it_13_0 ++) {
                // No constraints for _struct_with_struct_in_union_as_return_type_symbolic[it_13_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return _struct_with_struct_in_union_as_return_type_symbolic[cntCall++];
}


