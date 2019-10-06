#include <unistd.h>

int my_putchar(const char c)
{
	write(1, &c, 1);
}

void tree(const int size);

int main()
{
	tree(15);
}