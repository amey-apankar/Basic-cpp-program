# Basic C++ Programs (Turbo C++)
A collection of basic C++ programs created using **Turbo C++**. These programs are tailored to run in the Turbo C++ environment and may include some Turbo-specific libraries and syntax.
## Requirements

To run these programs, you’ll need:

- **Turbo C++** IDE (or any compatible compiler from the same era).
- **Windows** (Turbo C++ was primarily designed for Windows environments).
### To Run

1. **Install Turbo C++**: You can download Turbo C++ from various online sources or use a Turbo C++ emulator.
   - For installation guidance, check out this [link to Turbo C++ setup](#) (replace this with a real link if available).
   
2. **Compile and Run**:
   - Open the `.cpp` file in Turbo C++ and press `Ctrl + F9` to compile and run the program.

3. **Modern Compilers**:
   - If you're using a modern C++ compiler (like `g++`), you may need to remove Turbo-specific headers like `conio.h` and modify some functions to use standard libraries (e.g., `iostream`, `string`).

## Programs Included

This repository includes basic programs for:

- **Basic Input/Output**: Examples demonstrating the use of `cin`, `cout`, and `getch()`.
- **Control Structures**: Demonstrating loops, conditionals, and switch cases.
- **Functions**: Basic examples of functions and recursion.
- **Data Structures**: Examples of arrays, linked lists, and stacks.
- **Turbo-Specific Programs**: Programs that use `conio.h`, `clrscr()`, `gotoxy()`, etc.

## Example Program

Here's an example of a Turbo C++ program that uses `conio.h`:

```cpp
#include <conio.h>
#include <iostream.h>
void main() {
    clrscr();
    cout << "Hello, World!";
    getch();
}
