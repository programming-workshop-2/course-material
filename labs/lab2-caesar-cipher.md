# CSCI 1061U - Programming Workshop 2

## Lab 2 - Caesar Cipher

**Due back on Saturday, January 28 before 11:59 pm.**

### Introduction

The Caesar cipher is a substitution cipher where each letter in the original message (called the plaintext) is replaced with a letter corresponding to a certain number of letters up or down in the alphabet.  The encrypted message (ciphertext) is not easily readable.

For example, here's the Caesar Cipher encryption of a message, using a left shift of 3.

__Plaintext:__  

THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG

__Ciphertext:__ 

QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD

It is straightforward to recover the original message by using the opposite shift.

### Task 1 (Weightage 50%)

You are asked to write a program that takes a shift value between +/- 26 and a _plaintext_ message (no spaces) and returns the corresponding _ciphertext_.  The program should also implement a decryption routine that reconstructs the original _plaintext_ from the _ciphertext_.

#### Example usage

~~~shell
$ caesar
Enter shift +/- 26: -3
Enter plaintext message (A-Z only, no spaces): THE
ciphertext: QEB
plaintext: THE
~~~ 

or

~~~bash
$ caesar
Enter shift +/- 26: 1
Enter plaintext message (A-Z only, no spaces): ZZZ
ciphertext: AAA
plaintext: ZZZ
~~~ 

We assume that the user message only consists of uppercase English alphabet (A-Z).

### Task 2 (Weightage 50%)

You are now to extend the above program to take as inputs files.  The program should be able to read a file and encode or decode it as needed.  

For the sake of simplicity, we assume that you only need to _change_ letters [A-Z] in the file.  You can safely ignore other letters in the file (i.e., keep those as is.)

#### Encrypting a file to __cyphertext__

Encrypt a file `in.txt` containing plaintext to a file `out.txt` containing ciphertext using shift `<shift>`.  Flag `-e` here refers to encryption.

~~~bash
$ cf -e <shift> in.txt out.txt
~~~

##### Example

Consider `f1.txt`

~~~txt
HELLO WORLD THIS IS AMAZING
WHY IS THIS SO AMAZING
I HAVE NO IDEA
11231
~~~

After running the following command

~~~bash
$ ./cf -e 3 f1.txt f2.txt
~~~

File `f2.txt` looks like

~~~txt
KHOOR ZRUOG WKLV LV DPDCLQJ
ZKB LV WKLV VR DPDCLQJ
L KDYH QR LGHD
11231
~~~

#### Decrypting a file to __plaintext__

Decrypting a file `in.txt` containing ciphertext to a file `out.txt` containing plaintext using shift `<shift>`.  Flag `-d` here refers to decryption.

~~~bash
$ cf -d <shift> in.txt out.txt 
~~~

##### Example

After running the following command

~~~bash
$ ./cf -d 3 f2.txt f3.txt
~~~

File `f3.txt` looks like

~~~txt
HELLO WORLD THIS IS AMAZING
WHY IS THIS SO AMAZING
I HAVE NO IDEA
11231
~~~

### Submission

Please submit `caesar.cpp` and `cf.cpp` files via Blackboard.
