public:
// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.

long long merge(long long *arr, int n, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    long long *first = new long long[len1];
    long long *second = new long long[len2];

    // Copying values to the first size array
    int originalIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[originalIndex++];
    }

    // Copying values to the second size array
    originalIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[originalIndex++];
    }

    // Merging the two arrays
    int index1 = 0;
    int index2 = 0;
    originalIndex = s;
    long long count = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[originalIndex++] = first[index1++];
        }
        else
        {
            arr[originalIndex++] = second[index2++];
            count += len1 - index1; // Count the inversions
        }
    }

    // Copy remaining elements from the first array (if any)
    while (index1 < len1)
    {
        arr[originalIndex++] = first[index1++];
    }

    // Copy remaining elements from the second array (if any)
    while (index2 < len2)
    {
        arr[originalIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

    return count;
}

long long mergeSort(long long *arr, int n, int s, int e)
{
    if (s >= e)
        return 0;

    int mid = s + (e - s) / 2;

    // Left part of the array
    long long count = mergeSort(arr, n, s, mid);

    // Right part of the array
    count += mergeSort(arr, n, mid + 1, e);

    count += merge(arr, n, s, e);

    return count;
}

long long int inversionCount(long long arr[], int n)
{
    return mergeSort(arr, n, 0, n - 1);
}
