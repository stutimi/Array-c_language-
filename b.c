#include <stdio.h>

int canMakeBeautiful(int N, int X, int Y) {
    // Check if it's possible to decorate the tree according to the conditions
    if ((N % 4 == 0 && 2 * X >= Y) || (N % 4 == 1 && 2 * (X - 1) >= Y) || (N % 4 == 2 && 2 * (X - 2) >= Y) || (N % 4 == 3 && 2 * (X - 3) >= Y)) {
        return 1; // YES
    } else {
        return 0; // NO
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        // Output YES if it's possible, otherwise NO
        if (canMakeBeautiful(N, X, Y)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

 return 0;
}