#include<stdio.h>
#include<errno.h>

int main(void)
{
    FILE *fd = NULL;

    // Reset errno to zero before calling fopen().
    //errno = 0;

    // Lets open a file that does not exist   
    fd = fopen("Linux.txt","r");
    if(errno || (NULL == fd))
    {
        perror("no file");
        printf("\n fopen() failed\n %d \n", errno);
    } else {
	fclose(fd);
    }

    return 0;
}
