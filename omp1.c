/* Hello world program using OpenMP */

#include<stdio.h>
#include<conio.h>
#include "omp.h"

int main()
{
    printf("Total number of threads allocated in the parellel section %d \n", omp_get_num_threads() );
    #pragma omp parallel
    {
        printf("Hello world from thread %d \n",omp_get_thread_num());
    }
}