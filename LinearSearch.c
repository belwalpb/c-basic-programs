#include <stdio.h>



int main() {
    int n=5;
    int array[5];
    int i,x;

    printf("Please enter the elements of array.\n");

    for(i=0;i<n;i++) {
        printf("Enter the element at index %d\n", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the element, which you want to search\n");
    scanf("%d", &x);

    int index = -1;

    for(i=0;i<n;i++) {
        if(array[i] == x) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("Element not found in array\n");
    }
    else {
        printf("Element is found at index: %d\n", index);
    }

    return 0;

}
