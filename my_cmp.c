#!/bin/bash

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>


int main(int argc,char *argv[]){

if (argc > 2){
// crear un arxiu
fd1 =  open(argv[1], O_RDONLY);
if (fd1 == -1){
        perror("L'arxiu no existeix");
        exit (-1);
	close(fd1)
        }

fd2 =  open(argv[2], O_RDONLY);
//comprovar si existeix
if (fd2 == -1){
        perror("L'arxiu no existeix");
        exit (-1);
        }

//escriure coses a l'arxiu
char buf1;
char buf2;
size_t count = 1;
int compt = 1;
int compt_bytes = 1;
ssize_t char_fd1, char_fd2;
char_fd1 = read(fd1, buf1, count);
char_fd2 = read(fd2, buf2, count);
while(char_fd1 > 0 && char_fd2 > 0){
	if  (buf1 == buf2){
		compt_bytes = compt_bytes +1
		if (buf1 == "/n"){
			compt = compt +1
        	}
	}
	else{
		printf("El byte és: %d i la línia és %d"compt_bytes,compt)
		return compt_bytes
	}
        char_fd1 = read(fd1, buf1, count);
	char_fd2 = read(fd2, buf2, count);
        }
close(fd1)
close(fd2)
	}
}

