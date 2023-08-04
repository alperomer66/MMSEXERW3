#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }

    char *filename = argv[1];
    int N = atoi(argv[2]);

    if (N < 1) {
        printf("N трябва да бъде положително число.\n");
        return 1;
    }

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Грешка при отваряне на файла.\n");
        return 1;
    }

    for (int i = 1; i <= 20; i++) {
        fprintf(file, "%d ", i);
    }

    fclose(file);
    printf("Успешно записахте числата от 10 до 20 във файл %s.\n", filename);

    return 0;
}
