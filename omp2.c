/* OpenMP code to set the number of threads */

#include <stdio.h>
#include <omp.h>
 
int main ()  
{
   int nthreads = 4;
   omp_set_num_threads(nthreads);

   #pragma omp parallel
   {
      int id = omp_get_thread_num();

      printf("This is run by thread = %d", id);
      printf(" with %d threads\n",omp_get_num_threads());
   }  

   printf("all done, with hopefully %d threads\n",nthreads);

}


/* 

#include <stdio.h>
#include <omp.h>

int main(){
    //define loop iterator variable outside parallel region
    int i;
    int thread_id;

    #pragma omp parallel private(thread_id)
    {
        thread_id = omp_get_thread_num();

        //create the loop to have each thread print hello.
        for(i = 0; i < omp_get_max_threads(); i++){
            printf("Hello from process: %d\n", thread_id);
        }
    }
    return 0;
}
*/