#!/usr/bin/python3
import sys

def add_arguments(arguments):
    return sum(int(arg) for arg in arguments)

if __name__ == "__main__":
    # Extract command line arguments excluding the script name
    arguments = sys.argv[1:]

    # Check if there are any arguments
    if arguments:
        # Calculate the sum and print the result
        result = add_arguments(arguments)
        print(result)
    else:
        print("No arguments provided.")
