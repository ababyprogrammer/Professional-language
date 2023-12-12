# Function in C++

In this solution, the program first splits the input string into a vector of strings using the `split_string` function. It then converts each string in the vector into an integer using the `std::stoi` function and stores them in a vector of integers.

The vector of integers is then sorted in ascending order.

The program then iterates through the sorted vector of integers in reverse order, checking if each number is unique (__i.e__., its count in the vector is 1). If a unique number is found, the program prints it and exits. If no unique number is found, the program prints a message indicating this fact and exits.