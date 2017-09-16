Synopsis
This program illustrates the use of open system call in unix. The program accepts a filename as an input which is provided via command line when make file is run.
If the system call runs successfully and opens the given file, it prints a successful message, an error, otherwise.

Code Example
An integer is used as a file descriptor to store return value of open system call.

Installation
No installation needed.

API Reference

Tests
$cc openFile.c -o <output>
$./<output> <fileName>

License
No License
