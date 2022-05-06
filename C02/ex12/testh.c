
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_hexa_addr(long int addr)
{
	int     i;
	int long	p;
	int j;
	char tab[15];
        char *base_hexa;
 
        base_hexa = "0123456789abcdef";
		printf("%ld\n", addr);
	j = 0;
        i = 0;
	p = addr;
        while (p > 10)
        {
                p = p / 16;
		printf("%ld\n", p);
                i++;
        }
        while (i >= 0)
        {
                 tab[j]	= base_hexa[addr % 16];				//  printf("%c", base_hexa[addr % 16]);
                 addr = addr / 16;
                 i--;
		j++;
        }
	printf("%s", tab);
}

int main()
{
	int a;
	printf("%p\n", &a);
	ft_hexa_addr((long int) &a);
}
