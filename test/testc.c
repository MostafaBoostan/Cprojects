#include <stdio.h>

int main()
{
    int a = 0x41434547;
    char* p =(char*) & a;
    char c = *(p);
    printf("%c\n", *(p + 1));
    
    return 0;
}