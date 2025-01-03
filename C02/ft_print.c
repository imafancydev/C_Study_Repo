#include <unistd.h>
#include <stdarg.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char   ft_putstr(char *str)
{
        if (!str)
            return (write(1, "(null)", 6));
        while(*str)
            ft_putchar(*str++);
}

int    ft_putnbr(int num)
{
    if (num == -2147483648)
        ft_putstr("-2147483648");
    if (num < 0)
    {
        ft_putchar('-');
        num *= -1;
        ft_putnbr(num);
    }
    if (num >= 0 && num <= 9)
    {
        ft_putchar(num + '0');
    } else {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
}

int     ft_printf(const char *type, ... )
{
    va_list ap;
    char c, *str;
    int num;

    va_start(ap, type);
    while (*type) {
        if (*type == 's') {
            str = va_arg(ap, char *);
            ft_putstr(str);
            return 0;
        } else if (*type == 'i') {
            num = va_arg(ap, int);
            ft_putnbr(num);
            return 0;
        }
        *type++;
    }
}

int main(void)
{
    ft_printf("%s", "Hello World");
}