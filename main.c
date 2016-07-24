#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main (
    int    argc,        /* number of arguments */
    char * argv[]       /* array of arguments */
    )
{
    pid_t pid;

    pid = fork( );

    if( pid >= 0 )
    {
        if( pid == 0 )
        {
            printf( "Child process spawned (%d)...\n", getpid( ) );
        }
        else
        {
            printf( "Parent here (%d)...\n", getpid( ) );
        }
    }

    sleep( 5 );

    return 0;
}

