// The code is from black box ai
#include <stdio.h>

void change_value(int *value) {
    *value = *value * 10;
}

int main() {
    int ref = 5;
    printf("Before change: %d\n", ref);
    change_value(&ref);
    printf("After change: %d\n", ref);
    return 0;
}