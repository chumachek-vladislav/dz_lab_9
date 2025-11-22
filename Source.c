#include <stdio.h> 
#include <locale.h>

int main() {
    //variant 2
    setlocale(LC_CTYPE, "");
    char symbol;
    int a, b;

    printf("Введите символ для рисования: ");
    scanf("%c", &symbol);

    printf("Введите длину a: ");
    scanf("%d", &a);

    printf("Введите длину b: ");
    scanf("%d", &b);
    printf("\nПрямоугольный треугольник:\n\n");

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i * b / a; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    printf("\nОчень красиво!\n");
    system("pause");
    return 0;
}