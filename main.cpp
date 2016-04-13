#include <iostream>

char delimeters[] = {' ', '\0'};

int isDelimeter(char symbol);

int main() {

    char symbol;
    scanf("%c", &symbol);
    if (isDelimeter(symbol)) {
        printf("symbol IS delimeter");
    } else printf("symbol is NOT delimeter");

}

int isDelimeter(char charToCompare) {

    for (int i = 0; i < sizeof(delimeters); i++) {
        if (charToCompare == delimeters[i]) {
            return 1;
        }
    }
    return 0;
}