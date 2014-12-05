#include <stdio.h>
#include <sys/time.h>

const int M = 1000000;
const int N = 20;
static char a[M][N];

int main()
{
	int row, col;
	long long sum = 0;
	struct timeval start;
	struct timeval mid;
	struct timeval end;
	
	gettimeofday(&start, NULL);
	for(row = 0; row < M; ++row)
	{
		for(col = 0; col < N; ++col)
		{
			sum += a[row][col];
		}
	}

	sum = 0;	
	gettimeofday(&mid, NULL);
	for(col = 0; col < N; ++col)
	{
		for(row = 0; row < M; ++row)
		{
			sum += a[row][col];
		}
	}
	
	gettimeofday(&end, NULL);

	printf("start: %d\t%d\n", start.tv_usec, start.tv_sec);
	printf("mid: %d\t%d\n", mid.tv_usec, mid.tv_sec);
	printf("end: %d\t%d\n", end.tv_usec, end.tv_sec);
	return 0;
}
