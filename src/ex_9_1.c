#include <stdio.h>

int main(void){
    float a[2][2];
    
    for (int i = 0; i < 2; i++) {
        scanf("%f %f", &a[i][0], &a[i][1]);
    }
    
    for (int j = 0; j < 2; j++) {
        float ans = (a[j][0] + a[j][1]) / 2;
        printf("%.1f\n", ans);
    }
}
