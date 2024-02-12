#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

struct square {
	int x;
	int y;
	int length;
}

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

int read_map_file(char *file_name, int size_file)
{
	int char_count;
	int fd;
	int bytes_readed;
	char *map;

	bytes_readed = 0; 
	fd = open(file_name, O_RDONLY);
	if(!fd)
	{
		close(fd);
		return (0);
	}
	map = (char *) malloc(size_file * sizeof(char) + 1);
	if(!map)
	{
		close(fd);
		free(map);
		return (0);
	}
	bytes_readed = read(fd, map, size_file);
	map[size_file] = '\0';
	//write(1, map, size_file);
	if(bytes_readed != size_file)
	{
		close(fd);
		free(map);
		return (0);
	}
	return (1);
}

int sqr_creator(char *map, struct square bsq)
{
	bsq.x = 
	while(map[i])	
}

//int valid_sqr()
//in
//

int bsq_search(char *map)
{
	int i;
	struct square *bsq;
	struct square *bsq_aux;

	i = 0;  
	while (map[i] != '\0')
	{
		//Generar square
		sqr()
		//Si es valido
		//Confirmar si es mas grande
		//Si lo es sustituyo el actual 
		i++;
	}
}
/*
int main(int argc, char **argv)
{
	int n_chars;
	n_chars = get_file_size(argv[1]);

	printf("%d", n_chars);
	read_map_file(argv[1], n_chars);
}*/
