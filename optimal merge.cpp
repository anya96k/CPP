#include <stdio.h>
#include <stdlib.h>


int optimalMerge(int arr[], int n) {
    int minCost = 0;

  
    while (n > 1) {
       
        int smallest1 = 0, smallest2 = 1;
        if (arr[smallest1] > arr[smallest2]) {
            int temp = smallest1;
            smallest1 = smallest2;
            smallest2 = temp;
        }

        
        for (int i = 2; i < n; i++) 
		{
            if (arr[i] < arr[smallest1]) {
                smallest2 = smallest1;
                smallest1 = i;
            } else if (arr[i] < arr[smallest2]) {
                smallest2 = i;
            }
        }

    
        int mergeCost = arr[smallest1] + arr[smallest2];
        minCost += mergeCost;

        
        arr[smallest1] = mergeCost;
        arr[smallest2] = arr[n - 1];

     
        n--;
    }

    return minCost;
}

int main() {
    int arr[] = {4, 2, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minCost = optimalMerge(arr, n);
    printf("Minimum cost of merging is: %d\n", minCost);

    return 0;
}

