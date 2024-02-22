#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251& cls");

    int n = 10;
    int massif[n];
    int max = 0;

    printf("Введіть %d натуральних чисел:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &massif[i]);

        if (massif[i] > massif[max])
        {
            max = i;
        }
    }

    if (max != 0)
    {
        int temp = massif[0];
        massif[0] = massif[max];
        massif[max] = temp;

        printf("Перший елемент був змінений місцями з найбільшим елементом.\n");
    } else
    {
        printf("Перший елемент вже є найбільшим.\n");
    }

    printf("Масив після змін:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", massif[i]);
    }
    puts("\nДля виходу натисніть Enter");
    getch();
    return 0;
}
