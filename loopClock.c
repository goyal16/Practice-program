#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()
int main(){
	int i,a=2,b=1;
	clock_t begin = clock();
    for(i=0;i<1000;i++)
	 {
		printf("GIT");
	 }

    clock_t end = clock();
    double loop_time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\ntime duration is: %d",loop_time);
	
	return 0;
}
