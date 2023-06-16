#include <stdio.h>

int main() {
    char Word;
    while (scanf("%c", &Word) != EOF) {
        getchar();
        if (Word == 'A' || Word == 'a' || Word == 'E' || Word == 'e' || Word == 'I' || Word == 'i' || Word == 'O' || Word == 'o' || Word == 'U' || Word == 'u') {
            printf("Vowel\n");
        }
        else {
            printf("Consonant\n");
        }
    }
    return 0;
}