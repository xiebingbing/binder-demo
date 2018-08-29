#define LOG_TAG "testservice"

#define LOG_NDEBUG 0

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "TestService.h"

using namespace android;

#include<stdio.h>
 
int main(){
 
    int i=0;
 
    for(i;i<100;i++)
 
    {
 
      sleep(180);
 
      printf("i have a dream!\n");
 
    }
 
    return 0;
 
}
