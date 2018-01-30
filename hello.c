#include <stdio.h>
static int t = 1;
int main(void)
{
    if (t)
        printf("on this line\n");
    else
        printf("but not here\n");

    return 0;
}
