# C - File I/O
This topic was aimed at understanding how Files I/O is handled in C. That was achieved by looking at file descriptors and understanding use of `read`, `open`, `close`, `read`,
`write` and `dprintf` in C. The following task files helped in grasping various concepts
## 0-read_textfile.c
Function that reads a text file and prints it to the POSIX standard output.
* Prototype: `ssize_t read_textfile(const char *filename, size_t letters)`;
* where `letters` is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, returns `0`
* if `filename` is `NULL` returns `0`
* if `write` fails or does not write the expected amount of bytes, returns `0`

## 1-create_file.c
Function that creates a file.
* Prototype: `int create_file(const char *filename, char *text_content)`;
* where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file
* Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
* The created file has these permissions: `rw-------`. If the file already exists, no permissions are changed.
* if the file already exists, it's truncated
* if `filename` is `NULL` returns `-1`
* if `text_content` is `NULL` empty file is created

## 2-append_text_to_file.c
