#include <stdio.h>


int main()
{
    int tallest, smallest, tpos = 1, Spos = 1, n, height;
    printf("How many students are measured? ");
    scanf("%d", &n);

    printf("Height of student number 1: ");
    scanf("%d", &height);
    tallest = smallest = height;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter the height of student number %d: ", i);
        scanf("%d", &height);

        if (height > tallest)
        {
            tallest = height;
            tpos = i;
        }

        if (height < smallest)
        {
            smallest = height;
            Spos = i;
        }
    }

    printf("Student %d is the tallest, with the height %d\n", tpos, tallest);
    printf("Student %d is the smallest, with the height %d\n", Spos, smallest);

    return 0;
}