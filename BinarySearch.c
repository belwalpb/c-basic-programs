#include <stdio.h>

int main() {
    int n=5;
    int array[5];
    int i,x;

    printf("Please enter the elements of sorted array.\n");

    for(i=0;i<n;i++) {
        printf("Enter the element at index %d\n", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the element, which you want to search\n");
    scanf("%d", &x);

    int low=0, high=n-1, index= -1;

    while(low <= high) {
        int mid= (low+high)/2;

        if(array[mid]==x) {
            index= mid;
            break;
        }
        else if(array[mid] > x) {
                high= mid-1;
        }
        else {
            low = mid + 1;
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
