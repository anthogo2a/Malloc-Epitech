/*
** EPITECH PROJECT, 2021
** include_projet
** File description:
** PSU_malloc
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#ifndef malloc_project
#define malloc_project

void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void* ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

#endif /* !malloc_project */
