#include <stdio.h>

int main() {
    int n, a[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        int TEMP = a[i];
        a[i] = a[min];
        a[min] = TEMP;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
