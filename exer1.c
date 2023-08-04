#include <stdio.h>

int main() {
    char filename[10];
    FILE *file;         //failat trabva da bude v sushtata direktoriya!
    
    printf("Въведете името на файла: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Грешка при отваряне на файла.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }


    fclose(file);

    return 0;
}
