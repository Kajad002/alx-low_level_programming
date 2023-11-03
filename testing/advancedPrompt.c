#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream) {
    if (lineptr == NULL || n == NULL || stream == NULL) {
        errno = EINVAL;
        return -1;
    }

    if (*lineptr == NULL) {
        *n = 120;
        *lineptr = malloc(*n);
        if (*lineptr == NULL) {
            errno = ENOMEM;
            return -1;
        }
    }

    size_t pos = 0;
    int c;

    while ((c = fgetc(stream)) != EOF) {
        if (pos + 1 >= *n) {
            size_t new_size = *n + (*n >> 2);
            char *new_ptr = realloc(*lineptr, new_size);
            if (new_ptr == NULL) {
                errno = ENOMEM;
                return -1;
            }
            *n = new_size;
            *lineptr = new_ptr;
        }

        (*lineptr)[pos++] = c;
        if (c == '\n') {
            break;
        }
    }

    if (pos == 0) {
        return -1;
    }

    (*lineptr)[pos] = '\0';
    return pos;
}

int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    printf("$ ");
    while ((nread = my_getline(&line, &len, stdin)) != -1) {
        printf("%s", line);
        printf("$ ");
    }

    free(line);
    return 0;
}
