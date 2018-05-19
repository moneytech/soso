#ifndef SOSOUSDK_H
#define SOSOUSDK_H

#include "commonuser.h"

void drawCharAt(unsigned char* windowBuffer, unsigned short int c, int cx, int cy, int windowWidth, int windowHeight, unsigned int fg, unsigned int bg);

unsigned int getUptimeMilliseconds();
void sleepMilliseconds(unsigned int ms);
int executeOnTTY(const char *path, char *const argv[], char *const envp[], const char *ttyPath);
void sendCharacterToTTY(int fd, char c);
int getMessageQueueCount();
int getNextMessage(SosoMessage* message);
int getTTYBufferSize(int fd);
int getTTYBuffer(int fd, TtyUserBuffer* ttyBuffer);
int setTTYBuffer(int fd, TtyUserBuffer* ttyBuffer);
void* mmap(void *addr, int length, int flags, int fd, int offset);
int munmap(void *addr, int length);
int shm_open(const char *name, int oflag, int mode);
int shm_unlink(const char *name);
int ftruncate(int fd, int size);

#endif //SOSOUSDK_H
