#include <stdio.h>

int main();
int func_1();
int func_2();
int func_3();
int print_ptr_value(int v);

int global_1 = 7; // data
int global_2;     // bss

int main()
{
    print_ptr_value(global_1);
    print_ptr_value(global_2);

    int local = 101; // stack
    print_ptr_value(local);
    func_1();
    func_2();
    return 0;
}

int func_1()
{
    int local_1_1 = 102;
    print_ptr_value(local_1_1);

    return 0;
}

int func_2()
{
    int local_2_1 = 103;
    print_ptr_value(local_2_1);
    func_3();

    return 0;
}

int func_3()
{
    int local_3_1 = 104;
    print_ptr_value(local_3_1);

    return 0;
}

int print_ptr_value(int v)
{
    // printf("%d at %p\n", v, &v);
    return 0;
}