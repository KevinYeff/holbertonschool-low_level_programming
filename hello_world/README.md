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
