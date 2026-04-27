#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

#if defined(__STDC_VERSION__)
    printf("C standard: %ld\n", __STDC_VERSION__);
#endif

    return 0;
}
