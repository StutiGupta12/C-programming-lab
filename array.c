#include <stdio.h>

int main() {
    // Writing to a file
    FILE *writeFile = fopen("example.txt", "w");

    if (writeFile == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(writeFile, "Hello, this is some data written to the file.\n");
    fprintf(writeFile, "12345\n");
    fprintf(writeFile, "3.14\n");

    fclose(writeFile);
    printf("Data written to the file successfully.\n");

    // Reading from the file
    FILE *readFile = fopen("example.txt", "r");

    if (readFile == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nReading data from the file:\n");

    char buffer[100];

    while (fgets(buffer, sizeof(buffer), readFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(readFile);

    return 0;
}