//write an op mp program to transform each element with A[i]=3*A[i]+2 using #pragma omp parallel for schedule(dynamic, 2) then switch to static,2 int A1[6]={1,2,3,4,5,6} for dynamic and this A2[6]={1,2,3,4,5,6} for static
#include <stdio.h>
#include <omp.h>

int main() {
    int A1[6] = {1, 2, 3, 4, 5, 6};
    int A2[6] = {1, 2, 3, 4, 5, 6};


    #pragma omp parallel for schedule(dynamic, 2)
    for (int i = 0; i < 6; i++) {
        A1[i] = 3 * A1[i] + 2;
    }

    printf(" after dynamic scheduling: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", A1[i]);
    }
    printf("\n");

    #pragma omp parallel for schedule(static, 2)
    for (int i = 0; i < 6; i++) {
        A2[i] = 3 * A2[i] + 2;
    }

    printf(" static scheduling: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", A2[i]);
    }
    printf("\n");

    return 0;
}
