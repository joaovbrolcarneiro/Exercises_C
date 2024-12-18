int max(int* tab, unsigned int len)
{
    if (len == 0)
        return (0);

    int res = tab[0];
    unsigned int i = 0;
    
    // Using while loop instead of for loop
    while (i < len)
    {
        if (res < tab[i])
            res = tab[i];
        i++;
    }
    
    return (res);
}
