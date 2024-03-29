#include <stdio.h>
#include <errno.h>

int main() {
    printf("libc file test\n");

    FILE *f = fopen("/sd/test.txt", "r+");

    if (f) {
        printf("File opened!\n");
    } else {
        printf("Failed: 0x%08x\n", errno);
    }

    printf("Test is done!\n");
}

