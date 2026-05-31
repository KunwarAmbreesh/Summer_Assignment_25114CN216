#include <stdio.h>

int main() {
    int start, end, i;
    
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    
    for (i = start; i <= end; i++) {
        int temp = i;
        int sum = 0;
        
        while (temp > 0) {
            int rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        
        if (sum == i) {
            printf("%d ", i);
        }
    }
    
    return 0;
}