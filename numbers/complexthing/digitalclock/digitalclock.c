#include <linux/limits.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
	//digital clock
	
	time_t rawtime = 0; // January 1 of 1970 (epoch)
	struct tm *pTime = NULL;
	bool isRunning = true;

	printf("Digital CLock\n");

	while (isRunning) {

		time(&rawtime);
		//printf("%ld\n", rawtime);
		pTime = localtime(&rawtime);
		printf("%02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

		sleep(1);
	
	}


return 0;
}
