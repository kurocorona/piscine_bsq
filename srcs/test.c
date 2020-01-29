
// C code for Maximum size square
// sub-matrix with all 1s
#include<stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>
#define bool int
#define R 6
#define C 5
/* UTILITY FUNCTIONS */
/* Function to get minimum of three values */
int min(int a, int b, int c)
{
	int m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return m;
}
void printMaxSubSquare(char **original_map, int fd)
{
	int i,j;
	int **int_map;
	int max_size, max_x, max_y;


	while (i < )
	{
		[i][0] = board[i][0];
		i++;
	}

	// while (j < side)
	// {

	// }
	/* Set first column of copy_map[][]*/
	for(i = 0; i < R; i++)
		copy_map[i][0] = original_map[i][0];

	/* Set first row of copy_map[][]*/
	for(j = 0; j < C; j++)
		copy_map[0][j] = original_map[0][j];

	/* Construct other entries of copy_map[][]*/
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			if(original_map[i][j] == 1)
				copy_map[i][j] = min(copy_map[i][j-1], copy_map[i-1][j], copy_map[i-1][j-1]) + 1;
			else == 0
				copy_map[i][j] = 0;
			else
				error
		}
	}

	/* Find the maximum entry, and indexes of maximum entry
		in copy_map[][] */
	max_of_s = copy_map[0][0];
	max_i = 0;
	max_j = 0;
	for(i = 0; i < R; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(max_of_s < copy_map[i][j])
			{
				max_of_s = copy_map[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	char c;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (copy_map[i][j] == 0)
			{
				c = 'o';
				write(fd, ob, 1);
			}
			else if (((max_i - max_of_s) < i && i <= max_i) &&
			((max_j - max_of_s) < j && j <= max_j))
			{
				c = 'x';
				write(fd, , 1);
			}
			else
			{
				c = '.';
				write(fd, &c, 1);
			}
		}
		c = '\n';
		write(fd, &c, 1);
	}
}

/* Driver function to test above functions */
int main()
{
	int fd;

	fd = open("./output.txt", O_RDWR);
	bool original_map[R][C] = {{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 0, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1}};
	printMaxSubSquare(original_map, fd);
}
