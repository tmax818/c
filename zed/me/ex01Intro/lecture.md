Learn C The Hard Way
=======

Exercise 1
----

Dust Off That Compiler



The Plan
====

* Write your first C program.
* Build it.
* Break it.



The Code
====

https://github.com/zedshaw/learn-c-the-hard-way-lectures

git clone https://github.com/zedshaw/learn-c-the-hard-way-lectures.git

```sh
run $ diff ex1.c main.c
```



The Analysis
====

Let's look at it line-by-line.

```
$ make main
```
or type the line output by the Makefile:

```
$cc main.c -o main
```

Can see the Makefile in the parent directory!


Breaking It
====

This is all crazy magic right now.



Extra Credit
====

* Open the ``ex1`` file in your text editor and change or delete random parts.
  Try running it and see what happens.
* Print out five more lines of text or something more complex than "hello world."
* Run ``man 3 printf`` and read about this function and many others.
* For each line, write out the symbols you don't understand and
  see if you can guess what they mean.  Write a little chart on
  paper with your guess so you can check it later to see
  if you got it right.



End Of Lecture 1
=====


