#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void checkElfHeader(unsigned char *e_ident);
void printMagicNumbers(unsigned char *e_ident);
void printElfClass(unsigned char *e_ident);
void printDataEncoding(unsigned char *e_ident);
void printElfVersion(unsigned char *e_ident);
void printOsAbi(unsigned char *e_ident);
void printAbiVersion(unsigned char *e_ident);
void printElfType(unsigned int e_type, unsigned char *e_ident);
void printEntryPoint(unsigned long int e_entry, unsigned char *e_ident);
void closeFile(int fd);


#endif
