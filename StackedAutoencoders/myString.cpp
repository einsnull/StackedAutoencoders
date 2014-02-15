#pragma once
#include "myString.h"

//���Ҵ�
int findStr(char *src,char *dst,int srcLen,int dstLen,int startPos)
{
    int i,j;
    for(i = startPos;i < srcLen - dstLen + 1;i++)
    {
        if(src[i] == dst[0])
        {
            if(dstLen == 1)
            {
                return i;
            }
            for(j = 1;j < dstLen;j++)
            {
                if(src[i + j] != dst[j])
                {
                    break;
                }
            }
            if(dst[j] == 0)
            {
                return i;
            }
        }
    }
    return -1;
}

//��ȡ���е�double����
double getDouble(char *str,char *startStr,char *endStr,int strLen,int startStrLen,int endStrLen,int startPos)
{
	int i = findStr(str,startStr,strLen,startStrLen,startPos);
	int j = findStr(str,endStr,strLen,endStrLen,i + startStrLen);
	str[j+1] = 0;
	return atof(&str[i + startStrLen]);
}

//��ȡ���е�int����
int getInt(char *str,char *startStr,char *endStr,int strLen,int startStrLen,int endStrLen,int startPos)
{
	int i = findStr(str,startStr,strLen,startStrLen,startPos);
	int j = findStr(str,endStr,strLen,endStrLen,i + startStrLen);
	str[j+1] = 0;
	return atoi(&str[i + startStrLen]);
}