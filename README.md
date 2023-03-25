# Get_Next_Line
| prototype |
| --------- |
| char  *get_next_line(int fd); |

This function returns a single line from a given file descriptor.

If called in a loop, get_next_line returns the entire contents of a file, line by line until it reaches the end of the file.

It can be compiled specifying any BUFFER_SIZE.
BUFFER_SIZE will define the buffer size **for read()**.
You will compile your code as follows (a buffer size of 42 is used as an example):
cc -D BUFFER_SIZE=42 <files>.c
