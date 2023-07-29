#include <stdio.h>
int main()
{
    int arr[10],i,sum = 0,min,max;

    // Input values to the array
    printf("Enter 10 integer values:\n");
    for (i=0;i<10;i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d",&arr[i]);

        // Calculate the sum of elements for average calculation
        sum = sum+arr[i];

        // Update min and max values
        if (i == 0)
        {
            min = max = arr[i];
        } else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }

    // Calculate the average value
    float average = (float) sum / 10;

    // Display the results
    printf("\nEntered values:\n");
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    // Reverse the order of values
    printf("\n\nReversed order of values:\n");
    for (i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

