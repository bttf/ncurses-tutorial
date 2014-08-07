main: main.o warp.o
	gcc -o main main.o warp.o -lncurses
main.o: main.c
	gcc -c main.c
warp.o: warp.c
	gcc -c warp.c
clean:
	rm main *.o
