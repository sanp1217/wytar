/*
wyls.c
Author: Pablo Sanchez
Date: Feb 22, 2025

COSC 3750, Homework 5

A copy of the tar linux command.
*/

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
    int i;
    bool createOption = false;
    bool extractOption = false;
    //struct stat fileInfo;
    char *archiveName;

    // Process options
    for (i = 1; i < argc; i++){
        if(argv[i][0] == '-'){
            if(strcmp(argv[i], "-c") == 0){
                createOption = true;
            }else if(strcmp(argv[i], "-x") == 0){
                extractOption = true;
            }else if(strcmp(argv[i], "-f") == 0){
                archiveName = argv[i + 1];
            }else {
                printf("That option is not supported. Ending program.\n");
                exit(1);
            }
        }else{
            break;
        }
    }

    if(createOption && extractOption){
        printf("Cannot create and extract at the same time. Exiting.\n");
        exit(1);
    }else if(createOption && archiveName){
        printf("create was specified, now creating with filename %s",archiveName);
    }else if(extractOption && archiveName){
        printf("extract was specified, now extracting with filename %s", archiveName);
    }else if(!archiveName){
        printf("Need to specify archive name. Exiting\n");
        exit(1);
    }else{
        printf("Have to specify extraction or creation. Exiting.\n");
        exit(1);
    }

}