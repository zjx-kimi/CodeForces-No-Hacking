CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = CFNH
all: $(TARGET)
$(TARGET): main.cpp
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -f $(TARGET)
