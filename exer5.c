#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Използване: %s <име_на_файл>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    FILE *file = fopen(filename, "rb");

    if (file == NULL) {
        printf("Грешка при отваряне на файла.\n");
        return 1;
    }

    int num;
    int sum = 0;

    // Прочитане на числата и намиране на сумата им
    while (fread(&num, sizeof(int), 1, file) == 1) {
        sum += num;
    }

    fclose(file);

    printf("Сумата на числата във файла %s е: %d\n", filename, sum);

    return 0;
}
