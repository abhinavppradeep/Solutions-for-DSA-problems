

int bsfloor(int arr[], int x, int start, int end) {
    int floor = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            return arr[mid];
        } else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            floor = arr[mid];
            start = mid + 1;
        }
    }
    return floor;
}

int bsceil(int arr[], int x, int start, int end) {
    int ceil = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            return arr[mid];
        } else if (arr[mid] < x) {
            start = mid + 1;
        } else {
            ceil = arr[mid];
            end = mid - 1;
        }
    }
    return ceil;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr + n);
    int floor = bsfloor(arr, x, 0, n - 1);
    int ceil = bsceil(arr, x, 0, n - 1);
    return make_pair(floor, ceil);
}