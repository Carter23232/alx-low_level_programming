#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 100

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 100

int main() {
    int target_sum = 234;
    char *result_str = malloc(sizeof(char) * (MAX_LEN + 1));
    int len = 0, num = 0;
    srand(time(NULL));
    while (target_sum > 0 && len < MAX_LEN) {
        num = rand() % 79 + 48;
        if (num > target_sum) continue;
        result_str[len++] = num;
        target_sum -= num;
    }
    result_str[len] = '\0';
    printf("%s\n", result_str);
    free(result_str);
    return 0;
}
