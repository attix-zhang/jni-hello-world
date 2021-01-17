#include "jni_hello_world_App.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_jni_hello_world_App_sayHelloWorld(JNIEnv *env,jobject obj) {
    printf("Hello World!\n");
    return;
}
