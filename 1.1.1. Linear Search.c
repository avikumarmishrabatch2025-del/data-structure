#include <stdio.h>

int main() {
    int n, a[100], x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);   // element to search

    int found = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Element found at index %d", found);
    else
        printf("Element not found");

    return 0;
}
