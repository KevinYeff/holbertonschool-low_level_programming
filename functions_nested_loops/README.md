# New project: C - Functions, nested loops.

## Task 0:
For this task we are asked to: Print the string "_putchar" on the screen with
a new line at the end so we don't mess up the output.

1. Read; well  to start, in the description of the task you will find the string that
we must print to the screen.

2. We will use our own `_putchar` function or the given one if you want.
3. Write the the program that uses our function:<br>
        3.1. Declare an int variable it will be used as a iterator.<br>
        3.2. Since we have not been given the string as input we have to "make it
        appear" we will use an `array of chars` to declare the `_putchar` string.<br>
        3.3. Next, we will use a `for` loop to iterate over the array and print each
        character to the screen using our own `_putchar()` function.<br>
        3.4. After the loop, we will print a new line to the screen.<br>
        3.5. End the program returning 0.<br>

4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Declare["Declares:<br>int i<br>char string[] = "_putchar""]
Declare-->Loop{"i = 0;<br> i <= string[i] && string[i] != '\0';<br> i++"}
Loop--True-->Print[/Print<br>Current character/]
Print-- Loop Back fa:fa-repeat-->Loop
Loop-- False -->Print2[/Print<br>new line/]-->End(End)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style End fill:crimson,stroke:blue,stroke-width:2px
style Print fill:#00ff00,stroke:blue,stroke-width:2px
style Print2 fill:#00ff00,stroke:blue,stroke-width:2px
style Declare stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [CODE](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/0-putchar.c)
6. Output:
```bash
$ ./0-putchar
_putchar
$
```
> [!IMPORTANT]
> Why an array of chars? imagine the static memory as a set of cells next to
> each other |cell 1|cell 2|cell 3|...|cell n|.
> Each cell can hold a single character and what the array does
> is separate a portion of this memory, at this point the `char string[] = "_putchar"`
> will be allocated by the compiler so we don't need to be worried about that
> portion of memory so, you could say that we have a portion of space in memory
> and this "chunk" is filled with `_putchar` just like : |_|p|u|t|c|h|a|r|'\0|'.
> About the bucle for: if you are not familiar with C language or programming,
> it will be hard to understand the loop declaration, well let's make it simple,
> at this point we know that the array is like a portion of ordered memory cells
> and we also know that our own function `_putchar()` prints characters one by
> one, with this in mind, we tell the loop, "hey for each time including the start
> taking into account that the position is less than and equal to 0 and the
> current position is different from `'\0'` (the null char), **print! the content
> of that cell and at the same time move the iterator to the next position** so
> you don't print the same content the next time.

> [!TIP]
> Imagine memory as a set of ordered cells (space).
> The '\0' char is used to indicate the end of a string.
> You can declare the amount of space for an array content by doing this:
> ```c
> char string[10] = "_putchar"
>```

> [!NOTE]
> The flowchart is a representation of the program's logic and is not a code.
> Arrays are cool.
> '\0' the null one, seems like it is saying "hi" right? :D

> [!CAUTION]
> Can u do this or no?:
> ```c
> char string[8] = "_putchar"
>```
> :P ?
> The answer is: ab, orpnhfr gur fgevat "_chgpune" unf 8 punenpgref naq gur >
> neenl vf qrpynerq jvgu 8 pryyf, ohg gur ynfg bar vf hfrq gb fgber gur ahyy >
> punenpgre '' fb gur neenl vf npghnyyl hfrq gb fgber 9 punenpgref.

## Task 1
In this task we are asked to write a function that prints the alphabet in
lower case with a new line at the end and we can only use `_putchar()`
fuction only twice in ur code.

1. Read the rask.
2. set everything up (header file).
3. Code<br>
    3.1. Declare a char variable, we are going to use this variable as an
        iterator that will go through ASCII values. I named it as `alc`
        stands for `alphabet in lower case` but you can named it `i` if you
        want<br>
    3.2. Use a `for` loop to go through the ASCII values from 97 to 122
        (inclusive) and print the corresponding character using `_putchar()`.<br>
    3.3. Print the new line.<br>
    3.4. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Declare["Declare:<br>char alc"]
Declare-->Loop{"alc = '97';<br> alc <= '122';<br> alc++"}
Loop--True-->Print[/Print<br>Current character/]
Print-- Loop Back fa:fa-repeat-->Loop
Loop-- False -->Print2[/Print<br>new line/]-->End(End)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style End fill:crimson,stroke:blue,stroke-width:2px
style Print fill:#00ff00,stroke:blue,stroke-width:2px
style Print2 fill:#00ff00,stroke:blue,stroke-width:2px
style Declare stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/1-alphabet.c)
6. Output:
```bash
$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
$
```
> [!IMPORTANT]
> Remember that the ASCII value of 'a' is 97 and the ASCII value of 'z' is 122

>[!TIP]
> You can use the ASCII table to find the ASCII value of any character.
> You can also use the `man ascii` command in your terminal to see the ASCII table.

>[!NOTE]
> This task is a good practice for using loops and ASCII values. It's also a good practice
> for using the `_putchar()` function.

## Task 2
Well in this task we are asked to print the alphabe in lower case 10 times
separated by a new line at the end.

1. Read the task.
2. set everything up (main and header files).
3. Code.<br>
    3.1. Declare variables `int i` as iterator and `char alc` to
    relate it to the characters.<br>
    3.2. Use a nested `for` loop the fisrt one will be used to encompass
    each turn and also takes care of the new line, the second `for` loop
    to go through the ASCII values from 97 to 122 (included) and print
    the corresponding character using our `_putchar()` function.<br>
    3.3. Print a new line at the end of each turn (mentioned previously).<br>
    3.4. End the program.
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Declare[Declare:<br>int i;<br>char alc;]
Declare-->Loop{i = 0; i <= 9; i++}
Loop--True-->Loop2{alc = 97;<br> alc <= 122;<br> alc++}
Loop2--True-->Print[/"_putchar(alc);"/]
Print-- Loop Back fa:fa-repeat-->Loop2
Loop2--False-->Print2[/Print<br>New line/]
Print2-- Loop Back fa:fa-repeat-->Loop
Loop--False--->End(End)


style Start fill:crimson,stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style Loop2 fill:#b8daba,stroke:blue,stroke-width:2px
style End fill:crimson,stroke:blue,stroke-width:2px
style Print fill:#00ff00,stroke:blue,stroke-width:2px
style Print2 fill:#00ff00,stroke:blue,stroke-width:2px
style Declare stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/2-print_alphabet_x10.c)
6. Output:
```bash
$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
$
```
> [!IMPORTANT]
> Using a nested loop is key here because, this will allow us to manage the
> result, since the first loop will be in charge of providing the entry point
> for each turn (10 times) and the sencond loop will be in charge of filling
> each turn with the expected output, which in this case is the alphabet in
> lowercase.

## Task 3
We need to write a function that checks for lowercase character.
if true returns 1 otherwise returns 0.

1. Read the task.
2. Set everything up (main and header files).
3. Code.<br>
    3.1. Manage the condition o match the output, if he given char is not in
    the range of lowercase letters, the function will return 0.<br>
    3.2. If false return 1.<br>
    3.3. End.<br>
4. Flowchart:

```mermaid
graph TD;
Start(Main Start)-->Call["Calls: _islower(int c)<br>function"]
Call-->Condition{"(!(c >= 97<br>&&<br>c <= 122))"}
Condition--True-->Return(Return 0)
Condition--False-->Return2(Return 1)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call fill:#b8daba,stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/3-islower.c)
6. Output:
```bash
$ ./3-islower
011
$
```
> [!IMPORTANT]
> The ASCII values are of the type of char, with this in mind we need to manage<br>
> the convertion from int to char, why? because we are returning an int value to the<br>
> `main()` function that uses our `_putchar()` function, remember that this function<br>
> only accepts char as an argument.

> [!TIP]
> You can make the code more verbose like the one before refactoring.<br>
> You can also do it whitout denying the main condition.

## Task 4
We are asked to check for alphabetic characters, letter eiter lowercase or
uppercase.

1. Read the task.
2. Set everything up (main and header files).
3. Code.<br>
    3.1. Manage the condition to match the output, if the given char is
    considered an alphabetic character return 1.<br>
    3.2. If not return 0.<br>
    3.3. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: _isalpha(int c)<br>function"]
Call-->Condition{"((c >= 65 && c <= 90)<br>||<br>(c >= 97 && c <= 122))"}
Condition--True-->Return(Return 1)
Condition--False-->Return2(Return 0)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call fill:#b8daba,stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/4-isalpha.c)
6. Output:
```bash
$ ./4-isalpha
1110
$
```
> [!TIP]
> The ASCII values are different for uppercase letters.<br>

## Task 5
In this task we are asked to print the sign of a given number.
1. Read the task.
2. Set everything up (main and header files).
3. Code<br>
    3.1. Check if the number is positive, if so print the `+` sign
    and return 1.<br>
    3.2. Check if the number is equal to `0`, if so print `0` and
    return 0.<br>
    3.3. If no condition is meet, print the `-` sign and return `-1`.<br>
    3.4. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: print_sign(int n)<br>function"]
Call-->Condition{"if<br>n > 0"}
Condition--True--->Print[/"_putchar(43)"/]
Print-->Return(Return 1)
Condition--False-->Condition2{"if<br>n == 0"}
Condition2--True-->Print2[/"_putchar(48)"/]
Print2-->Return2(Return 0)
Condition2--False-->Print3[/"_putchar(45)"/]
Print3-->Return3(Return -1)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call fill:#b8daba,stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Condition2 fill:#b8daba,stroke:blue,stroke-width:2px
style Print fill:#00ff00,stroke:blue,stroke-width:2px
style Print2 fill:#00ff00,stroke:blue,stroke-width:2px
style Print3 fill:#00ff00,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
style Return3 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/5-sign.c)
6. Output:
```bash
$ ./5-sign
+, 1
0, 0
+, 1
-, /
$
```
> [!IMPORTANT]
> The previous version of my code is more readable, I just reduce lines of code.

## Task 6
In this task we are asked to wrie a function that computes the absolute value
of a given integer.

1. Read the task.
2. Set everything up (main and header files)
3. Code.<br>
    3.1. if the given integer is less than 0, convert the number to its
    positive version and return it.<br>
    3.2. if condition is not meet just return the given integer.
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: _abs(int h)<br>function"]
Call-->Condition{"h < 0 ?"}
Condition--True-->Return(Return<br>h *= -1)
Condition--False-->Return2(Return h)

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call fill:#b8daba,stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/functions_nested_loops/6-abs.c)
6. Output:
```bash
$ ./6-abs
1
0
1
98
$
```
> [!IMPORTANT]
> The previous version of my code is more readable, I just reduce lines of code
> by usig the ternary operator that is a short hand for the well known if-else
> statement.

> [!TIP]
> The absolute value of an integer is the same integer but positive.
