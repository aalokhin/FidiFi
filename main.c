#include "fdf.h"








int				main(int argc, char **argv)
{
	int			fd;

	if (argc != 2)
		ft_putendl("Usage : ./fdf <filename> [ case_size z_size ]");
	fd = open(argv[1], O_RDONLY);
	return (0);
}