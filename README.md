# Pointers
## Swapping numbers using pointers
This program swaps the values of two integers using Pointers.
The user inputs two integers, and the program displays their original values.
Then, the swap() function interchanges their values.
Finally, the program displays the swapped values of the integers.
The function first declares a temporary variable t to store the value of the first input argument x. 
It then assigns the value of the second input argument y to x, and the value of t to y.
As a result, the values of the two variables passed to the function are swapped.
![Screenshot (299)](https://user-images.githubusercontent.com/125993593/234431632-4b2c92f2-738f-4357-9cc1-d5a2d072cc15.png)
### Algorithm
1. Start the program.
2. Declare two integer variables num1 and num2.
3. Prompt the user to enter the value of num1.
4. Read the input value of num1 from the user.
5. Prompt the user to enter the value of num2.
6. Read the input value of num2 from the user.
7. Print the values of num1 and num2 before swapping.
8. Call the function swap() with the addresses of num1 and num2 as arguments.
9. The function swap() will interchange the values of num1 and num2.
10. Print the values of num1 and num2 after swapping.
11. End the program.

Function swap():
1. Take two integer pointers x and y as input arguments.
2. Declare a temporary integer variable t.
3. Store the value pointed by x in t.
4. Assign the value pointed by y to x.
5. Assign the value stored in t to y.
6. The values of x and y are now swapped.

## Passing Address into function
The swap_pointers() function takes two pointers to pointers to characters as input arguments.
It first declares a temporary pointer temp to store the value of the first input argument a. 
It then assigns the value of the second input argument b to a, and the value of temp to b. 
As a result, the values of the two pointers passed to the function are swapped.
![Screenshot (300)](https://user-images.githubusercontent.com/125993593/234434469-3d41c5da-a29f-4e94-a385-d1e62f302b92.png)

### Algorithm
1. Start the program.
2. Declare two integer variables num1 and num2.
3. Prompt the user to enter the value of num1.
4. Read the input value of num1 from the user.
5. Prompt the user to enter the value of num2.
6. Read the input value of num2 from the user.
7. Print the values of num1 and num2 before swapping.
8. Call the function swap() with the addresses of num1 and num2 as arguments.
9. The function swap() will interchange the values of num1 and num2.
10. Print the values of num1 and num2 after swapping.
11. End the program.

Function swap():
1. Take two integer pointers x and y as input arguments.
2. Declare a temporary integer variable t.
3. Store the value pointed by x in t.
4. Assign the value pointed by y to x.
5. Assign the value stored in t to y.
6. The values of x and y are now swapped.

