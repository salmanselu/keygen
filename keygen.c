#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void main()
{
    int min_length = 8;
    srand(time(NULL));
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&8()-_=+|";
    int character_length = strlen(characters);

    int password_length = min_length + rand() % 10;
    for(int i = 0; i < password_length; ++i)
    {
        int index = rand() % character_length;
        printf("%c", characters[index]);
    }
}