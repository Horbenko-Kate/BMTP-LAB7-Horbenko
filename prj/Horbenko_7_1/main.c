#include <stdio.h>
#include <string.h>

int main()
{
    system("chcp 65001& cls");

    char word[200];
    int ra = 0;
    int len = 0;
    int big_latter = 0;

    printf("Введіть слово (закінчіть '#'): ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == 'р' && word[i + 1] == 'а' || word[i] == 'Р' && word[i + 1] == 'А' || word[i] == 'Р' && word[i + 1] == 'а' ||word[i] == 'р' && word[i + 1] == 'А' )
        {
            ra++;
        }

        if (word[i] != '#')
        {
            len++;

            if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'А' && word[i] <= 'Я'))
            {
                big_latter++;
            }
        }
        else
        {
            break;
        }
    }

    if (ra > 0)
    {
        printf("Кількість складів 'ра' у слові: %d\n", ra);
    }
    else
    {
        printf("Довжина слова: %d\n", len);
        printf("Кількість заголовкових літер у слові: %d\n", big_latter);
    }
    puts("\nДля виходу натисніть Enter");
    getch();
    return 0;
}
