/**
 * @file main.c
 * @author Ethan Juan (ethan@psvt.com.tw)
 * @brief This is getting machine key from serial number
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include"machinekey.h"

void main(int argc, char *argv[])
{
    // unsigned char sn[]="96EF1A5F";
    // unsigned char sn2[]="321af8e5";
    int i=0;
    int j=0;
    int isSNok=0;
    unsigned char mk[8]={0};
    if (argc>1)
    {
        for(i=1; i < argc; i++)
        {
            // printf("argc = %d\n",argc);
            if (strlen(argv[i])==8)
            {
                for(j=0; j<8; j++)
                {
                    if(isxdigit(argv[i][j]))
                    {
                        isSNok++;
                    }
                    else
                    {
                        printf("Digit of serial number must be hexadecimal!\n");
                        break;
                    }
                }
                if (isSNok==8)
                {
                    int r=MachineKey(argv[i],mk);
                    if(r==0)
                        printf("%X%X%X%X%X%X%X%X\n",mk[0],mk[1],mk[2],mk[3],mk[4],mk[5],mk[6],mk[7]);
                    else
                        printf("Wrong serial number!\n");
                }
            }
            else
            {
                // printf("size of argv = %lu\n",strlen(argv[i]));
                // printf("argv=%s\n",argv[i]);
                printf("Please input correct digits of serial number!\n");
            }
            isSNok=0;    
        }
    }
    else
    {
        printf("please input parameter \"serial number\" behind command\n");
    }
}