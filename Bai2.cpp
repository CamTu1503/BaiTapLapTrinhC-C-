#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

void countAndPrintPerfectSquares(int n) {
    int count = 0;
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong nho hon %d la: %d\n", n, count);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
    } else {
        countAndPrintPerfectSquares(n);
    }

    return 0;
}
