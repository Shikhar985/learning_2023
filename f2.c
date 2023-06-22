#include <stdio.h>
#include <ctype.h>
#define BUFFER_SIZE 1024
void convertToUpper(char *buffer, size_t length) {
    for (size_t i = 0; i < length; i++) {
        buffer[i] = toupper(buffer[i]);
    }
}

void convertToLower(char *buffer, size_t length) {
    for (size_t i = 0; i < length; i++) {
        buffer[i] = tolower(buffer[i]);
    }
}

void convertToSentenceCase(char *buffer, size_t length) {
    int capitalizeNext = 1; 

    for (size_t i = 0; i < length; i++) {
        if (isspace(buffer[i])) {
            capitalizeNext = 1; 
        } else if (capitalizeNext) {
            buffer[i] = toupper(buffer[i]);
            capitalizeNext = 0;
        } else {
            buffer[i] = tolower(buffer[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);
    sourceFile = fopen(sourcePath, "rb");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }
    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);
    destinationFile = fopen(destinationPath, "wb");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    if (argc > 1) {
     
        char option = argv[1][1];
        while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
            switch (option) {
                case 'u':
                    convertToUpper(buffer, bytesRead);
                    break;
                case 'l':
                    convertToLower(buffer, bytesRead);
                    break;
                case 's':
                    convertToSentenceCase(buffer, bytesRead);
                    break;
                default:
                    break;
            }

            fwrite(buffer, 1, bytesRead, destinationFile);
        }
    } else {

        while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
            fwrite(buffer, 1, bytesRead, destinationFile);
        }
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
