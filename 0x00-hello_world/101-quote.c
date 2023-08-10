#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Description: 'print without printf or puts using syscall function'
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, msg, sizeof(msg));	
	return (1);
}
