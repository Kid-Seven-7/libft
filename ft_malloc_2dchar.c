char **ft_malloc_2dchar(int y, int x)
{
  char **grid;
  grid = (char **) ft_memalloc(sizeof(grid) * y);
  int i = 0;
  while(i < y)
  {
     grid[i] = (char *) ft_memalloc(sizeof(char) * x);
     i++;
  }
}
