#include<omp.h>
#include<stdio.h>

int main() {
    int w=10;
    #pragma omp parallel // Cria Threads pro proximo statement
    #pragma omp for
    // #pragma omp private(w)
    for(int i=0;i<100;i++) {
        int id = omp_get_thread_num();
        printf("T%d:i%d w=%d\n", id, i, w++);
    }
    printf("w=%d\n", w);
    return 0;
}