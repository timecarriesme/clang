#include <stdio.h>

int main() {
    int userInput;
    int digitCount = 0, digitSum = 0, digitProduct = 1, digitSumSquares = 0, digitSumCubes = 0;
    int firstDigit, lastDigit;

    printf("Введите натуральное число: ");
    scanf("%d", &userInput);

    int temp = userInput;

    while (temp != 0) {
        digitCount++;
        int currentDigit = temp % 10;
        digitSum += currentDigit;
        digitProduct *= currentDigit;
        digitSumSquares += currentDigit * currentDigit;
        digitSumCubes += currentDigit * currentDigit * currentDigit;
        temp = temp / 10;
    }

    float digitAverage = (float) digitSum / digitCount;

    lastDigit = userInput % 10;
    temp = userInput;
    while (temp >= 10) {
        temp = temp / 10;
    }
    firstDigit = temp;

    int sumFirstLast = firstDigit + lastDigit;

    printf("Количество цифр: %d\n", digitCount);
    printf("Сумма цифр: %d\n", digitSum);
    printf("Произведение цифр: %d\n", digitProduct);
    printf("Среднее арифметическое цифр: %.2f\n", digitAverage);
    printf("Сумма квадратов цифр: %d\n", digitSumSquares);
    printf("Сумма кубов цифр: %d\n", digitSumCubes);
    printf("Первая цифра: %d\n", firstDigit);
    printf("Сумма первой и последней цифры: %d\n", sumFirstLast);

    return 0;
}