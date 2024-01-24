#include <stdio.h>

int main() {
    int abcd[] = { 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1 };
    int length = sizeof(abcd) / sizeof(abcd[0]);

    int dwitouta = 0;
    int i = 0;
    char choice;

    printf("Выберите подпункт задания (A или B): ");
    scanf(" %c", &choice);

    if (choice == 'A') {

        while (abcd[i] == 1 && i < length) {
            dwitouta = 0;
            i++;
        }

        printf("Количество первых дней без осадков: %d\n", i);
    }
    else if (choice == 'B') {

        dwitouta = 0;
        i = 0;

        while (i < length) {
            if (abcd[i] == 0) {
                dwitouta++;
            }
            else {
                break;
            }
            i++;
        }

        printf("Количество первых дней без осадков: %d\n", dwitouta);
    }
    else {
        printf("Неправильный выбор. Пожалуйста, выберите A или B.\n");
    }

    return 0;
}
