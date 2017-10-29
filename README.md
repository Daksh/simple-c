# simple-c

## Finding GCD(Greatest Common Divisor) or HCF (Highest Common Factor)


## Finding Fibonacci

### Using Recursion

### Using Dynamic Programming(with Recursion)

## Towers of Hanoi (Tough)

## CodeChef Problems to solve

Go to CodeChef and create a profile if not already and submit the following questions. Add the link to your submission as a comment at the top of the file. You might want to have a look at turbo.pdf, which guides how to shift from TurboC++ to GCC/G++

1. https://www.codechef.com/problems/LUCKFOUR  CakeWalk

2. https://www.codechef.com/problems/SPALNUM

3. 

## Links

https://www.hackerrank.com/challenges/missing-numbers

# How to Compile and Run C Programs using GCC

Change to the directory using `cd` command and navigate the terminal to the directory/folder containing the code you want to run. Let us say that the code you have written is in the file yourfilename.c then,
```
gcc yourfilename.c
./a.out
```
and that would start the program on the terminal (just like the black screen of Turbo C, when you run it)

# Input/Output in CP Problems (CP is Competetive Programming)

You do not need to worry about the order of input output in these problems and the reason for that is. That generally when you compile, rather than taking the input and output from the default input/output (i.e. keyboard/monitor) they change it to infile/outfile. So what happens is, that even if you print the output of each test case as soon as it runs, it redirects to another file. So it does not mess up.
```
./a.out < inputfile
```
that can be used to redirect just the input (from file named "inputfile") rather than the default input, that is keyboard

NOTE: You do not have to add extra statements like "Input Radius: "