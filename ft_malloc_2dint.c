char **ft_malloc_2dchar(int y, int x)
{
  int **grid;
  grid = (int **) ft_memalloc(sizeof(grid) * y);
  int i = 0;
  while(i < y)
  {
     grid[i] = (int *) ft_memalloc(sizeof(int) * x);
     i++;
  }
}
