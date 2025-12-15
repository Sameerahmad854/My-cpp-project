# Stopwatch & Countdown Timer 

A **console-based Stopwatch and Countdown Timer** application written in C++ using the **C++11 `<chrono>` and `<thread>` libraries**.  
This project allows users to start, stop, reset, and view elapsed time, as well as run a countdown timer.


## Features

1. Start and stop a stopwatch
2. Reset elapsed time
3. Display elapsed time with precision
4. Countdown timer (seconds-based)
5. Menu-driven console interface
6. Uses modern C++ time utilities

## Technologies Used

1. C++
2. `<chrono>` for high-precision time measurement
3. `<thread>` for countdown delay
4. `<iomanip>` for formatted output


## File Structure

StopwatchTimer/
1. main.cpp # Source code
2. README.md # Documentation

## How to Compile & Run

### Step 1: Open Terminal
Navigate to the project folder:


cd path/to/StopwatchTimer

step 3: Compile the Program
g++ main.cpp -o StopwatchTimer

Step 4: Run the Program
./StopwatchTimer 

**Menu Options**
1. Start stopwatch
2. Stop stopwatch
3. Reset stopwatch
4. Show elapsed time
5. Countdown time
6. Exit

**Sample Output**
======Stopwatch/Timer Menu======
1. Start stopwatch
2. Stop stopwatch
3. Reset stopwatch
4. Show elapsed time
5. Countdown time
6. Exit
Enter your choice: 1

Stopwatch started.

Enter your choice: 4
Elapsed time: 3.52 seconds

Countdown Example:
Enter countdown seconds: 5
Countdown timer started for 5 seconds..
5...4...3...2...1...
Time's up!