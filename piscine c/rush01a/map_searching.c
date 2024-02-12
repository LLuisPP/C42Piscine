#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

struct s_square {
	int x;
	int y;
	int length;
};

int get_file_size(char *file_name)
{
	int fd;
	int bytes_readed;
	char c;	
	int char_count;

	char_count = 0;
	bytes_readed = 1;
	fd = open(file_name, O_RDONLY);
	if (!fd)
	{
		close(fd);
		return (0);
	}
	while(bytes_readed != 0)
	{
		bytes_readed = read(fd, &c, 1);
   		char_count++;
	}
	close(fd);
	return (char_count);
}

int read_map_file(char *file_name, char *map, int size_file)
{
	int fd;
	int bytes_readed;

	bytes_readed = 0; 
	fd = open(file_name, O_RDONLY);
	if(!fd)
		return (0);
	bytes_readed = read(fd, map, size_file);
	if(bytes_readed != size_file)
	{
		close(fd);
		return (0);
	}
	map[size_file] = '\0';
	return (1);
}
//int valid_sqr()
//in
//
void print_map(char *map)
{
	int i;
	int j;

	i = 0;
	while (map[i] != '\0')
	{
		write(1, map + i, 1);
		i++;
	}
}

int bsq_search(char *map)
{
	int i;
	struct s_square *bsq;
	struct s_square *bsq_aux;

	i = 0;  
	//Generar square
	//Si es valido
	//Confirmar si es mas grande
	//Si lo es sustituyo el actual 
	i++;
}

int bsq_with_file_name(char *file_name)
{
	int n_chars;
	char *map;
	int control;
	n_chars = get_file_size(file_name);
	map = (char *) malloc(n_chars * sizeof(char) + 1);
	if((!map) || (!n_chars))
	{
		free(map);
		return (0);
	}
	read_map_file(file_name, map, n_chars);
	print_map(map);

	free(map);
}
int main(int argc, char **argv)
{
	bsq_with_file_name(argv[1]);
}
