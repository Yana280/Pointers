#include <stdio.h>

int main(void)
{
    char x='s';
    char y='o';
    char *a = &x;
    char *b = &y;
    printf("a is %x\n",a);
    printf("b is %x\n",b);
    printf("swapping\n");
    swap_pointers(&a,&b);
    printf("a is %x\n",a);
    printf("b is %x\n",b);

}

void swap_pointers(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

