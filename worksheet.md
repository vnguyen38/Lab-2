
# CSCE 155E
## Lab 2.0 Worksheet

Name(s) and Login(s):
Vivian Nguyen
vnguyen38


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

He would be 78 years, 50 weeks, and 0 days old today.


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

He is 69 years, 34 weeks, and 0 days old today.


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

1)I put the year I was born as 12345 and it gave me a negative value for how old I am.
2)I put the month I was born as 13, and it found what it would be if someone was born in December subtracting a month from the age.

4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `long int`
  size: 8 bytes
  range: -9223372036854775808 to 9223372036854775807
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25 = 67.57 pounds and 8648.64 JPY

  b) $1,000.52 = 270.14 pounds and 34577.97 JPY

  c) $968,410.12 = 261470.73 pounds and 33468253.75 JPY


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

That number is greater than the range of an int type.

7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.
What value do you get?  Is this result correct?

I get 0 square units. This is incorrect.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

I get 0 square units. This is incorrect. The values for 1/2 are integers, which means it truncates the division of 1/2 to 0 instead of 0.5.
Fix this by type-casting the divisor or dividend to a double.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
