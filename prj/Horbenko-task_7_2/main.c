#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1251& cls");

    int n = 10;
    int massif[n];
    int max = 0;

    printf("������ %d ����������� �����:\n", n);
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

        printf("������ ������� ��� ������� ������ � ��������� ���������.\n");
    } else
    {
        printf("������ ������� ��� � ���������.\n");
    }

    printf("����� ���� ���:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", massif[i]);
    }
    puts("\n��� ������ �������� Enter");
    getch();
    return 0;
}
