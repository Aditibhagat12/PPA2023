#include<stdio.h>

int main()
{
    int i =1;
    int count = 0;

    printf("Enter numbe of times you want to display Hay Ganesh on screen\n");
    scanf("%d",&count);

    do
    {
        printf("Jay Ganesh");
        i++;
    } while (i <= 5);

    return 0;
    
}