#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int sum = 0, x, y = 0, count ;
    scanf("%d", &count);
    while (count > 0)
    {
        x = count % 10;
        y = y + x;

        count = count / 10;
        if (count == 0 && y >= 10)
        {
            count = y;
            y = 0;
        }
    }
    printf("%d", y);
}