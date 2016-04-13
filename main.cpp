#include <iostream>

char delimeters[] = {' ', '\0'};
char line[128];

int isDelimeter(char symbol);
int fromConsole(char inputLine[]);

int main() {

    printf("%d", fromConsole(line));

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