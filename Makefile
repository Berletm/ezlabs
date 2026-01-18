CC     = g++
CFLAGS = -O3 -g

.PHONY: all clean

all: task1/main task2/main task3/main task4/main task5/main task6/main
	
task1/main: task1/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

task2/main: task2/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

task3/main: task3/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

task4/main: task4/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

task5/main: task5/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

task6/main: task6/main.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f task1/main task2/main task3/main task4/main task5/main task6/main
