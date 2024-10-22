# Session 3 - The Finale

(UNDER CONSTRUCTION)


Good luck and happy coding!

## Contents 

- <a href="#Input" style="color: black;"> Handling Input </a>
    - <a href="#CharInput" style="color: black;"> Character Input </a>
    - <a href="#StringInput" style="color: black;"> String Input </a>
    - <a href="#IntInput" style="color: black;"> Int Input </a>
    - <a href="#RetryIntInput" style="color: black;"> AAAAAAAAAAAA </a>
    - <a href="#InputExercises" style="color: black;"> Int Input </a>
- <a href="#Optional" style="color: black;"> Optional Exercises </a>

## <a name="Input"> Input </a>

We are covering **input** so we can *finally* create interactive programs in **C**! We will focus on using **scanf** (in `stdio`) to read in user input. 

### <a name="CharInput"> Character Input </a>

For **scanf** to read in a character, we need to pass it a pointer to a char variable! If we passed the value, then it wouldn't be able to fill in the variable for us. 

```c
char a;
scanf("%c", &a); // read in a character! Store in the variable 'a'
printf("%c\n", a); // print out that character!
``` 

We can also read in multiple characters! 

```c
char a,b,c;
scanf("%c%c%c", &a, &b, &c); // read in 3 characters!
printf("%c%c%c\n", a, b, c); // print out those characters!
```

You might wonder *why* scanf doesn't just return the value (or a pointer to the value). This is because `scanf` returns the number of items that were successfully read in! We can inspect this behaviour closely with the following: 

```c
char a,b,c,d;
int nReads = scanf("%c%c%c%c", &a, &b, &c, &d); // read in 4 characters!

printf("%d\n", nReads);
```

If you compile and run the program (located in `cFiles/input/nReplacements.c`), then you'll notice that trying to enter just one character won't work! The program simply waits until you enter more characters (even if it's a newline or a space) - to observe this behaviour, we'll have to pipe input from a file to the program. We can do this using the following command:

```bash
cat theFile | ./theProgram
```
*Here, cat outputs the contents of the file and the pipe character **'|'** pipes the output to the executed program*

So compile `cFiles/input/nReplacements.c`, and try piping in some input (try `txtFiles/input/nReplacementsInput1.txt`)! 

### <a name="StringInput"> String Input </a>

Of course, we 

- mention %s until first spacex

### <a name="IntInput"> Int Input </a>

### <a name="RetryIntInput"> Retrying Int Input </a>


### <a name="InputExercises"> Input Exercises </a>

1) Bob is following the course and mistakenly has written: 
```c
char a;
scanf("%c", a);
printf("%c\n", a);
```

What mistake has Bob made? What should he have written? What will happen, and what will the output be? What is this an example of? 

**Hint:** Read the first paragraph of <a href="#CharInput"> Character Input </a>

2) Read the solution to Exercise 1. 

3) A program requires you to input the length of the string, and then the string itself. Can you output the number of times the character 'e' appears in the string? 

Test the program using the inputs in `txtFiles/InputEx3/Input` which has corresponding correct outputs in `txtFiles/InputEx3/Output`.

## <a name="Makefiles"> Makefiles </a>

- Use https://youtu.be/GExnnTaBELk 

## <a name="Debugging"> Debugging With GDB </a>


## <a name="OptionalExercises"> Optional Exercises </a> 


## Acknowledgements

Originally created by Edward Denton. 
