# (220) 0x09. C - Static libraries
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-28-2020 to 03-02-2020

### Description
Introduction to static libraries, use of `ar`, `ranlib`, `nm`.

### Requirements

### Provided file(s)

---

## Mandatory Tasks

### :white_check_mark: 0. A library is not a luxury but one of the necessities of life
Create the static library `libmy.a` containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

File(s): [`libmy.a`](./libmy.a)\
Compiled: `gcc -std=gnu89 main.c -L. -lmy -o quote`

### :white_check_mark: 1. Without libraries what have we? We have no past and no future
Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

File(s): [`create_static_lib.sh`](./create_static_lib.sh)\

### :white_check_mark: 2. Either write something worth reading or do something worth writing
Write a blog post on C static libraries. It should cover:

* Why use libraries
* How they work
* How to create them
* How to use them

Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.

Blog: [Static Libraries in C](https://www.linkedin.com/pulse/static-dynamic-libraries-c-samuel-pomeroy)\
Share: [LinkedIn](https://www.linkedin.com/posts/activity-6640151373377867777-L5XD)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
