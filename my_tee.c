#!/bin/bash

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(int argc,char *argv[]){

if (argc > 2){
// crear un arxiu
fd =  open(argv[1], O_CREAT);

//comprovar si existeix
if (fd == -1){
	perror("L'arxiu no existeix");
	exit (-1);
	}

//escriure coses a l'arxiu
ssize_t read(fd, int buf, size_t count);
while(read == 1){
	echo($buf)
	ssize_t write(fd, buf, count);

	if (write == 0){ 	//esto esta bien?
		perror("L'arxiu no existeix");
        	exit (-1);
		break
		}
	ssize_t read(fd, int buf, size_t count);
	}

}

}
