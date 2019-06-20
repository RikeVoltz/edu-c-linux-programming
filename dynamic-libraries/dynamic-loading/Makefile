exe: main.c lib
	gcc -o hello -Wl,-rpath,. main.c -ldl

lib: hello.o
	gcc -shared -fPIC -o libhello.so hello.c
