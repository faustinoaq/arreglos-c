CC=clang

run:
	rm -f 'problema$(n)'
	$(CC) problema$(n).c -o problema$(n)
	./problema$(n)
