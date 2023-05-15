#include <stdio.h>
int main()
{
    int s;
    scanf("%d", &s);
    if (s == 0)
    {
        printf("zero\n");
        return 0;
    }
    if (s / 10 == 2)
        printf("twenty");
    if (s / 10 == 3)
        printf("thirty");
    if (s / 10 == 4)
        printf("forty");
    if (s / 10 == 5)
        printf("fifty");
    if (s / 10 == 6)
        printf("sixty");
    if (s / 10 == 7)
        printf("seventy");
    if (s / 10 == 8)
        printf("eighty");
    if (s / 10 == 9)
        printf("ninety");
    if (s / 10 != 0 && s / 10 != 1 && s != 20 && s % 10 != 0)
        printf("-");
    if (s / 10 != 1)
    {
        if (s % 10 == 1)
            printf("one\n");
        if (s % 10 == 2)
            printf("two\n");
        if (s % 10 == 3)
            printf("three\n");
        if (s % 10 == 4)
            printf("four\n");
        if (s % 10 == 5)
            printf("five\n");
        if (s % 10 == 6)
            printf("six\n");
        if (s % 10 == 7)
            printf("seven\n");
        if (s % 10 == 8)
            printf("eight\n");
        if (s % 10 == 9)
            printf("nine\n");
    }
    if (s == 10)
        printf("ten\n");
    if (s == 11)
        printf("eleven\n");
    if (s == 12)
        printf("twelve\n");
    if (s == 13)
        printf("thirteen\n");
    if (s == 14)
        printf("fourteen\n");
    if (s == 15)
        printf("fifteen\n");
    if (s == 16)
        printf("sixteen\n");
    if (s == 17)
        printf("seventeen\n");
    if (s == 18)
        printf("eighteen\n");
    if (s == 19)
        printf("nineteen\n");
    return 0;
}