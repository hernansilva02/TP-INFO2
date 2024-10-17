CC = avr-gcc
INCLUDE = -I/lib
CFLAGS = -mmcu=atmega128 -g -I/usr/avr/include

FORMAT = ihex

SRC_DIR = src
BUILD_DIR = build
SRC_FILES = $(shell find . -name '*.c' |  sed 's|^\./||')

TARGET = main.elf
HEX_TARGET = main.hex

$(shell mkdir -p ./build)

all: $(BUILD_DIR)/$(HEX_TARGET)

$(BUILD_DIR)/$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

$(BUILD_DIR)/$(HEX_TARGET):$(BUILD_DIR)/$(TARGET)
	avr-objcopy -j .data -j .text -O $(FORMAT) $< $@

clean:
	rm -rf $(BUILD_DIR)
