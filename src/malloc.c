/*
** EPITECH PROJECT, 2021
** hezder
** File description:
** epitech
*/

#include "../include/include.h"


size_t round_getpagesize(size_t size)
{
    int totalPage = (size + getpagesize() - 1)/ getpagesize();
    int total_size = totalPage * getpagesize();
    return (total_size);
}

void *malloc(size_t size)
{
    void *ptr;
    if (!size)
        return (NULL);
    int pages = round_getpagesize(size) * 2;
    ptr = sbrk(0);
    if (ptr == (void*)-1) return NULL;
    ptr = sbrk(pages);
    if (ptr == (void*)-1) return NULL;
    return ptr;
}

void *calloc(size_t nmemb, size_t size)
{
    char *str = malloc(nmemb * size);   
    if (str == NULL)
        return (NULL);
    else {
        while (size > 0) {
            str[size] = 0;
            size--;
        }
        return (str);
    }
}

void *realloc(void *ptr, size_t size)
{
    void *pointer;
    if (size > 0 && ptr == NULL) {
        pointer = malloc(size);
        return pointer;
    }
    else
        free(ptr);
}