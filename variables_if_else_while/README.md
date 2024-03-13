# This directory contains the tasks of the project C - Variables , if, else,

## 0. Positive anything is better than negative nothing

This program will assign a random number to the variable n each time it is executed.
Complete the source code in order to print whether the number stored
in the vagriable n is positive or negative.


-  The variable n will store a different value every time you will run this
    program
    - You don’t have to understand what rand, srand, RAND_MAX do. Please do not
 touch this code
    - The output of the program should be:
    - The number, followed by
        - if the number is greater than 0: is positive
        - if the number is 0: is zero
        - if the number is less than 0: is negative
        - followed by a new line


``` mermaid
graph TD;
    Start(Main start) --> Declare[Declare n]
    Declare --> Seed[Sets the seed,<br>uses current time.]
    Seed --> Generate[Generates pseudo-random number,<br>saves it to n.]
    Generate --> gt{n >= 0}--> Positive[/prints n is positive;/]
    gt --false--> eq{n == 0} -->Zero[/prints n is zero;/]
    eq --false-->Negative[/prints n is negative;/]
    Positive --> End(Return 0)
    Zero --> End(Return 0)
    Negative --> End(Return 0<br>End)
```

Output:

``` bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
$ ./0-positive_or_negative
-520693284 is negative
$ ./0-positive_or_negative
-973398895 is negative
$./0-positive_or_negative
0 is zero
```

> **_NOTE:_** <a href="https://man7.org/linux/man-pages/man3/srand.3p.html">`srand()`</a> uses the argument as a seed for a new sequence of pseudo-random numbers to be returned by subsequent calls to <a href="https://man7.org/linux/man-pages/man3/rand.3p.html">`rand()`</a>.

## 1. The last digit

This program will assign a random number to the variable n each time it is
executed. Complete the source code in order to print the last digit of the
number stored in the variable n.


- The variable n will store a different value every time you run this program
- You don’t have to understand what rand, srand, and RAND_MAX do.
- The output of the program should be:
    - The string Last digit of, followed by n
    - followed by
    - the string is, followed by
    - if the last digit of n is greater than 5: the string and is greater than 5
    - if the last digit of n is 0: the string and is 0
    - if the last digit of n is less than 6 and not 0: the string and is less
      than 6 and not 0
    - followed by a new line
