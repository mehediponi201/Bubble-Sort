
#include<stdio.h>
int main()
{
    int arr[] = {7, 12, 9, 11, 3};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(int j=0; j<len; j++)
    {
        printf("%d ",arr[j]);
    }
}
