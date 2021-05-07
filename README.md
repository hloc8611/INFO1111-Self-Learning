# INFO1111-Self-Learning

## Level 1 Artifact

### HelloWorld.c
A simple "Hello, World!" program.

### Calculator.c
Runs a simple calculator, allowing the user to add, subtract, 
    multiply and divide to decimal point numbers. Extra functions 
    are included when the operator is changed.
    
    Operator Functions:
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    h -> Help
    q -> Quit

    Example:
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~ CALCULATOR ~~~~~~~~~~~~~~~~
    ~~~~~~~ Change operator to h for Help ~~~~~~
    Enter an equation (number operator number): 1 + 1
    The answer is 2

    Enter an equation (number operator number): 1 q 1
    ~~~~~~~~~~~~~~~~~ GOODBYE ~~~~~~~~~~~~~~~~~~
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

### Duplicates.c
A program to find the first instance (if any) of multiple letters in
	the same word. Will tell the user the letter that is duplicated and
	how many times it appears in the word.

	Example:
	Enter a word: Hello
	The letter l is repeated 2 times.

## Compiling and Running the Programs

If you do not already have a C environment installed on your system, 
    you can upload the Level 1 Artifacts into an EdStem Workspace to 
    compile and run them. To compile the code, use the command:

    gcc <Filename>.c -o <Filename>

To run the code after compiling, enter the command:

    ./<Filename>

For example, to run the HelloWorld.c program, you would enter the commands:

    gcc HelloWorld.c -o HelloWorld
    ./HelloWorld
    
    