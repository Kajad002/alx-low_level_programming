#include "mmain.h"
#include "main.h"

void print_prompt() {
    write(STDOUT_FILENO, PROMPT, sizeof(PROMPT)-1);
}

/* Function to read a command from the user */
void read_command(char **cmd) {
    size_t len = 0;
    /* If getline returns -1, it means end of file (Ctrl+D) was encountered */
    if (getline(cmd, &len, stdin) == -1) {
        write(STDOUT_FILENO, "\n", 1);
        exit(0);
    }
}

/* Function to execute a command */
void execute_command(char *cmd, char **envp) {
    char *args[] = {cmd, NULL};  /* Arguments for execve (only the command itself) */
    /* If execve returns -1, it means the command could not be executed */
    if (execve(cmd, args, envp) == -1) {
        write(STDERR_FILENO, ERROR_MSG, sizeof(ERROR_MSG)-1);
    }
}

/* Main function */
int main(int argc, char **argv, char **envp) {
    char *cmd = NULL;  /* Command string */

    (void) argc;
    (void) argv;

    while (1) {  /* Main loop */
        print_prompt();  /* Print the shell prompt */
        read_command(&cmd);  /* Read a command from the user */
        cmd[strcspn(cmd, "\n")] = 0;  /* Remove trailing newline from the command */
        if (fork() == 0) {  /* Create a child process to execute the command */
            execute_command(cmd, envp);  /* Execute the command in the child process */
            exit(0);  /* Exit the child process after the command is executed */
        } else {  
            wait(NULL);  /* Parent process waits for the child process to finish executing the command */
        }
    }

    free(cmd);  /* Free the memory allocated for the command string */
    return 0;
}
