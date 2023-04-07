## [C - File I/O](0x15-file_io):file_folder: file_folder:
## [Tests](./tests) Folder Tests

[Main.h](./main.h) ## This directory houses all of the prototypes.

| Prototype |
| File | ------------------------- | -------------------------------------------------------------------- |
|'read_textfile.c' |'ssize_t read_textfile(const char *filename, size_t letters);' |
|'1-create_file.c' | 'int create_file(const char *filename, const char *text_content);' |
| '2-append_text_to_file.c' | 'const char *filename, const char *text_content);'

## Job:page_with_curl:

* '0. Take care, she's close'
* [0-read_textfile.c](./0-read_textfile.c): A C function that reads a text file and outputs it to the standard POSIX output.
* The 'letters' option specifies how many letters the function should read and output.
  If the file is 'NULL' or cannot be opened or read, the function returns '0'.
  Returns '0' if the 'write' function fails or does not write the anticipated number of bytes. Otherwise, the method returns the actual amount of bytes it can read and output.
* '1. Snowfall' * [1-create_file].c](./1-create_file.c): C file creation function.
* The 'filename' parameter specifies the name of the file to be created.
* The 'text_content' option is a null-terminated string to be written to the file. If the value of 'text_content' is 'NULL,' the function generates an empty file.
* The file created has the permissions 'rw-------'.
* If the file already exists, the permissions are not altered.
* Existing files are shortened.
* If 'filename' is 'NULL' or the function fails, the function returns '-1'.
* If not successful, returns '1'.
* '2. Speak softly, she can hear you.'
* [2-append_text_to_file.c](./2-append_text_to_file.c): A C function for appending text to the end of a file.
* The filename is specified via the option 'filename.' The 'text_content' option is a null-terminated string to add to the file. If the file does not exist, the function does not create it.
* Nothing is added to the file if 'text_content' is NULL.
* If the function fails or 'filename' is 'NULL', the result is '-1'.
  If the file does not exist or the user does not have write permissions to it, the function returns '-1'. Otherwise, the value '1' is returned.
* `3. cp` * [3-cp.c](./3-cp.c): A C program for copying the contents of one file to another.
* 'cp file_from file_to' is used. * If 'file_to' already exists, it is truncated. The file created has the permissions 'rw-rw-r--'. If the file already exists, the permissions are not altered.
* If the number of parameters is wrong, the function outputs 'Usage: cp file_from file_to', a new line on the 'POSIX' standard error, and quits with code '97'.
* If 'file_from' does not exist or the user does not have read rights on it, the function outputs 'Error: Can't read from file NAME_OF_THE_FILE', then a new line, and quits with code '98'.
* Where 'NAME_OF_THE_FILE' is the program's first argument.
* If no files can be created or 'write' to 'file_to' fails, the function outputs 'Error: Can't write to NAME_OF_THE_FILE', then a new line, and quits with code '99'.
* Where 'NAME_OF_THE_FILE' is the program's second parameter.
* If the user is unable to close a file descriptor, the function outputs 'Error: Can't close fd FD_VALUE', a new line on the 'POSIX' standard error, and quits with code '100'.
  Where 'FD_VALUE' is the file descriptor value.
* '4 elf'
* [100-elf_header].c](./100-elf_header.c): A C program that shows information from the 'ELF' header at the beginning of a 'ELF' file.
* Use 'elf_header elf_filename'
* Displayed data:
* Magic
* Class
* Data
* Version
* OS/ABI
* ABI Version
* Type
* Entry point address
* The format is similar to'readelf -h' (version '2.26.1').
* If an error occurs, or if the file is not a 'ELF' file, the function prints an error message to'stderr' and quits with a status of '98'.

/**
  *This README File Content was coppied from alx intranet.
  *It is the a summary of what this task is all about.
*/  
