#include <iostream>

char delimeters[] = {' ', '\0'};
char line[128];

int isDelimeter(char symbol);

int fromConsole(char inputLine[]);

int countWords(char inputLine[]);

int main() {

    printf("symbols: %d\n", fromConsole(line));
    printf("words: %d\n", countWords(line));

}

int countWords(char inputLine[]) {

    int q = 0;
    int words = 0;
    int i = 0;

    while (inputLine[i] != '\0') {
        if (q == 0) {
            if (isDelimeter(inputLine[i])) {
                q = 1;
                i++;
                continue;
            }
            q = 2;
            i++;
            continue;
        }
        if (q == 1) {
            if (isDelimeter(inputLine[i])) {
                i++;
                continue;
            }
            q = 2;
            i++;
            continue;
        }
        if (q == 2) {
            if (isDelimeter(inputLine[i])) {
                q = 1;
                words++;
                i++;
                continue;
            }
            i++;
            continue;

        }
    }
    if (q == 2) {
        words++;
    }
    return words;
}

int fromConsole(char inputLine[]) {

    int i = 0;
    char inputChar;
    for (i = 0; i < 127; i++) {

        scanf("%c", &inputChar);
        if (inputChar == '\n') {
            break;
        }
        inputLine[i] = inputChar;

    }
    inputLine[i] = '\0';
    return i;
}

int isDelimeter(char charToCompare) {

    for (int i = 0; i < sizeof(delimeters); i++) {
        if (charToCompare == delimeters[i]) {
            return 1;
        }
    }
    return 0;
}