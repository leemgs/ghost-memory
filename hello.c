#include <stdio.h>
static int type = 1;
int main(void)
{
    if (type)
        printf("on this line\n");
    else
        printf("but not here\n");

    return 0;
}
