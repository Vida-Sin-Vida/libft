#include "libft.h"

void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    int i;
    int j;

    i = -1;
    j = -1;
    while (size--)
    {
        if (memoryBlock[++i] == searchedChar)
            while (memoryBlock[i])
                memoryBlock[++j] = memoryBlock[i];
            break;
    }
    memoryBlock[j] = '\0';
}