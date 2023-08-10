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
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
