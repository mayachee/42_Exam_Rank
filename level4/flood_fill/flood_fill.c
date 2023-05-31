
typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void    fill(char **tab, t_point size, t_point cuz, char p_fill)
{
    if (cuz.y < 0 || cuz.y >= size.y
        || cuz.x < 0 || cuz.x >= size.x 
        || tab[cuz.y][cuz.x] != p_fill)
        return ;
    tab[cuz.y][cuz.x] = 'F';
    fill(tab, size, (t_point){cuz.x - 1, cuz.y}, p_fill);
    fill(tab, size, (t_point){cuz.x + 1, cuz.y}, p_fill);
    fill(tab, size, (t_point){cuz.x, cuz.y - 1}, p_fill);
    fill(tab, size, (t_point){cuz.x, cuz.y + 1}, p_fill);

}
void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}