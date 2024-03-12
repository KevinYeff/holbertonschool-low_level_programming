# New project: C - Hello, World.

## 4- Hello, puts.
C Program that prints a given string followed by  anew line to the stdout.
### Print "Programming is like building a multilingual puzzle with puts

- Use functio0n `puts`
- `printf` is not allowed.
- Program should return 0.

Output:
```bash
$ ./a.out
"Programming is like building a multilingual puzzle
$ echo $?
0
$
```


## 5- Hello, printf.

C program that prints exactly:
## with proper grammar, but the outcome is a piece of art,

- Use the `printf` function.
- `puts` is not allowed.
- Program should return 0.
- `-Wall` `gcc` flag not required.

Output:

``` bash
$ ./a.out
with proper grammar, but the outcome is a piece of art,
$ echo $?
0
$
```
## 6 Size is not grandeur, and territory does not make a nation

C program that prints the size of various types on the computer it is compiled 
and run on.

- Warnings are allowed.
- Program should return 0.

``` bash
$ gcc 6-size.c -m64 -o size64 2> /tmp/64
$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ echo $?
0
```
`-m64` With this flag we indicate to the compiler that we are using a 64 bit
architecture and if an error occurs during the compilation, we will redirect it
to `/tmp/64` with this arg `2>`.

## 9- UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity #advanced

C program that prints exactly:
## and that piece of art is useful" - Dora Korpar, 2015-10-19

- `printf` and `puts` aren't allowed.
- Program shuld return 1 (error).
- `-Wall`flag should not mark any warnings.

Output:

``` bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
echo $?
1
```
> **_NOTE:_** I know it looks confusing, one more way to print a string? We already had problems looking for it, but now it is even more confusing that the prototype of the <a href="https://man7.org/linux/man-pages/man2/write.2.html">`write()`</a> function is: `ssize_t write(int fd, const void buf[.count], size_t count)`;sending the output to <a href="https://linux.die.net/man/3/stderr">`stderr`</a> is related to the first argument required by `write()`, the fd "file descriptor" and the <a href="https://en.wikipedia.org/wiki/Standard_streams">`standard streams`</a>, relating these concepts was fun ¿? Haha!.
