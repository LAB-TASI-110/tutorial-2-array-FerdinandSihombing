#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    
    printf("Masukkan jumlah N: ");
    scanf("%d", &n);

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    int current_val;

    for (int i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &current_val);

        if (current_val < min_val) {
            min_val = current_val;
        }
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    printf("\n--- Hasil Analisis ---\n");
    printf("Nilai Terkecil: %d\n", min_val);
    printf("Nilai Terbesar: %d\n", max_val);
    
    return 0;
}
