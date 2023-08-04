#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Използване: %s <име_на_файл> <N>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int N = atoi(argv[2]);

    if (N < 1) {
        printf("N трябва да бъде положително число.\n");
        return 1;
    }

    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Грешка при отваряне на файла.\n");
        return 1;
    }

    // Записване на числата в бинарен файл
    for (int i = 10; i <= 10 + N; i++) {
        fwrite(&i, sizeof(int), 1, file);
    }

    fclose(file);
    printf("Успешно записахте %d числа в бинарния файл %s.\n", N, filename);

    return 0;
}
