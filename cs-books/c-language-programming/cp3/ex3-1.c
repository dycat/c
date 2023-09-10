/*
    ex 3-1 Write a version with only one test inside the loop and measure the difference in run-time.
*/

int bisearch(int x, int v[], int n) {
    int low = 0, high = n -1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid + 1;
        }  else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;

}