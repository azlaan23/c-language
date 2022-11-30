#include <stdio.h>
void printStr(char str[])
{
    int i=0;
    while (str[i] |= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'}; both are same 
    // char str []= "harry";
    // char str[6] = "harry";
char str[34];
gets(str);
printf("Using custom function printStr\n");
printf("Usong printf %s\n", str);
printf("Using puts : \n");
puts(str);
    // printStr(str);
    return 0;
}