#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* alloc_grid -  returns a pointer to a 2 dimensional array of integers
* @width: int width
* @height: int height
*
* Return: arr
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
		for (i--; i >= 0; i--)
		free(arr[i]);
		free(arr);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
