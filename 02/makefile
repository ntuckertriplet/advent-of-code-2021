CFLAGS= -g -I. -Og -Wall
DEPS =
LIBS =
EXEC_FILE = day2_pt1
EXEC_FILE_2 = day2_pt2

all: $(EXEC_FILE) $(EXEC_FILE_2)

%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $< 

$(EXEC_FILE): day2_pt1.o
	$(CC) $^ $(CFLAGS) -o $@ $(LIBS)

$(EXEC_FILE_2): day2_pt2.o
	$(CC) $^ $(CFLAGS) -o $@ $(LIBS)

clean:
	rm -f *.o $(EXEC_FILE) $(EXEC_FILE_2)
