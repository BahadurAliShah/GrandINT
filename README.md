# GrandINT

# Overview
The native int type in C++ cannot store large integers of more than 10 decimal digits. In this assignment, you will implement a GrandInt class that behaves like the int type, but can handle unsigned integers of up to 60 digits (or more).

# Explanation

1. You are to build a class named GrandInt that can deal with up to 60 decimal digits of
unsigned integers. The GrandInt class is specified as follows.
2. The GrandInt class should have a string as a private member containing the digits of the
number as characters e.g “1000001”. Note that string have no limits on length so it can
contain number of any size;
3. The class should have the following constructor
GrandInt(int n)// should convert n int to a string and store it
GrandInt(string s)//should directly equate it to passed string
GrandInt(const GrandInt&a)//copy constructor

4. To make bigint behave like int, you must overload the following operators:
a) The extraction operator >> for reading a GrandInt number from an input stream. The
input number can have up to 60 digits. Following are two legitimate bigint numbers
that can appear as input: “10000000000001” and “99999999999999999”
b) The insertion operation << for output a GrandInt number to an output stream. The

number must be output like a regular int number with the first digit being a non-
zero.

c) 2 arithmetic operators + and – (*, and / are omitted for this type to simplify the
program).
d) 6 comparison operators <, >, <=, >=, ==, and !=.
Testing:
Once the class is implemented you have to test it on the main function we provided and match
it with the correct output of the function. Don’t forget to tweak the values in the function to ensure
that your code is generic.
