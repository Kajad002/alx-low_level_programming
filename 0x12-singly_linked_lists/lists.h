#ifndef LISTS_H
#define LISTS_H

#ifndef STRUCT_LIST_S
#define STRUCT_LIST_S
#include <stdio.h>
#include <stddef.h>

struct node;
{
	char *str;
	struct node *list_s
} ;
int _putchar(char c);

/*size_t print_list(const list_t *h);*/
/*size_t print_list(const list_t *h);*/


typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

typedef struct list_s {
    char *str;
    size_t len;
    struct list_s *next;
} list_t;

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) pre_main_message(void);
#endif /* LISTS_H */
