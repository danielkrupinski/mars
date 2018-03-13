#ifndef PRELOAD_H
#define PRELOAD_H

#include "Fuzion.h"
extern "C" {
    extern char **environ;
}

extern int (*orig_open)(const char*, int oflag);
extern char* (*orig_getenv)(const char *);
extern int (*orig_execve)(const char *path, char *const argv[], char *const envp[]);
extern FILE* (*orig_fopen)(const char*, const char*);

extern "C" {
    char* getenv(const char *name);
    int execve(const char *path, char *const argv[], char *const envp[]);

    int open(const char *path, int oflag, ...);
    FILE* fopen(const char *path, const char *mode);
}


namespace Preload {
    void PrintStatus();
    bool Startup(char buildID[]);
    void CleanEnvironment();
    void Cleanup();
}

#endif // PRELOAD_H
