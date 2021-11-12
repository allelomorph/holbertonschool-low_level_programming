# (235) 0x16. C - Simple Shell
Foundations > Low-level programming & Algorithm > Linux and Unix system programming

---

### Project authors
Julien Barbier

### Assignment dates
04-02-2020 to 04-17-2020

### Description
Second team project, building a clone of `dash`, or the `sh` that comes with Ubuntu 14.04.

### Requirements
* List of allowed functions and system calls:
  * `access(2)`
  * `chdir(2)`
  * `close(2)`
  * `closedir(3)`
  * `execve(2)`
  * `exit(3)`
  * `_exit(2)`
  * `fflush(3)`
  * `fork(2)`
  * `free(3)`
  * `getcwd(3)`
  * `getline(3)`
  * `getpid(2)`
  * `isatty(3)`
  * `kill(2)`
  * `malloc(3)`
  * `open(2)`
  * `opendir(3)`
  * `perror(3)`
  * `read (2)`
  * `readdir(3)`
  * `signal(2)`
  * `stat(2)`
  * `lstat(2)`
  * `fstat(2)`
  * `strtok(3)`
  * `wait(2)`
  * `waitpid(2)`
  * `wait3(2)`
  * `wait4(2)`
  * `write(2)`
* Compilation for all tasks: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

### Note
This project can be found in a separate repository: [`simple_shell`](https://github.com/allelomorph/simple_shell). This README is to provide the project profile separate from the README originally included with the project itself.

---

## Mandatory Tasks

### :white_check_mark: 0. README, man, AUTHORS

* Write a `README`
* Write a `man` for your shell.
* You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository. Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS)

File(s): [`README.md`](https://github.com/allelomorph/simple_shell/README.md) [`man_1_simple_shell`](https://github.com/allelomorph/simple_shell/man_1_simple_shell) [`AUTHORS`](https://github.com/allelomorph/simple_shell/AUTHORS)

### :white_check_mark: 1. Betty would be proud
Write beautiful code that passes the Betty linter checks

### :white_check_mark: 2. Simple shell 0.1
Write a UNIX command line interpreter.

* Usage: simple_shell

Your Shell should:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the “end of file” condition (`Ctrl+D`)

You don’t have to:

* use the `PATH`
* implement built-ins
* handle special characters : `"`, `'`, ```, `\`, `*`, `&`, `#`
* be able to move the cursor
* handle commands with arguments

### :white_check_mark: 3. Simple shell 0.2
Simple shell 0.1 +

* Handle command lines with arguments

### :white_large_square: 4. Simple shell 0.3
Simple shell 0.2 +

* Handle the `PATH`
* `fork` must not be called if the command doesn’t exist

### :white_check_mark: 5. Simple shell 0.4
Simple shell 0.3 +

* Implement the `exit` built-in, that exits the shell
* Usage: `exit`
* You don’t have to handle any argument to the built-in `exit`

### :white_check_mark: 6. Simple shell 1.0
Simple shell 0.4 +

* Implement the `env` built-in, that prints the current environment

### :white_large_square: 7. What happens when you type `ls -l *.c` in the shell
Write a blog post describing step by step what happens when you type `ls -l *.c` and hit Enter in a shell. Try to explain every step you know of, going in as much details as you can, give examples and draw diagrams when needed. You should merge your previous knowledge of the shell with the specifics of how it works under the hoods (including syscalls).

* Have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Only one blog post by team

Blog: [What happens when you type "ls -l" in the shell?](https://www.linkedin.com/pulse/ls-l-samuel-pomeroy)
Share: [LinkedIn](https://www.linkedin.com/posts/activity-6656796406340300800-mjLK)

## Advanced Tasks

### :white_large_square: 8. Test suite
Contribute to a test suite for your shell.

This is a task shared by everyone in the class.

* Every team (who contributed) will get the same score for this task (The repository owner will not get more points)
* You have to be pro-active and agree on one and unique repository to use for the test suite
* Please provide the link to the repository you contributed to
* Your contribution must be relevant (Correcting typos is nice and always appreciated on the open source sphere, but we won’t consider this a contribution at this point, unless it fixes a bug)

Guidelines for your test suite repository:

* The test suite should cover every tasks from 0. to 20.
* The test suite should cover every regular cases (many different examples) and possible edge cases
* The entire class should work on the same test suite. Use only one repository (don’t forget the README.md file)
* Start adding tests ASAP and not just before the deadline in order to help everyone from day 0
* You can take (or fork) inspiration from this [example](https://github.com/holbertonschool/0x15.c/), but it is not mandatory to follow this format/way
* Adopt a style and be consistent. You can, for example, follow this [style guide](https://google.github.io/styleguide/shellguide.html). If you choose a style that already exists, add it to the `README.md` in a style section. If you write your own, create a Wiki page attached to the project and refer to it in the `README.md` style section.
  * If you choose to use this code, make sure to update the style accordingly
* You should have an `AUTHORS` file, listing all individuals having contributed content to the repository. Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS)

### :white_large_square: 9. Simple shell 0.1.1
Simple shell 0.1 +

* Write your own `getline` function
* Use a buffer to read many chars at once and call the least possible the `read` system call
* You will need to use `static` variables
* You are not allowed to use getline

You don’t have to:

* be able to move the cursor

### :white_large_square: 10. Simple shell 0.2.1
Simple shell 0.2 +

* You are not allowed to use `strtok`

### :white_large_square: 11. Simple shell 0.4.1
Simple shell 0.4 +

* handle arguments for the built-in `exit`
* Usage: `exit status`, where `status` is an integer used to exit the shell

### :white_large_square: 12. Simple shell 0.4.2
Simple shell 0.4 +

* Handle `Ctrl+C`: your shell should not quit when the user inputs `^C`
* Hint: `man 2 signal`

### :white_large_square: 13. setenv, unsetenv
Simple shell 1.0 +\
Implement the `setenv` and `unsetenv` builtin commands

* `setenv`
    * Initialize a new environment variable, or modify an existing one
    * Command syntax: `setenv VARIABLE VALUE`
    * Should print something on stderr on failure
* `unsetenv`
    * Remove an environment variable
    * Command syntax: `unsetenv VARIABLE`
    * Should print something on stderr on failure

### :white_large_square: 14. cd
Simple shell 1.0 +\
Implement the builtin command `cd`:

* Changes the current directory of the process.
* Command syntax: `cd [DIRECTORY]`
* If no argument is given to `cd` the command must be interpreted like `cd $HOME`
* You have to handle the command `cd -`
* You have to update the environment variable `PWD` when you change directory
* Hint: `man chdir`, `man getcwd`

### :white_large_square: 15. ;
Simple shell 1.0 +

* Handle the commands separator `;`

### :white_large_square: 16. && and ||
Simple shell 1.0 +

* Handle the `&&` and `||` shell logical operators

### :white_large_square: 17. alias
Simple shell 1.0 +

* Implement the `alias` builtin command
* Usage: `alias [name[='value'] ...]`
  * `alias`: Prints a list of all aliases, one per line, in the form `name='value'`
  * `alias name [name2 ...]`: Prints the aliases `name`, `name2`, etc 1 per line, in the form `name='value'`
  * `alias name='value' [...]:` Defines an alias for each `name` whose `value` is given. If `name` is already an alias, replaces its value with `value`

### :white_large_square: 18. Variables
Simple shell 1.0 +

* Handle variables replacement
* Handle the `$?` variable
* Handle the `$$` variable

### :white_large_square: 19. Comments
Simple shell 1.0 +

* Handle comments (`#`)

### :white_large_square: 20. help
Simple shell 1.0 +

* Implement the `help` built-in
* Usage: `help [BUILTIN]`

### :white_large_square: 21. history
Simple shell 1.0 +

* Implement the history built-in, without any argument
* The `history` built-in displays the history list, one command by line, preceded with line numbers (starting at 0)
* On `exit`, write the entire history, without line numbers, to a file named `.simple_shell_history` in the directory `$HOME`
* When the shell starts, read the file `.simple_shell_history` in the directory `$HOME` if it exists, and set the first line number to the total number of lines in the file modulo 4096

### :white_large_square: 22. File as input
Simple shell 1.0 +

* Usage: `simple_shell [filename]`
* Your shell can take a file as a command line argument
* The file contains all the commands that your shell should run before exiting
* The file should contain one command per line
* In this mode, the shell should not print a prompt and should not read from `stdin`

---

## Student team
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
* **Cynthia Taylor** - [cg-taylor](github.com/cg-taylor)
