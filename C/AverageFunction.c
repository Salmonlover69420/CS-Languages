/*
Write a c program using the following functions: 
float ComputeAverage(int arr[], int size) 
int countGreaterThanValue(int arr[], int size, float value) 
1. Function: ComputeAverage Calculates and returns the average of the array elements. Must use return, must not print anything 
2. Function: countGreaaterThanValue Takes an array, its size, and a value, and counts how many elements are strictly greater than the given value. 
Returns the count 
3. Main program must: Declare an array of integers, asks the user to enter the size and elements. 
Call the computerAverage function first, then pass the result to countGreaterThanValue.
It must display the average and the number of elements greater than the average
*/
#include <stdio.h>

float computeAverage(int arr[], int size);
int countGreaterThanValue(int arr[], int size, float value);

int main() {
    int i, size, A[100], n;
    float average;

    printf("enter the size of the array: ");
    scanf("%i", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i <size; i++) {
        scanf("%d", &A[i]);
    }
    
    average = computeAverage(A, size);

    n = countGreaterThanValue(A, size, average);

    printf("The average is %f", average);
    printf("The number of elements > value is: %i", n);

    return 0;
}

float computeAverage(int arr[], int size) {
    float sum = 0, average;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    average = (float)sum/size;
    
    return average;
}

int countGreaterThanValue(int arr[], int size, float value) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > value) {
            count += 1;
        }
    }

    return count;
}
