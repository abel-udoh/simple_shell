#include "shell.h"
/**
 * clear_info - initializes info_t struct
 * @info: struct adress
 */
void clear_info(info_t *info)
{
	 info->arg = NULL;
         info->argv = NULL;
	 info->path = NULL;
	 info->argc = 0;
}
/**
 * set_info - initializes info_t struct
 * @info: struct address
 * @av: argument vector
 */
void set_info(info_t *info, char **av)
{
	int i = 0;
	
	info->fname = av[o];
	if (info->arg)
	{
		info->argv[0] = malloc(sizeof(char *) * 2);
		if (info->argv
		

