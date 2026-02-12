#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter number of elements:");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max, secondMax;
    
    if(n < 2) {
        printf("Second maximum not possible.\n");
        return 0;
    }

    if(arr[0] > arr[1]) {
        max = arr[0];
        secondMax = arr[1];
    } else {
        max = arr[1];
        secondMax = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        } 

        }
        printf("Second maximum element is: %d\n", secondMax);

        return 0;
    }