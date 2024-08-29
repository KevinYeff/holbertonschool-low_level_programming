# New project: C - More functions, more nested loops.
## Taks 0
This task ask us to check if a given char is uppercase.

1. Read the task.
2. Set everything up (main, header files).
3. Code.<br
	3.1. Check if given char is in range.<br>
	3.2. if True return 1.<br>
	3.3. else return 0.<br>
	3.4. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main start)-->Call["Calls: _isupper()"]
Call-->Condition{"Char is in range?"}
Condition-- True-->Return["Return 1"]
Condition-- False-->Return2["Return 0"]

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/0-isupper.c)
6. Output:
```bashsize_t
$ ./a.out
A: 1
a: 0
$
```

## Task 1
In this task  we need to check if a given digit is a number.
1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
	3.1. Check if given digit is in range.<br>
	3.2. if True return 1.<br>
	3.3. else return 0.<br>
	3.4. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main start)-->Call["Calls: _isdigit()"]
Call-->Condition{"Digit is in range?"}
Condition-- True-->Return["Return 1"]
Condition-- False-->Return2["Return 0"]

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px
style Return2 fill:crimson,stroke:blue,stroke-width:2px
%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/1-isdigit.c)

6. Output:
```bash
$ ./a.out
0: 1
a: 0
$
```
## Task 2
For this task we need to return the multiplication of 2 integers.
1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
	3.1. Multiply the integers.<br>
	3.2. return the result.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main start)-->Call["Calls: mul()"]
Call-->Return["Return a * b"]

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Return fill:crimson,stroke:blue,stroke-width:2px

%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/2-mul.c)
6. Output:
```bash
$ ./a.out
100352
-1646592
$
```
## Task 3
This task asks us to print the numbers from 0 to 9.
1. Read the task.
2. Set everything up (main. header files).
3. Code. <br>
	3.1. Declare an iterator.<br>
	3.2. Use a `For Loop` to print under condition.<br>
	3.3. Print a new line after Loop ends.<br>
	3.4. End.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main start)-->Call["Calls: print_numbers()"]
Call-->Declare["int number<br>iterator/reference"]
Declare-->Loop{"Loop from 48 to 57"}
Loop-- True-->Print[/"Print number"/]
Print-- Loop fa:fa-repeat-->Loop
Loop -- False-->Print2[/"Print new line"/]

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Declare stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style Print fill:#b8daba,stroke:blue,stroke-width:2px
style Print2 fill:#b8daba,stroke:blue,stroke-width:2px

%%{init:{
    'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/3-print_numbers.c)
6. Output:
```bash
$ ./a.out
0123456789
$
```
## Task 4
This task ask us to print numbers from 0 to 9 except 2 and 4.

1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
	3.1. Declare an iterator/reference.<br>
	3.2. Use a `For Loop` to iterate from 0  to 9.<br>
	3.3. if iterator/reference is not equal to 2 or 4, print the value.<br>
	3.4. Print a new line after loop ends.

4. Flowchart:
```mermaid
graph TD;
Start(Mai Start)-->Call["Calls: print_most_numbers()"]
Call-->Declare["int iterator"]
Declare-->Loop{"iterate from 0 to 9"}
Loop-- True-->Print[/"Print value"/]
Print-- Loop fa:fa-repeat-->Loop
Loop-- False-->Print2[/"Print new line"/]

style Start fill:crimson,stroke:blue,stroke-widdth:2px
style Declare stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style Print fill:#b8daba,stroke:blue,stroke-width:2px
style Print2 fill:#b8daba,stroke:blue,stroke-width:2px

%%{init:{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/4-print_most_numbers.c)
6. Output:
```bash
$ ./a.out
01356789
$
```

## Task 5
In this task we need to print the numbers from 0 to 14 included.
1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
	3.1. Declare iterators/references.<br>
	3.2. Use a nested for loop from 0 to 9.<br>
	3.3. The second loop from 0 to 14 included.<br>
	3.4. if number of iterations are greater than or equal to 10.<br>
	3.5. Print the first digit of the iterator number.<br>
	3.6. Print the last digit of the iterator number.<br>
	3.7. Print a new line after second loop ends.<br>

4.Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: more_numbers()"]
Call-->Declare["Iterators row, column"]
Declare-->Loop{"Loop 10 times"}
Loop-- True-->Loop2{"Loop 15 times"}
Loop2-- True-->Condition{"Iterator >= 10"}
Condition-- True-->Print[/"Print first digit"/]
Condition-- False-->Print2
Print-->Print2[/"Print the last digit"/]
Print2-- Loop fa:fa-repeat-->Loop2
Loop2-- False---->Print3[/"Print new line"/]

style Start fill:crimson,stroke:blue,stroke-width:2px
style Call stroke:blue,stroke-width:2px
style Declare stroke:blue,stroke-width:2px
style Loop fill:#b8daba,stroke:blue,stroke-width:2px
style Loop2 fill:#b8daba,stroke:blue,stroke-width:2px
style Condition fill:#b8daba,stroke:blue,stroke-width:2px
style Print fill:#b8daba,stroke:blue,stroke-width:2px
style Print2 fill:#b8daba,stroke:blue,stroke-width:2px
style Print3 fill:#b8daba,stroke:blue,stroke-width:2px

%%{init:{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/5-more_numbers.c)
6. Output:
```bash
$ ./a.out
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
$
```

## Task 6
This tasks asks us to print a straight line in the terminal.
1. Read the task.
2. Set everything up (main, header files)
3. Code.<br>
	3.1. Declare iterator/reference.<br>
	3.2. Use a for loop to iterate from 0 to n.<br>
	3.3. Print `_` character n times.<br>
	3.4. Print a new line after loop ends.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: print_line()"]
Call-->Declare["iterator pline"]
Declare-->Loop{"iterate from 0 to n"}
Loop-- True-->Print[/"Print `_` n times"/]
Print-- Loop fa:fa-repeat-->Loop
Loop-- False-->Print2[/"Print new line"/]

style Start fill: crimson, stroke: blue, stroke-width: 2px
style Call stroke: blue, stroke-width: 2px
style Declare stroke: blue, stroke-width: 2px
style Loop fill: #b8daba, stroke:blue, stroke-width: 2px
style Print fill: #b8daba, stroke: blue, stroke-width: 2px
style Print2 fill: #b8daba, stroke: blue, stroke-width: 2px

%%{init:{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/6-print_line.c)
6. Output:
```bash
$ ./a.out

__
__________

$
```

## Taks 7
This tasks asks us to print a diagonal character of the size of n.

1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
	3.1. Declare two iterators/references variables.<br>
	3.2. Use a `For nested loop`.<br>
	3.3. The first one will loop from 0 to n, this also prints the<br>
	diagonal character and a new line at the n position.<br>
	3.4. The second will loop from 0 to the first iterator and this<br>
	loop will print the spaces.<br>
	3.5. Manage when n equals to 0 case after main loop ends.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: print_diagonal()"]
Call-->Declare["Iterators: spaces, bslash"]
Declare-->Loop{"Loop bslash from 0 to n"}
Loop-- True-->Loop2{"Loop spaces from 0<br>to value of bslash"}
Loop2-- True-->Print[/"Print Spaces"/]
Print-- Loop fa:fa-repeat-->Loop2
Loop2-- False-->Print2[/"Print Backslash"/]
Print2-->Print3[/"Print New Line"/]
Print3-- Loop fa:fa-repeat-->Loop
Loop-- False--->Condition{"n less equal than 0"}
Condition-- True-->Print4[/"Print New Line"/]

style Start fill: crinsom, stroke:blue, stroke-width: 2px
style Call stroke: blue, stroke-width: 2px
style Declare stroke: blue, stroke-width: 2px
style Loop fill: #b8daba, stroke: blue, stroke-width: 2px
style Loop2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print fill: #b8daba, stroke: blue, stroke-width: 2px
style Print2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print3 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print4 fill: crimson, stroke: blue, stroke-width: 2px
style Condition fill: #b8daba, stroke: blue, stroke-width: 2px

%%{init: {
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/7-print_diagonal.c)
6. Output:
```bash
$ ./a.out | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
$
```

## Task 8
This task asks us to print a square of size of n.

1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
   3.1. Declare two variables iterators/references.<br>
   3.2. Use a `For nested loop` the first one will loop from 0 to the size of
   the square, it will also print a new line after the second loop ends.<br>
   3.3. The second Loop will iterate from 0 to the size of the square, it will
   fill the lines with the `#` character.<br>
   3.4. if size of square is less than or equal to 0, the function should print
   a new line.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: print_square()"]
Call-->Declare["iterators"]
Declare-->Loop{"Loop from 0 to<br>size of square"}
Loop-- True-->Loop2{"Loop from 0 to<br>size of square"}
Loop2-- True-->Print[/"Print '#' character"/]
Print-- Loop fa:fa-repeat-->Loop2
Loop2-- False-->Print2[/"Print a new line"/]
Print2-- Loop fa:fa-repeat-->Loop
Loop-- False-->Condition{"Size of square <= 0"}
Condition-- True-->Print3[/"Print a new line"/]

style Start fill: crimson, stroke: blue, stroke-width: 2px
style Call stroke: blue, stroke-width:2px
style Declare stroke: blue, stroke-width:2px
style Loop fill: #b8daba, stroke: blue, stroke-width: 2px
style Loop2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Condition fill: #b8daba, stroke: blue, stroke-width: 2px
style Print fill: #b8daba, stroke: blue, stroke-width: 2px
style Print2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print3 fill: #b8daba, stroke: blue, stroke-width: 2px

%%{init{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/8-print_square.c)
6. Output:
```bash
$ ./a.out
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

$
```
## Task 9
This task ask us to do the FizzBuzz challenge with a formatted output, we need
to print the format from 1 to 100.

1. Read the task.
2. Set everything up (auxiliar functions).
3. Code (the simpliest way).<br>
   3.1. If a number is multiple of 3 and 5 print FizzBuzz.<br>
   3.2. If a number is miltiple of 5 print Buzz.<br>
   3.3. If a number is multiple of 3 print Fizz.<br>
   3.4. else Just print the number.<br>
   3.5. Give it a format right after conditions made.<br>
   3.6. Print a new line at the end of the challenge.<br>
   3.7. End.<br>
4. flowchart:
```mermaid
graph TD;
Start(Main Start)-->Declare["Declare all your variables"]
Declare-->Loop{"loop from 1 to 100"}
Loop-- True-->Condition{"Manage conditions"}
Condition-->Print[/"Print under conditions"/]
Condition-- False-->Print2[/"Print the number"/]
Print2-->Condition2{"number < 100"}
Condition2-- True-->Print3[/"Print Format"/]
Condition2-- False/Loop fa:fa-repeat-->Loop
Print3-- Loop fa:fa-repeat-->Loop
Loop-- False---->Print4[/"Print a new line"/]
Print4-->End(End)

style Start fill: crimson, stroke: blue, stroke-width: 2px
style Declare stroke: blue, stroke-width: 2px
style Loop fill: #b8daba, stroke. blue, stroke-width: 2px
style Condition fill: #b8daba, stroke: blue, stroke-width: 2px
style Condition2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print fill: #b8daba, stroke: blue, stroke-width: 2px
style Print2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print3 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print4 fill: #b8daba, stroke: blue, stroke-width: 2px
style End fill: crimson, stroke: blue, stroke-width: 2px

%%{init{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/9-fizz_buzz.c)
6. Output:
```bash
$ ./a.out
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
$
```
## Task 10

This task asks us to print a triangle of size of `size`.

1. Read the task.
2. Set everything up (main, header files).
3. Code.<br>
   3.1. Declare iterators/references.<br>
   3.2. Use a `For nested loop` the first one will iterate from 1 to be equal to
   size of the triangle, this also will print a new line after the second loop
   ends.<br>
   3.3. The second loop will iterate from 1 to be equal to size, this loop will
   also print spaces and the hashtag characters if condition is meet.<br>
   3.4. If the given size is less than or equal to 0, just print a new line.<br>
4. Flowchart:
```mermaid
graph TD;
Start(Main Start)-->Call["Calls: print_triangle()"]
Call-->Declare["Iterators"]
Declare-->Loop{"Loop from 1 to size"}
Loop-- True-->Loop2{"iterate from 1 to size"}
Loop2-- True-->Condition{"acc position<br><=<br>(size - main position)"}
Condition-- True-->Print[/"Print spaces"/]
Condition-- False-->Print2[/"Print hashtags"/]
Loop2-- False-->Print3[/"Print new line"/]
Loop-- False-->Condition2{"size <= 0"}
Condition2-- True-->Print4[/"Print new line"/]

style Start fill: crimson, stroke: blue, stroke-width: 2px
style Call stroke: blue, stroke-width: 2px
style Declare stroke: blue, stroke-width: 2px
style Loop fill: #b8daba, stroke: blue, stroke-width: 2px
style Loop2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Condition fill: #b8daba, stroke: blue, stroke-width: 2px
style Condition2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print fill: #b8daba, stroke: blue, stroke-width: 2px
style Print2 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print3 fill: #b8daba, stroke: blue, stroke-width: 2px
style Print4 fill: #b8daba, stroke: blue, stroke-width: 2px

%%{init{
	'theme': 'neutral'
}}%%
```
5. [Code](https://github.com/KevinYeff/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/10-print_triangle.c)
6. Output:
```bash
$ ./a.out
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

$
```
