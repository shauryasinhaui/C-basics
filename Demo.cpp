#include <stdio.h>
#include <limits.h>

int maxProduct(int a[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (a[i] > max1) { max3 = max2; max2 = max1; max1 = a[i]; }
        else if (a[i] > max2) { max3 = max2; max2 = a[i]; }
        else if (a[i] > max3) { max3 = a[i]; }

        if (a[i] < min1) { min2 = min1; min1 = a[i]; }
        else if (a[i] < min2) { min2 = a[i]; }
    }

    int p1 = max1 * max2 * max3;
    int p2 = max1 * min1 * min2;

    return (p1 > p2) ? p1 : p2;
}











#include <stdio.h>

int main() {
    int n, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   // store original number

    while (n > 0) {
        rev = rev * 10 + n % 10;  // add last digit to rev
        n = n / 10;               // remove last digit
    }

    printf("Reversed number: %d\n", rev);

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
