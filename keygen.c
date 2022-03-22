#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int min_length = 8;
    srand(time(NULL));

    int password_length = min_length + rand() % 10;
    for(int i = 0; i < password_length; ++i)
    {
        int ASCII = 33 + rand() % 93;
        printf("%c", ASCII);
    }
}