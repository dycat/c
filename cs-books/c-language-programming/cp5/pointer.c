#include <stdio.h>

int main() {
    char *pmessage = "Now is the time";

    while (*pmessage != '\0')
    {
        printf("%c", *pmessage);
        pmessage++;
    }

    for (int i=0; pmessage[i] != '\0'; i++) {
        printf("%c", pmessage[i]);
    }
    printf("\n");
    printf("%s\n", pmessage);
}