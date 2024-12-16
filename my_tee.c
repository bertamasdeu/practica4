#!/bin/bash

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>


int main(int argc,char *argv[]){

if (argc == 2){
// crear un arxiu
open(argv[1], O_CREAT,-rw-r--r--);
fd = open(argv[1],O_RDWR)

//comprovar si existeix
if (fd == -1){
	perror("L'arxiu no existeix");
	exit (-1);
	}

//escriure coses a l'arxiu
int buf;
size_t count = 1;
read(0, buf, count);
while(read == 1){
	printf("%c",buf);
	ssize_t write(fd, buf, count);

	if (write == 0){ 	//esto esta bien?
		perror("L'arxiu no existeix");
        	exit (-1);
		break
		}
	ssize_t read(fd, buf, count);
	}

}

}

