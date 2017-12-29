CFLAGS =  -I/home/ran/git/multichain/src/chainparams -fPIC -MMD -Wall
srcdir = /home/ran/git/multichain/src/
LIB_NAME = multichain
LFLAGS = -Llib -l$(LIB_NAME) -Wl,-rpath,\$$ORIGIN/../lib

all: lib/lib$(LIB_NAME).so
install:
	install -c lib/lib$(LIB_NAME).so /usr/lib/

build/multichainlib.o: ../multichain/multichainlib.cpp ../multichain/multichain.h ../chainparams/globals.h ../utils/util.h ../multichain/multichainlib.h  ../permissions/permission.h
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $< -o $@

build2/rpclist.o: ../rpc/rpclist.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $(BITCOIN_INCLUDES) $(RELDFLAGS) $(AM_LDFLAGS) $< -o $@

build1/buildgenesis.o: ../chainparams/buildgenesis.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $(BITCOIN_INCLUDES) $(RELDFLAGS) $(AM_LDFLAGS) $< -o $@

lib/lib$(LIB_NAME).so:  build/multichainlib.o build1/buildgenesis.o build2/rpclist.o
	mkdir -p $(@D)
	g++ -I$(srcdir) $(CFLAGS) -L/usr/lib -lbitcoinconsensus -lbitcoin_multichain $^ -shared -Wl,-soname,lib$(LIB_NAME).so -o $@ -include $(shell find build -name "*.d" 2> /dev/null)

clean:
	rm -rf bin build lib
