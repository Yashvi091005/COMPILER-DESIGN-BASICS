# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECHIT SOLUTIONS

*NAME*: YASHVI BHALA

*INTERNID*: YASHVI38684

*DOMAIN*: C-LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

##REPORT ON LEXICAL ANALYZER IN C
1. Title of the Program
Lexical Analyzer in C for Token Classification

2. Objective
To create a basic Lexical Analyzer in C that reads an input file and classifies each token into categories such as keywords, operators, identifiers, or others, emulating part of the compilation process used in programming language interpreters and compilers.

3. Tools & Technologies Used
Programming Language: C

Compiler: GCC (GNU Compiler Collection)

Editor/IDE: Visual Studio Code (VS Code)

Extensions Used: C/C++ (Microsoft), Code Runner

Standard C Libraries:

<stdio.h> – for file input/output

<stdlib.h> – for memory and exit handling

<string.h> – for string comparison

<ctype.h> – for character classification

4. Description of the Program
The program, lexical_analyzer.c, reads a user-specified input file and performs basic lexical analysis, a crucial step in the compilation process. In lexical analysis, source code is broken down into individual tokens, which are then categorized into types based on syntax rules.

Core Functionalities:
Reading Input File:

The user enters the name of a file containing C-like code.

The program opens the file and reads each word (token) using fscanf().

Token Classification:

Each token is passed to the analyzeToken() function.

Tokens are classified into one of the following categories:

Keyword – e.g., int, float, while

Operator – e.g., +, ==, !=

Identifier – valid variable/function names starting with alphabets or underscores

Literal/Unknown – tokens that don't match the above (e.g., numbers, symbols)

Support Functions:

isKeyword() checks whether a token matches any keyword in the predefined list.

isOperator() checks whether the token is a recognized operator.

Classification is printed directly to the terminal.

5. Program Workflow
User inputs the filename.

Program opens and reads tokens from the file.

Each token is evaluated:

Is it a keyword? → Print as keyword.

Is it an operator? → Print as operator.

Is it a valid identifier (alphabet/underscore start)? → Print as identifier.

Else → Print as unknown or literal.

6. Applications & Use Cases
Compiler Design: This program simulates a fundamental part of compiler front-end (lexical analysis).

Syntax Highlighting: Forms the basis of syntax coloring in text editors.

Static Analysis Tools: Used in tools that analyze code quality or structure.

Educational Use: Helps beginners understand how programming languages are parsed.

7. Advantages
Simple and Understandable: Easy to extend with more rules or token types.

Customizable: Can add support for numbers, symbols, or even multi-character operators like +=, &&.

Practical Exposure: Gives real insight into how compilers handle source code.

File-Based Input: Mimics how real-world compilers read code from files.

8. Conclusion
The lexical_analyzer.c program demonstrates a basic lexical analyzer that reads tokens from a source file and classifies them based on C syntax rules. Implemented in C using standard I/O and string operations, it reflects an essential part of how compilers preprocess and understand source code. The project is built using Visual Studio Code and the GCC compiler, with portability and clarity prioritized. It is an ideal starting point for understanding compiler design and token recognition.

#output: 

![Image](https://github.com/user-attachments/assets/b2da9a7f-b546-40a9-807a-e88fda8c6498)
