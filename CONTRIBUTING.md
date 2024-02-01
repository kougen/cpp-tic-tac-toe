# Contribution guidelines

## Name conventions

We are following the CamelCase naming conventions here are a list of examples:

### Classes and Structs
```cpp
class MyClass {};
class CarEngine {};
struct UserDetails {};
struct GraphicsRenderer {};
```
Classes and structs typically start with an uppercase letter, and each subsequent word also starts with an uppercase letter.

### Functions and Methods
```cpp

void calculateInterest() {}
char* readFileContents(std::string fileName) {}
void printUserDetails() {}
void updateGraphicsRenderer() {}

```
Functions and methods often start with a lowercase letter, and each subsequent word starts with an uppercase letter. This style is sometimes referred to as lowerCamelCase, especially to differentiate between class names and functions/methods.

### Variables
```cpp
int totalAmount;
std::string fileName;
char* userInput;
int renderingSpeed;
```
Variable names also follow the lowerCamelCase convention, starting with a lowercase letter and capitalizing the first letter of each subsequent word.

## Pull requests

When creating pull requests make sure to check the **Allow edits from maintainers** checkbox.
