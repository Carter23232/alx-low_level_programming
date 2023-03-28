#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 100

char *generate_random_string(int sum) {
    char *str = malloc(sizeof(char) * (MAX_LEN + 1));
    int len = 0;
    srand(time(NULL));
    while (sum > 0 && len < MAX_LEN) {
  int n = rand() % 79 + 48;
        if (n > sum) continue; 
        str[len++] = n;
        sum -= n;
    }
    str[len] = '\0';
    return str;
}

int main() {
	int sum = 234;
    char *str = generate_random_string(sum);
    printf("%s\n", str);
    free(str);
    return 0;
}
