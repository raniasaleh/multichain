CFLAGS =  -I/home/ran/git/multichain/src/chainparams -fPIC -MMD -Wall
srcdir = /home/ran/git/multichain/src/
LIB_NAME_UTIL = multichainutil
LIB_NAME_D = multichaind
LIB_DEPD_NAME = multichaindepd

all: lib/lib$(LIB_NAME_UTIL).so lib/lib$(LIB_DEPD_NAME).so lib/lib$(LIB_NAME_D).so
install:
	install -c lib/lib$(LIB_NAME_UTIL).so lib/lib$(LIB_DEPD_NAME).so lib/lib$(LIB_NAME_D).so /usr/lib/

build1/multichaindepd.o: ../multichain/multichaindepd.cpp  ../chainparams/globals.h
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $< -o $@
build2/multichainlib.o: ../multichain/multichainutillib.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $< -o $@

build3/rpclist.o: ../rpc/rpclist.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $(BITCOIN_INCLUDES) $(RELDFLAGS) $(AM_LDFLAGS) $< -o $@

build4/buildgenesis.o: ../chainparams/buildgenesis.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $(BITCOIN_INCLUDES) $(RELDFLAGS) $(AM_LDFLAGS) $< -o $@

build5/multichaindlib.o: ../multichain/multichaindlib.cpp
		mkdir -p $(@D)
		g++ -I$(srcdir) -c $(CFLAGS) $< -o $@

build6/multichainlib.o:  ../multichain/blockchain.cpp
			mkdir -p $(@D)
			g++ -I$(srcdir) -c $(CFLAGS) $< -o $@

lib/lib$(LIB_DEPD_NAME).so:  build4/buildgenesis.o build3/rpclist.o build1/multichaindepd.o
			mkdir -p $(@D)
			g++ -I$(srcdir) $(CFLAGS) -L/usr/lib $^ -shared -Wl,-soname,lib$(LIB_DEPD_NAME).so -o $@ -include $(shell find build -name "*.d" 2> /dev/null)

lib/lib$(LIB_NAME_UTIL).so:  build2/multichainlib.o build6/multichainlib.o
	mkdir -p $(@D)
	g++ -I$(srcdir) $(CFLAGS) -L/usr/lib  $^ -shared -Wl,-soname,lib$(LIB_NAME_UTIL).so -o $@ -include $(shell find build2 -name "*.d" 2> /dev/null)

lib/lib$(LIB_NAME_D).so: build5/multichaindlib.o
		mkdir -p $(@D)
		g++ -I$(srcdir) $(CFLAGS) -L/usr/lib  $^ -shared -Wl,-soname,lib$(LIB_NAME_D).so -o $@ -include $(shell find build5 -name "*.d" 2> /dev/null)

clean:
	rm -rf bin build1 build2 build3 build4 build5  build6 lib
