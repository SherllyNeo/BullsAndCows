src=src
binary_dir=bin
cc=gcc


bac: $(src)/main.c 
	$(CC) $(src)/main.c -g -std=gnu11 -o $(binary_dir)/bac 
install:
	cp -f $(binary_dir)/bac /usr/local/bin
clean:
	$(CC) $(src)/main.c -g -std=gnu11 -o $(binary_dir)/bac -lm && rm vg*

