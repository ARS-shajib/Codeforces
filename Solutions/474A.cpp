#include <stdio.h>
int main()
{
    int i, len;
    char s[101];
    char ch;
    scanf("%c", &ch);
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if ((s[i] == 'r' && ch == 'R') || (s[i] == 'w' && ch == 'L'))
            s[i] = 'e';
        else if ((s[i] == 'e' && ch == 'R') || (s[i] == 'q' && ch == 'L'))
            s[i] = 'w';
        else if ((s[i] == 't' && ch == 'R') || (s[i] == 'e' && ch == 'L'))
            s[i] = 'r';
        else if ((s[i] == 'y' && ch == 'R') || (s[i] == 'r' && ch == 'L'))
            s[i] = 't';
        else if ((s[i] == 'u' && ch == 'R') || (s[i] == 't' && ch == 'L'))
            s[i] = 'y';
        else if ((s[i] == 'i' && ch == 'R') || (s[i] == 'y' && ch == 'L'))
            s[i] = 'u';
        else if ((s[i] == 'o' && ch == 'R') || (s[i] == 'u' && ch == 'L'))
            s[i] = 'i';
        else if ((s[i] == 'p' && ch == 'R') || (s[i] == 'i' && ch == 'L'))
            s[i] = 'o';
        else if ((s[i] == 'd' && ch == 'R') || (s[i] == 'a' && ch == 'L'))
            s[i] = 's';
        else if ((s[i] == 'f' && ch == 'R') || (s[i] == 's' && ch == 'L'))
            s[i] = 'd';
        else if ((s[i] == 'g' && ch == 'R') || (s[i] == 'd' && ch == 'L'))
            s[i] = 'f';
        else if ((s[i] == 'h' && ch == 'R') || (s[i] == 'f' && ch == 'L'))
            s[i] = 'g';
        else if ((s[i] == 'j' && ch == 'R') || (s[i] == 'g' && ch == 'L'))
            s[i] = 'h';
        else if ((s[i] == 'k' && ch == 'R') || (s[i] == 'h' && ch == 'L'))
            s[i] = 'j';
        else if ((s[i] == 'l' && ch == 'R') || (s[i] == 'j' && ch == 'L'))
            s[i] = 'k';
        else if ((s[i] == ';' && ch == 'R') || (s[i] == 'k' && ch == 'L'))
            s[i] = 'l';
        else if ((s[i] == 'c' && ch == 'R') || (s[i] == 'z' && ch == 'L'))
            s[i] = 'x';
        else if ((s[i] == 'v' && ch == 'R') || (s[i] == 'x' && ch == 'L'))
            s[i] = 'c';
        else if ((s[i] == 'b' && ch == 'R') || (s[i] == 'c' && ch == 'L'))
            s[i] = 'v';
        else if ((s[i] == 'n' && ch == 'R') || (s[i] == 'v' && ch == 'L'))
            s[i] = 'b';
        else if ((s[i] == 'm' && ch == 'R') || (s[i] == 'b' && ch == 'L'))
            s[i] = 'n';
        else if ((s[i] == ',' && ch == 'R') || (s[i] == 'n' && ch == 'L'))
            s[i] = 'm';
        else if ((s[i] == '.' && ch == 'R') || (s[i] == 'm' && ch == 'L'))
            s[i] = ',';
        else if ((s[i] == '/' && ch == 'R') || (s[i] == ',' && ch == 'L'))
            s[i] = '.';
        else if ((s[i] == 'w' && ch == 'R'))
            s[i] = 'q';
        else if ((s[i] == 's' && ch == 'R'))
            s[i] = 'a';
        else if ((s[i] == 'x' && ch == 'R'))
            s[i] = 'z';
        else if ((s[i] == 'o' && ch == 'L'))
            s[i] = 'p';
        else if ((s[i] == 'l' && ch == 'L'))
            s[i] = ';';
        else if ((s[i] == '.' && ch == 'L'))
            s[i] = '/';
    }
    printf("%s", s);
    return 0;
}