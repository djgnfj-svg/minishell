#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av, char **env)
{
	printf("test");
	for(int i =0; i < 10; i++)
		printf("%s\n",env[i]);
	return (0);
}