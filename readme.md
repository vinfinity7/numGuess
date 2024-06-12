# Number Guessing Game

This project is a simple C++ program that generates a random number between 1 and 100 and asks the user to guess it. The program provides feedback on whether the guess is too high or too low until the user guesses the correct number.

## Features

- Generates a random number between 1 and 100.
- Prompts the user to guess the number.
- Provides feedback if the guess is too high or too low.
- Congratulates the user upon guessing the correct number.

## Requirements

To compile and run this program, you need:

- A C++ compiler, such as `g++`.
- A terminal or command prompt.

## How to Compile and Run

Follow these steps to compile and run the program:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/vinfinity7/numGuess.git
   ```
2. **Navigate to the project directory**:
   ```bash
   cd numGuess
   ```
3. **Compile the program**:
   ```bash
   g++ -o numg numg.cpp
   ```
4. **Run the compiled program**:
   ```bash
   ./numg
   ```

## Example Output

```
Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
Can you guess what it is?
Enter your guess: 50
Your guess is too high. Try again!
Enter your guess: 25
Your guess is too low. Try again!
Enter your guess: 37
Your guess is too high. Try again!
Enter your guess: 30
Congratulations! You guessed the correct number!
```

## Code Explanation

- `std::srand(static_cast<unsigned int>(std::time(0)));`: Seeds the random number generator with the current time to ensure a different sequence of random numbers each time the program is run.
- `int randomNumber = std::rand() % 100 + 1;`: Generates a random number between 1 and 100.
- The `while (true)` loop keeps running until the user guesses the correct number.
- `std::cin >> guess;`: Takes the user's guess as input.
- The program compares the guess to the random number and provides feedback accordingly.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing

If you would like to contribute to this project, please fork the repository and submit a pull request. Contributions are welcome!

## Contact

If you have any questions or suggestions, feel free to open an issue or contact me directly at [misrasaksham9@gmail.com](mailto:misrasaksham9@gmail.com).


### Summary of Steps to Add the README.md to Your Project

1. **Create the `README.md` file**:
   - In your project directory, create a file named `README.md`.
   - Copy and paste the above content into `README.md`.

2. **Add, commit, and push the `README.md` file**:
   ```bash
   git add README.md
   git commit -m "Add detailed README.md"
   git push origin main
   ```
