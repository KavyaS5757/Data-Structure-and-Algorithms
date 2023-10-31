void pushZerosToEnd(int arr[], int n) {
    int count = 0; // Initialize a variable to keep track of the number of non-zero elements.

    // Traverse the array and move non-zero elements to the front.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i]; // Move the non-zero element to the current count index.
            count++;
        }
    }

    // Fill the remaining positions with zeros.
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

/*
https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
*/
