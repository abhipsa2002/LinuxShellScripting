#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	fd = open("file.txt",666);
	if(fd==-1)
	{
		perror("file doesn't exist");
		return 1;
	}
	printf("open and read : %d",fd);
	close(fd);
	return 0;
}
	
