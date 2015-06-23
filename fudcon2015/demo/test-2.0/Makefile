CFLAGS = -O2 -g -Wall
prefix = /usr
bindir = ${prefix}/bin
libdir = ${prefix}/lib64
includedir = ${prefix}/include
INSTALL = /usr/bin/install
TARGET = test
TARGETLIB = libtest.so
RM = rm -f

all: test
test: $(TARGET).c
	$(CC) $(CFLAGS) -fPIC -c $(TARGET).c
	$(CC) -shared  -o $(TARGETLIB) $(TARGET).o

install: all
	$(INSTALL) -D $(TARGETLIB) $(libdir)/$(TARGETLIB)
	$(INSTALL) -D $(TARGET).h $(includedir)/$(TARGET).h

clean:
	$(RM) $(TARGET) $(TARGET).o $(TARGETLIB)
uninstall:
	$(RM) $(libdir)/$(TARGETLIB) $(includedir)/$(TARGET).h
