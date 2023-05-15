#include <stdio.h>
char araa[25];
char ara[100];
int main()
{
    int n, i, j;
    char temp;
    scanf("%d", &n);
    scanf("%s", araa);
    for (i = 0, j = 0; i < n; i++)
    {
        if (araa[i] == '2' || araa[i] == '3' || araa[i] == '5' || araa[i] == '7' || araa[i] == '11' || araa[i] == '13')
        {
            ara[j] = araa[i];
            j++;
        }
        else if (araa[i] == '4')
        {
            ara[j] = '3';
            j++;
            ara[j] = '2';
            j++;
            ara[j] = '2';
            j++;
        }
        else if (araa[i] == '6')
        {
            ara[j] = '5';
            j++;
            ara[j] = '3';
            j++;
        }
        else if (araa[i] == '8')
        {
            ara[j] = '2';
            j++;
            ara[j] = '2';
            j++;
            ara[j] = '2';
            j++;
            ara[j] = '7';
            j++;
        }
        else if (araa[i] == '9')
        {
            ara[j] = '2';
            j++;
            ara[j] = '3';
            j++;
            ara[j] = '3';
            j++;
            ara[j] = '7';
            j++;
        }
    }
    n = j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ara[j] > ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    printf("%s\n", ara);
    return 0;
}