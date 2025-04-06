/*
 * lexical_analyzer.c
 *
 * This program performs basic lexical analysis by reading tokens from an input file
 * and categorizing them as keywords, operators, or identifiers.
 * The user can choose whether to perform the analysis.
 *
 * To compile: gcc lexical_analyzer.c -o lexical_analyzer
 * To run: ./lexical_analyzer
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of C keywords for this example
const char *keywords[] = {"int", "float", "if", "else", "for", "while", "return", "void"};
const int keywordCount = sizeof(keywords) / sizeof(keywords[0]);

// List of operators for this example
const char *operators[] = {"+", "-", "*", "/", "=", "==", "++", "--", "!="};
const int operatorCount = sizeof(operators) / sizeof(operators[0]);

// Function declarations
int isKeyword(const char *token);
int isOperator(const char *token);
void analyzeToken(const char *token);

int main()
{
    char filename[100];
    char buffer[256];
    char choice;

    printf("Enter the input filename: ");
    scanf("%99s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    // Read tokens from the file until end-of-file
    while (fscanf(fp, "%s", buffer) != EOF)
    {
        analyzeToken(buffer);
    }
    fclose(fp);
    return 0;
}

// Check if a token is a keyword
int isKeyword(const char *token)
{
    for (int i = 0; i < keywordCount; i++)
    {
        if (strcmp(token, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Check if a token is an operator
int isOperator(const char *token)
{
    for (int i = 0; i < operatorCount; i++)
    {
        if (strcmp(token, operators[i]) == 0)
            return 1;
    }
    return 0;
}

// Analyze and print the type of token
void analyzeToken(const char *token)
{
    if (isOperator(token))
        printf("Operator: %s\n", token);
    else if (isKeyword(token))
        printf("Keyword: %s\n", token);
    else if (isalpha(token[0]) || token[0] == '_')
        printf("Identifier: %s\n", token);
    else
        printf("Literal/Unknown: %s\n", token);
}
