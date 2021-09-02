# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <termcap.h>

// extern char **environ;

// int main(int ac, char **av)
// {
// 	char *cmds;
// 	printf("%s\n",getcwd(cmds,1024));
// 	return 0;

// 	// char **new_av;
// 	// char command[] = "ls";
// 	// int idx;

// 	// new_av = (char **)malloc(sizeof(char *) * (ac + 1));
// 	// new_av[0] = command;
// 	// for (idx = 1; idx < ac; idx++){
// 	// 	new_av[idx] = av[idx];
// 	// }

// 	// new_av[ac] = NULL;
// 	// if(execve("/bin/ls", new_av, environ) == -1){
// 	// 	fprintf(stderr, "프로그램 실행 error : %s\n", strerror(errno));
// 	// 	return 1;
// 	// }
// 	// printf("이곳이 이제 ls 명령어라 이 라인은 출력이 되지 않습니다.\n");
// 	// return 0;
// }

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	pid_t pid;
    
    pid = fork();
    if (pid == 0)
    {
        printf("자식 프로세스\n");
		exit(0);  
    }
    if (pid > 0)
    {
		printf("Wait\n");
        wait(NULL);
        printf("Exit\n");
    }
	return 0;
}