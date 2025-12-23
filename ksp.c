#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include</etc/ksp.h>

int main(int argc,char *argv[]){
    if(argc<2) {
        char ksp[256];
        snprintf(ksp,sizeof(ksp),"exec %s",gui);
        system(ksp);
    }
    if(strcmp(argv[1], "recompile")==0) {
        system("gcc -o /usr/bin/ksp /etc/ksp/ksp.c");
    }
}
