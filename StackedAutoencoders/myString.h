#pragma once
#include <stdlib.h>

//���Ҵ�
int findStr(char *src,char *dst,int srcLen,int dstLen,int startPos = 0);

//��ȡ���е�double����
double getDouble(char *str,char *startStr,char *endStr,int strLen,int startStrLen,int endStrLen,int startPos = 0);

//��ȡ���е�int����
int getInt(char *str,char *startStr,char *endStr,int strLen,int startStrLen,int endStrLen,int startPos = 0);
