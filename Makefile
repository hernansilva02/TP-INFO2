CC = avr-gcc
INCLUDE = -I/lib
CFLAGS = -Wall -gdwarf-2 -fsigned-char -MD -MP -DF_CPU=10000000 -mmcu=atmega128 -g -I/usr/avr/include

FORMAT = ihex

SRC_DIR = src
LIBS_DIR = lib
BUILD_DIR = build

MAIN_FILE = main.c

SRC = $(wildcard $(SRC_DIR)/*.c)
SRC += $(MAIN_FILE)
OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(notdir $(SRC)))

LDFLAGS = -Wl,-Map=main.map,--cref
LDFLAGS += -L$(LIBS_DIR)

TARGET = main.elf
HEX_TARGET = main.hex

$(shell mkdir -p ./build)

all: $(BUILD_DIR)/$(HEX_TARGET)

$(BUILD_DIR)/$(HEX_TARGET):$(BUILD_DIR)/$(TARGET)
	avr-objcopy -j .data -j .text -O $(FORMAT) $< $@

$(BUILD_DIR)/$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $^ --output  $@ $(LDFLAGS)

$(BUILD_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

#generacion de archivo objeto .o del main.c
$(BUILD_DIR)/main.o:$(MAIN_FILE)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -f main.map
