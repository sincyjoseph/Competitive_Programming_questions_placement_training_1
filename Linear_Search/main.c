//Linear search program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {100, 5, 201, 13, 5, -8, 12, -8, 3, -8};
    int i, key, position = -1;
    int arr_size = sizeof(arr)/sizeof(int);
    printf("The elements of array are: \n");
    for(i = 0; i < arr_size; i++){
        printf("arr[%d] = %d \n", i,arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    //logic for linear search
    for(i = 0; i < arr_size; i++){
        if(key == arr[i]){
            position = i;
            break;
        }
    }
    if(position == -1)
        printf("The element %d is not present\n", key);
    else
        printf("The element %d is available at position %d \n", key,position);
}
