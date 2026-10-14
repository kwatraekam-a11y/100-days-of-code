//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output
#include <stdio.h>

int main() {
    int nums[100];
    int n, target;
    int first = -1, last = -1;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {

            if (first == -1) {
                first = i;
            }

            last = i;
        }
    }

    printf("%d, %d\n", first, last);

    return 0;
}