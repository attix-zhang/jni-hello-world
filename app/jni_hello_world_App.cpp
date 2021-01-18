#include "jni_hello_world_App.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_jni_hello_world_App_helloWorldPublic(JNIEnv *env,jobject obj) {
    printf("[Public]: Hello World!\n");
    return;
}

JNIEXPORT void JNICALL Java_jni_hello_world_App_helloWorldPrivate(JNIEnv *env,jobject obj) {
    printf("[Private]: Hello World!\n");
    return;
}
