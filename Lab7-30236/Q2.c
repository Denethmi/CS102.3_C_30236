#include <stdio.h>
int main()
{
    int size;

    // Input the size of the arrays from the user
    printf("Enter the size of the arrays: ");
    scanf("%d",&size);

    int array1[size], array2[size], vectorSum[size];
    int scalarSum = 0;

    // Input values to the first array
    printf("Enter values for the first array:\n");
    for (int i=0;i<size;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&array1[i]);
    }

    // Input values to the second array
    printf("\nEnter values for the second array:\n");
    for (int i=0;i<size;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&array2[i]);
    }

    // Calculate scalar sum and vector sum
    for (int i = 0; i < size; i++)
    {
        scalarSum += array1[i] + array2[i];
        vectorSum[i] = array1[i] + array2[i];
    }

    // Display scalar sum
    printf("\nScalar Sum: %d\n",scalarSum);

    // Display vector sum
    printf("\nVector Sum (Resultant array):\n");
    for (int i=0;i<size;i++)
    {
        printf("%d ",vectorSum[i]);
    }

    return 0;
}

