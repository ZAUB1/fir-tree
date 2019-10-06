#include <unistd.h>
#include <stdlib.h>

int my_putchar(const char c)
{
    write(1, &c, 1);
}

void tree(const int size);

int main(int argc, char *argv[])
{
    tree(atoi(argv[1]));
}