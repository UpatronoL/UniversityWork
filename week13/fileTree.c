#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

struct dirent *dr;
struct stat statbuf;
void fileprint(char * basePath);

int main(int argc, char **argv)
{
    char *basePath;
    if(argc > 2)
    {
	printf("Usage: ./fileprint path-to-directory\n");
	return -1;
    }
    if(argc == 2) basePath = argv[1];
    else basePath = ".";

    fileprint(basePath);
    return 0;
}

void fileprint(char * basePath)
{
    DIR * dir = opendir(basePath);
    char path[1024];

    if(!dir)
    {
        printf("Cannot open directory %s\n", basePath);
        return;
    }

    while((dr = readdir(dir)) != NULL)
    {
        if(strcmp(dr->d_name, ".") != 0 && strcmp(dr->d_name, "..") != 0)
        {
            if(strcmp(basePath, ".") == 0) snprintf(path, sizeof(path), "%s", dr->d_name);
            else printf("%s/%s", basePath, dr->d_name);
        } 

        if(stat(path, &statbuf) == 0)
        {
            printf("%s\n", path);
            if(S_ISDIR(statbuf.st_mode)) fileprint(path);
        }
    }
    closedir(dir);
}
