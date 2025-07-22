#include <stdio.h>

int common_elements(int arr1[], int n1, int arr2[], int n2, int arr3[]);

int main() {
    int n1, n2;
    
    printf("\nEnter size of array 1: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("\nEnter elements of Array 1: ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("\nEnter size of array 2: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("\nEnter elements of Array 2: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int max = (n1 > n2) ? n1 : n2;
    int arr3[max];  // result array

    printf("\nThe common elements of the arrays are: ");
    int noe = common_elements(arr1, n1, arr2, n2, arr3);

    if (noe == 0) {
        printf("None");
    } else {
        for (int i = 0; i < noe; i++)
            printf("%d\t", arr3[i]);
    }

    return 0;
}

int common_elements(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                
                int already_added = 0;
                for (int m = 0; m < k; m++) {
                    if (arr3[m] == arr1[i]) {
                        already_added = 1;
                        break;
                    }
                }
                if (!already_added)
                    arr3[k++] = arr1[i];
            }
        }
    }
    return k;
}

