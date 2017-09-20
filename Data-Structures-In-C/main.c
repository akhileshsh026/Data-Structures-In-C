#include <stdio.h>

void Oposite_piramid()
{

    for (int j = 1; j <= 5; j++)
    {
        for (int i = 5; i >=1 ; i--)
        {
            if (j==i || j<i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void Stright_Primind()
{
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j <= 5; ++j)
        {
            if(i<=j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void main()
{
    printf("Hello, World! AwSome\n");

    Oposite_piramid();
    printf("*******************************");
    printf("\n");
    Stright_Primind();
}

