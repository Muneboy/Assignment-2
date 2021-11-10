# Phone number breakdown
Given a long long integer representing a 10-digit phone number, output the area code, prefix, and line number using the format (800) 555-1212.

Ex: If the input is:

```8005551212```

the output is:

```(800) 555-1212```

Hint: Use % to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.

Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. (Recall integer division discards the fraction).

For simplicity, assume any part starts with a non-zero digit. So 0119998888 is not allowed.


# Input: Welcome message
Write a program that takes a first name as the input, and outputs a welcome message to that name.

Ex: If the input is:

```Pat```

the output is:

```Hello Pat, and welcome to CS Online!```


# Warm up: Variables, input, and casting
(1) Prompt the user to input an integer, a double, a character, and a string, storing each into separate variables. Then, output those four values on a single line separated by a space. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.
```
Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy
```

(2) Extend to also output in reverse. (1 pt)
```
Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy
Howdy z 3.77 99
```

(3) Extend to cast the double to an integer, and output that integer. (2 pts)
```
Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.77 z Howdy
Howdy z 3.77 99
3.77 cast to an integer is 3
```

# Program: Painting a wall
Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

(1) Prompt the user to input a wall's height and width. Calculate and output the wall's area. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
```

(2) Extend to also calculate and output the amount of paint in gallons needed to paint the wall. Assume a gallon of paint covers 350 square feet. Store this value using a const double variable. (2 pts)
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
```

(3) Extend to also calculate and output the number of 1 gallon cans needed to paint the wall. Hint: Use a math function to round up to the nearest gallon. (2 pts)
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
Cans needed: 1 can(s)
```


# Convert to dollars
Given four values representing counts of quarters, dimes, nickels and pennies, output the total amount as dollars and cents.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:
```
4 3 2 1
```
where 4 is the number of quarters, 3 is the number of dimes, 2 is the number of nickels, and 1 is the number of pennies, the output is:
```
Amount: $1.41
```
For simplicity, assume input is non-negative.
