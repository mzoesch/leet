
FILE = main

CC := g++
CPPFLAGS := -std=c++14
FLAGS := -c

OUT := output

$(OUT): $(FILE).o
	$(CC) $(CPPFLAGS) $(FILE).cpp -o $(OUT)


$(FILE).o: $(FILE).cpp
	$(CC) $(CPPFLAGS) $(FLAGS) $(FILE).cpp -o $(FILE)


.PHONY: clean
clean:
	-rm $(FILE).o
	-rm $(FILE).d
	-rm $(OUT)
	-rm $(FILE)
