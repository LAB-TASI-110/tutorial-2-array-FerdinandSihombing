#include <stdio.h>
#include <limits.h> 
#include <float.h>  

int main() {
    int n;
    
    scanf("%d", &n);

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    double min_avg = DBL_MAX; 

    int prev_val;
    int current_val;

    for (int i = 0; i < n; i++) {
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
        }
        
        prev_val = current_val;
    }

    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
    if (n >= 2) {
        printf("%.2f\n", min_avg);
    } 

    return 0;
}
