#include "srcs/ft_printf.h"


int main()
{
    ft_printf("PORCENTAJE->   %%\n");
    ft_printf("INT->   %d\n", 42);
    ft_printf("CHAR->   %c\n", 'c');
    ft_printf("STRING->   %s\n", "taba despistado");
    ft_printf("INT->   %u\n", 84);
    ft_printf("HEXA->   %x\n", 15);
    ft_printf("POINTER->   %p\n", 42);
    ft_printf("\n -----ESTE ES UN TEST CON VARIOS %%-----\n %d\n", ft_printf("%c hasta las tantas %s", 'y', "ya maniana retrasare la alarma\n"));
    ft_printf("TEST TL1->   %d\n", printf("%d\n", 192365192));
    ft_printf("TEST TL2->   %d\n", printf("%x\n", 192));
    ft_printf("TEST TL3->   %d\n", printf("%s\n", "webos cocidos"));
    ft_printf("TEST TL4->   %d\n", printf("%c\n", 'c'));
    //system("leaks a.out");
    return(0);
}

/*
int main(void)
{
	printf("\n|SIZE ft_pr: %d|", ft_printf("!%d!\n", 0));
	printf("\n|SIZE pr: %d|\n", printf("!%d!\n", 0));
//	printf("\n///////////////////////////////////////////\n");
//	printf("\n|SIZE ft_pr: %d|", ft_printf(" ft_pr: !%d! \n", -1));
//	printf("\n|SIZE pr: %d|", printf("pr: !%d!\n", -1));
	return (0);
}*/