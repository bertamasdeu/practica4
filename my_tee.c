#!/bin/bash

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>


int main(int argc,char *argv[]){

if (argc == 2){
// crear un arxiu
fd = open(argv[1],O_RDWR|O_CREAT|O_TRUNC,0644);

//comprovar si existeix
if (fd == -1){
	perror("L'arxiu no existeix");
	exit (-1);
	}

//escriure coses a l'arxiu
char buf;
size_t count = 1;
int count1;
int num;
count1 = read(0, &buf, count);
while(count1 == 1){
	printf("%c",buf);
	write(1, buf, count)
	num = write(fd, buf, count);

	if (num == 0){ 	
		perror("L'arxiu no existeix");
        	exit (-1);
		break
		}
	read(fd, $buf, count);
	}

}

}

