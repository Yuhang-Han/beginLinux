#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	struct tm *tm_ptr;
	time_t the_time;

	(void) time(&the_time);
	tm_ptr = gmtime(&the_time);

	printf("Raw time is %ld\n", the_time);
	printf("gmtime gives:\n");
	printf("date: %03d/%02d/%02d\n",
		tm_ptr->tm_year, tm_ptr->tm_mon+1, tm_ptr->tm_mday);
	printf("time: %02d:%02d:%02d\n",
		tm_ptr->tm_hour, tm_ptr->tm_min, tm_ptr->tm_sec);

	struct tm *ltm_ptr;
	ltm_ptr = localtime(&the_time);

	printf("localtime gives:\n");
	printf("date: %03d/%02d/%02d\n",
		ltm_ptr->tm_year, ltm_ptr->tm_mon+1, ltm_ptr->tm_mday);
	printf("time: %02d:%02d:%02d\n",
		ltm_ptr->tm_hour, ltm_ptr->tm_min, ltm_ptr->tm_sec);
}
