__For Loop Pattern Programs in C++__:

This repository contains several C++ programs demonstrating the use of for loops to create various number and star patterns with nested loops. Each program includes an algorithm to explain the logic.

__Table of Contents:__

1. Simple Nested Loop Output

2. Number Pyramid

3. Star Triangle Pattern

4. Hourglass Star Pattern

5. Right-Aligned Star Triangle

6. Alphabet Triangle Pattern

__Description:__

Prints the sequence of "Outer" and "Inner" loop counters showing how nested loops operate.

__Algorithm:__
1.Start an outer loop from 1 to 2.

2.Print "Outer" with the value of the outer loop variable.

3.Inside the outer loop, start an inner loop from 1 to 3.

4.Print "Inner" with the value of the inner loop variable.

5.Repeat steps 3-4 for each iteration of the outer loop.

__Output Example:__


<img width="572" height="381" alt="image" src="https://github.com/user-attachments/assets/029641ba-60df-4f32-a063-8f5ea63aa5d7" />


__2. Number Pyramid__

__Description:__

Prints a triangular number pattern where numbers increment continuously row-wise based on user input.

__Algorithm:__

1.Read number n from the user.

2.Initialize a counter k to 1.

3.For each row i from 0 to n-1:

4.For each column j from 0 to i:

5.Print the current value of k and increment k by 1.

6.Move to the next line after each row.

__Sample Output:__


<img width="500" height="222" alt="image" src="https://github.com/user-attachments/assets/d4f16093-51e5-4519-ba8d-405930c3fc6c" />


__3. Star Triangle Pattern__

__Description:__

Prints a right-angled triangle made of stars increasing from 1 to n stars in each row.

__Algorithm:__

1.Set the number of rows n (e.g., 5).

2.For each row i from 1 to n:

3.Print i stars (*).

4.Move to the next line.

__Sample Output:__


<img width="629" height="141" alt="image" src="https://github.com/user-attachments/assets/3c063f9d-3275-4308-962a-a839b46bef10" />



__4. Right-Aligned Star Triangle__

__Description:__

Prints a right-aligned triangle of stars with the number of rows given by user input.

__Algorithm:__

1.Read an integer n from the user.

2.For each row i from 0 to n-1:

3.Print n - i pairs of spaces to create indentation.

4.Print i + 1 stars separated by spaces.

5.Move to the next line.

Sample Output:


<img width="628" height="222" alt="image" src="https://github.com/user-attachments/assets/76215c1c-8615-418a-a784-97c4a3a19bb8" />


__5. Hourglass Star Pattern__

__Description:__

Prints an hourglass-shaped pattern of stars that decreases and then increases symmetrically.

__Algorithm:__

1.First phase (upper part):

2.For i from 1 to 7:

3.Print i-1 spaces.

4.Print 8 - i stars separated by spaces.

5.Second phase (lower part):

6.For i from 1 to 6:

7.Print 6 - i spaces.

8.Print i + 1 stars separated by spaces.

__Sample Output:__


<img width="638" height="389" alt="image" src="https://github.com/user-attachments/assets/2ba47204-fb83-49d8-a131-f358d1c1a506" />


__6.Alphabet Triangle Pattern :__

__Description__

This program prints a triangular pattern of continuous English alphabets, where the number of rows is determined by the user's input. Letters are printed in order, starting from 'A' and continuing across rows, incrementing left to right.

__Algorithm__:

1.Read the number of rows n from the user.

2.Initialize a character variable (e.g., ch) to 'A'.

3.For each row from 1 to n:

4.For each column in the current row:

5.Print the current character and increment it to the next alphabet.

6.Move to the next line after each row.

__Example Output__

For input n = 6:

<img width="592" height="176" alt="image" src="https://github.com/user-attachments/assets/34431d68-11ea-4a46-a7fc-dfaba12a5de3" />




