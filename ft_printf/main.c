#include "srcs/ft_printf.h"


int main()
{
    int i = 10;
    int *j = &i;

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
    ft_printf("-----------------AQUI EMPIEZA LA PRUEBA DE VERDAD-----------------\n");
    ft_printf("La longitud con ft_printf: %d\n", ft_printf("esto es un string que acaba en espacio \n"));
    ft_printf("La longitud con printf: %d\n", ft_printf("esto es un string que acaba en espacio \n"));
    ft_printf("La longitud de Decimal con ft_printf: %d\n", ft_printf("%d\n", 123457));
    ft_printf("La longitud de Decimal con printf: %d\n", printf("%d\n", 123457));
    ft_printf("La longitud de Int con ft_printf: %d\n", ft_printf("%i\n", 10928476));
    ft_printf("La longitud de Int con printf: %d\n", printf("%i\n", 10928476));
    ft_printf("La longitud de Char con ft_printf: %d\n", ft_printf("%c\n", 'h'));
    ft_printf("La longitud de Char con printf: %d\n", printf("%c\n", 'h'));
    ft_printf("La longitud de String con ft_printf: %d\n", ft_printf("%s\n", "la imprenta"));
    ft_printf("La longitud de String con printf: %d\n", printf("%s\n", "la imprenta"));
    ft_printf("La longitud de Unsigned con ft_printf: %d\n", ft_printf("%u\n", 429496729));
    ft_printf("La longitud de Unsigned con printf: %d\n", printf("%u\n",429496729));
    ft_printf("La longitud de Hex con ft_printf: %d\n", ft_printf("%x\n", "69"));
    ft_printf("La longitud de Hex con printf: %d\n", ft_printf("%x\n","69"));
    ft_printf("La longitud de Pointer con ft_printf: %d\n", ft_printf("%p\n", j));
    ft_printf("La longitud de Pointer con printf: %d\n", printf("%p\n", j));
    ft_printf("-----------------AQUI EMPEZAMOS CON %s-----------------\n", "%%");
    ft_printf("ft_printf->   %% aqui %%%% comiendo %%%%%% webos %%%%%%%% cocidos\n");
    printf("printf->   %% aqui %%%% comiendo %%%%%% webos %%%%%%%% cocidos\n");
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