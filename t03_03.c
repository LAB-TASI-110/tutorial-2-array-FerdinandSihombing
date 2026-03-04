#include <stdio.h>
#include <limits.h> 
#include <float.h>  

int main() {
    int n;
    
    printf("Masukkan jumlah N: ");
    scanf("%d", &n);

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    double min_avg = DBL_MAX; 
    double max_avg = DBL_MIN; 

    int prev_val;
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

        if (i > 0) {
            double current_avg = (double)(prev_val + current_val) / 2.0;
            if (current_avg < min_avg) {
                min_avg = current_avg;
            }
            if (current_avg > max_avg) { 
                max_avg = current_avg;
            }
        }
        
        prev_val = current_val;
    }

    printf("\n--- Hasil Analisis ---\n");
    printf("Nilai Terkecil: %d\n", min_val);
    printf("Nilai Terbesar: %d\n", max_val);
    
    if (n >= 2) {
        printf("Rata-rata Terendah dari Pasangan: %.2f\n", min_avg);
        printf("Rata-rata Tertinggi dari Pasangan: %.2f\n", max_avg); 
    } else {
        printf("Tidak ada pasangan nilai yang cukup untuk menghitung rata-rata.\n");
    }

    return 0;
}
