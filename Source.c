#include <stdio.h> 
#include <locale.h>

int main() {
    //variant 3
    setlocale(LC_CTYPE, "");
    char symbol;
    int a, b;

    printf("Ââåäèòå ñèìâîë äëÿ ðèñîâàíèÿ: ");
    scanf("%c", &symbol);

    printf("Ââåäèòå äëèíó a: ");
    scanf("%d", &a);

    printf("Ââåäèòå äëèíó b: ");
    scanf("%d", &b);
    printf("\nÏðÿìîóãîëüíûé òðåóãîëüíèê:\n\n");

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i * b / a; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    printf("\nÎ÷åíü êðàñèâî!\n");
    system("pause");
    return 0;
}
