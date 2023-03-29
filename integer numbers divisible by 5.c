#include <stdio.h>

    void main()

    {

        int i, number1, number2, count = 0, sum = 0;

        printf("Enter the value of number1 and number2 \n");

        scanf("%d %d", &number1, &number2);

        printf("Integers divisible by 5 are \n");

        for (i = number1; i < number2; i++)

        {

            if (i % 5 == 0)

            {

                printf("%3d,", i);

                count++;

                sum = sum + i;

            }

        }

        printf("\n Number of integers divisible by 5 between %d and %d =

     %d\n", number1, number2, count);

        printf("Sum of all integers that are divisible by 5 = %d\n", sum);

    }
