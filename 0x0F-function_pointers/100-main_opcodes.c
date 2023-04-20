#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int bytes = atoi(argv[1]);
    if (bytes <= 0) {
        printf("Error\n");
        return 2;
    }

    unsigned char *ptr = (unsigned char *)main;

    for (int i = 0; i < bytes; i++) {
        printf("%02x", *(ptr + i));
    }

    printf("\n");
    return 0;
}
