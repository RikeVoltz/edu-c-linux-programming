#include<dlfcn.h>


int main() {
    void *handle = dlopen("libhello.so", RTLD_LAZY);
    void (*hello_world)() = (void (*)()) dlsym(handle, "hello_world");
    hello_world();
    dlclose(handle);
    return 0;
}
