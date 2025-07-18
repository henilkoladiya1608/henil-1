#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Henil from Gujarat";
    char *ptr = strchr(text, 'a');

    if (ptr != NULL) {
        printf("Character found at position: %ld\n", ptr - text +1);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}