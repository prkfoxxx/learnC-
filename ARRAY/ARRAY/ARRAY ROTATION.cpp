//
//  ARRAY ROTATION.cpp
//  ARRAY
//
//  Created by Priyansh Kumar on 11/05/18.
//  Copyright © 2018 Priyansh Kumar. All rights reserved.
//

// C++ program to rotate an array by
// d elements
#include <iostream>
using namespace std;

/*Function to left Rotate arr[] of
 size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    int i;
    for(i = 0; i < n-1; i++)
        arr[i] = arr[i+1];
    
    arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Function calling
    leftRotate(arr, 2, n);
    printArray(arr, n);
    
    return 0;
}
