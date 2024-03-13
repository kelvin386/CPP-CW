# CPP-CW

This repository contains the implementation of C++ programming coursework.

## Project Structure

The project is structured as follows:

- For Q1 to Q5, see detailed output and explanation in `Solution.md` and implementation in `Q{x}.cpp`

- `Q6vector.cpp`, `Q6vector.cpp`, `Q6test.cpp`: These files contain the implementation of a naive vector class with several constructors, operators, resize an assign functions. A test file including unit tests for all functions is also implemented.

- `Q7.h`, `Q7.cpp` and `Q7_main.cpp`: These files contain the implementation of the Black-Scholes call function, where `Q7.cpp` is the sourcefile and `Q7_main.cpp` is the main file.
- `Q8.h`, `Q8.cpp`, `Q8_main.cpp`: These files contain the implementation of the interval bisection method with generic types through the tempalte parameters, where `Q8.cpp` is the sourcefile and `Q8_main.cpp` is the main file

## How to Compile and Run
To compile and run the Q7, use the following command (assuming you are at CPP-CW):
```bash
g++ -o Q7 Q7_folder/Q7_main.cpp Q7_folder/Q7.cpp
./Q7
```
To compile and run the Q8, use the following command (assuming you are at CPP-CW): Note that `Q8.cpp` utalize the black scholes call option function defined in `Q7.cpp`.
```bash
g++ -o Q8 Q8_folder/Q8_main.cpp Q8_folder/Q8.cpp Q7_folder/Q7.cpp
./Q8
```

## Contributors
- Kelvin Wu (CID: 01955564)
- Ethan Qizhe Cui (CID: 01954652)