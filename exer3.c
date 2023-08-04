#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Използване: %s <име_на_файла>\n", argv[0]);
        return 1;
    }

    // Име на файла
    char *filename = argv[1];
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Грешка при отваряне на файла.\n");
        return 1;
    }

    int num, sum = 0;
    // Четене и сумиране на числата
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
    }

    // Затваряне на файла
    fclose(file);

    // Извеждане на сумата на стандартния изход
    printf("Сумата на числата: %d\n", sum);

    return 0;
}
