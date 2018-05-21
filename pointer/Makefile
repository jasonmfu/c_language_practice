
BIN_NAME = pointer_group

pointer_group = pointer_group.c

.PHONY:all clean

all:${BIN_NAME}

${BIN_NAME}:${pointer_group}
	gcc ${pointer_group} -o ${BIN_NAME}

clean:
	@rm -rf *.o ${BIN_NAME}
