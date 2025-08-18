//write an open mp program which launches a parralel region and it has each tread print its id and team size 

#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        
        printf("Thread ID: %d, Team Size: %d\n", omp_get_thread_num(), omp_get_num_threads());
    }
    return 0;
}

