# minishell

## Description
This is a simple shell implementation in C, designed to mimic the behavior of the Unix shell. It supports basic command execution, input/output redirection, and piping.
It is a project developed as part of the curriculum at 42 School.
The shell is designed to be a learning tool for understanding how shells work and how to implement basic shell features in C.
It is not intended for production use and may not handle all edge cases or errors that a full-featured shell would.

## Features
- Command execution
- Input/output redirection
- Piping
- Environment variable handling
- Basic error handling
- Built-in commands (cd, exit)
- Support for background processes
- Support for command history
- Support for command line editing
- Support for command line completion
- Support for command line history
- Support for command line shortcuts
- Support for command line aliases
- Support for command line macros

## Requirements
- C compiler (cc)
- Make
- GNU Readline library (for command line editing and history)
- GNU Bash (for testing and comparison)

## Installation

1. Clone the repository:
   ```bash
   git clone
   ```
2. Change to the project directory:
   ```bash
   cd minishell
   ```
3. Build the project:
   ```bash
   make
   ```
4. Run the shell:
   ```bash
   ./minishell
   ```

## Usage
- To run a command, simply type it in the shell prompt and press Enter.
- To exit the shell, type `exit` and press Enter.
- To change the current working directory, use the `cd` command followed by the path to the directory.
