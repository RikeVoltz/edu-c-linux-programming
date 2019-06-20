exe: main.c lib
	gcc -o hello -Wl,-rpath,. -L. main.c -lhello

lib: hello.o
	gcc -shared -fPIC -o libhello.so hello.c
