CFLAGS =  -I/home/ran/git/multichain/src/chainparams -fPIC -MMD -Wall
srcdir = /home/ran/git/multichain/src/
LIB_NAME = multichain
LFLAGS = -Llib -l$(LIB_NAME) -Wl,-rpath,\$$ORIGIN/../lib

SRC_FILES = $(wildcard src/*.cpp)
O_FILES = $(patsubst %.cpp,build/%.o,$(SRC_FILES))

BOOST_CPPFLAGS = -pthread -I/usr/include
am__append_1 = -I$(srcdir)/leveldb/include \
	-I$(srcdir)/leveldb/helpers/memenv
LEVELDB_CPPFLAGS =  $(am__append_1)
CRYPTO_CFLAGS =
SSL_CFLAGS =
BDB_CPPFLAGS =
RELDFLAGS = -Wl,--exclude-libs,ALL

am__append_4 = $(BDB_CPPFLAGS)

BITCOIN_INCLUDES=-I$(srcdir) -I$(srcdir)/obj $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) $(CRYPTO_CFLAGS) $(SSL_CFLAGS)
PTHREAD_CFLAGS = -pthread
PTHREAD_LIBS =
BITCOIN_INCLUDES += -I$(srcdir)/secp256k1/include
AM_LDFLAGS = $(PTHREAD_CFLAGS) $(LIBTOOL_LDFLAGS)
LIBTOOL_APP_LDFLAGS =

DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/ran/git/multichain/build-aux/missing aclocal-1.14
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = /usr/bin/ar
AUTOCONF = ${SHELL} /home/ran/git/multichain/build-aux/missing autoconf
AUTOHEADER = ${SHELL} /home/ran/git/multichain/build-aux/missing autoheader
AUTOMAKE = ${SHELL} /home/ran/git/multichain/build-aux/missing automake-1.14
AWK = mawk
BDB_CPPFLAGS =
BDB_LIBS = -ldb_cxx-4.8
BOOST_CHRONO_LIB = -lboost_chrono
BOOST_CPPFLAGS = -pthread -I/usr/include
BOOST_FILESYSTEM_LIB = -lboost_filesystem
BOOST_LDFLAGS = -L/usr/lib/x86_64-linux-gnu
BOOST_LIBS = -L/usr/lib/x86_64-linux-gnu -lboost_system -lboost_filesystem -lboost_program_options -lboost_thread -lboost_chrono
BOOST_PROGRAM_OPTIONS_LIB = -lboost_program_options
BOOST_SYSTEM_LIB = -lboost_system
BOOST_THREAD_LIB = -lboost_thread
BOOST_UNIT_TEST_FRAMEWORK_LIB = -lboost_unit_test_framework
BREW =
BUILD_QT = qt
BUILD_TEST = test
BUILD_TEST_QT = test
CC = gcc
CCACHE =
CCDEPMODE = depmode=gcc3
CFLAGS += -g -O2
CLIENT_VERSION_BUILD = 0
CLIENT_VERSION_IS_RELEASE = true
CLIENT_VERSION_MAJOR = 0
CLIENT_VERSION_MINOR = 10
CLIENT_VERSION_REVISION = 0
COMPARISON_TOOL_REORG_TESTS = 0
COPYRIGHT_YEAR = 2015
CPP = gcc -E
CPPFLAGS =  -DBOOST_SPIRIT_THREADSAFE -DHAVE_BUILD_INFO -D__STDC_FORMAT_MACROS  -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=2
CRYPTO_CFLAGS =
CRYPTO_LIBS = -lcrypto
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -g -O2 -Wall -Wextra -Wformat -Wformat-security -Wno-unused-parameter  -Wstack-protector -fstack-protector-all -fPIE -fvisibility=hidden
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL =
DUMPBIN =
ECHO_C =
ECHO_N = -n
ECHO_T =
EGREP = /bin/grep -E
EXEEXT =
FGREP = /bin/grep -F
GCOV = /usr/bin/gcov
GENHTML =
GENISOIMAGE =
GIT = /usr/bin/git
GREP = /bin/grep
HEXDUMP = /usr/bin/hexdump
INSTALL = /usr/bin/install -c
INSTALLNAMETOOL =
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
JAVA = /usr/bin/java
JAVA_COMPARISON_TOOL =
LCOV =
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS =   -Wl,-z,relro -Wl,-z,now -pie
LEVELDB_CPPFLAGS =  $(am__append_1)
LEVELDB_TARGET_FLAGS =
LIBLEVELDB =  $(am__append_2)
LIBMEMENV =  $(am__append_3)
LIBOBJS =
LIBS = -lanl
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBTOOL_APP_LDFLAGS =
LIPO =
LN_S = ln -s
LRELEASE = /usr/bin/lrelease-qt4
LTLIBOBJS =
LUPDATE = /usr/bin/lupdate-qt4
MAINT =
MAKEINFO = ${SHELL} /home/ran/git/multichain/build-aux/missing makeinfo
MAKENSIS =
MANIFEST_TOOL = :
MINIUPNPC_CPPFLAGS =
MINIUPNPC_LIBS =
MKDIR_P = /bin/mkdir -p
MOC = /usr/bin/moc-qt4
MOC_DEFS = -DHAVE_CONFIG_H -I$(srcdir)
NM = /usr/bin/nm -B
NMEDIT =
OBJCXX = g++
OBJCXXDEPMODE = depmode=gcc3
OBJCXXFLAGS = -g -O2 -Wall -Wextra -Wformat -Wformat-security -Wno-unused-parameter  -Wstack-protector -fstack-protector-all -fPIE
OBJDUMP = objdump
OBJEXT = o
OTOOL =
OTOOL64 =
PACKAGE = bitcoin
PACKAGE_BUGREPORT = info@bitcoin.org
PACKAGE_NAME = Bitcoin Core
PACKAGE_STRING = Bitcoin Core 0.10.0
PACKAGE_TARNAME = bitcoin
PACKAGE_URL =
PACKAGE_VERSION = 0.10.0
PATH_SEPARATOR = :
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR =
PKG_CONFIG_PATH =
PORT =
PROTOBUF_CFLAGS = -pthread
PROTOBUF_LIBS = -pthread -lprotobuf -lpthread
PROTOC = /usr/bin/protoc
PTHREAD_CC = gcc
PTHREAD_CFLAGS = -pthread
PTHREAD_LIBS =
QR_CFLAGS =
QR_LIBS =
QTPLATFORM_CFLAGS =
QTPLATFORM_LIBS =
QTPRINT_CFLAGS =
QTPRINT_LIBS =
QT_CFLAGS = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork
QT_DBUS_CFLAGS = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtDBus -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtXml
QT_DBUS_INCLUDES = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtDBus -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtXml
QT_DBUS_LIBS = -lQtDBus -lQtXml -lQtCore
QT_INCLUDES = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork
QT_LDFLAGS =
QT_LIBS = -lQtGui -lQtNetwork -lQtCore
QT_SELECT = qt4
QT_TEST_CFLAGS = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtTest
QT_TEST_INCLUDES = -DQT_SHARED -I/usr/include/qt4 -I/usr/include/qt4/QtTest
QT_TEST_LIBS = -lQtTest
QT_TRANSLATION_DIR =
RANLIB = /usr/bin/ranlib
RCC = /usr/bin/rcc
RELDFLAGS = -Wl,--exclude-libs,ALL
SED = /bin/sed
SET_MAKE =
SHELL = /bin/bash
SSL_CFLAGS =
SSL_LIBS = -lssl -lcrypto
STRIP = /usr/bin/strip
TESTDEFS =  -DBOOST_TEST_DYN_LINK
UIC = /usr/bin/uic-qt4
USE_QRCODE =
USE_UPNP =
VERSION = 0.10.0
WINDOWS_BITS =
WINDRES =
X11XCB_CFLAGS =
X11XCB_LIBS =
XGETTEXT = /usr/bin/xgettext
abs_builddir = /home/ran/git/multichain/src
abs_srcdir = /home/ran/git/multichain/src
abs_top_builddir = /home/ran/git/multichain
abs_top_srcdir = /home/ran/git/multichain
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN =
ac_ct_OBJCXX = g++
am__include = include
am__leading_dot = .
am__quote =
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
ax_pthread_config =
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias =
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias =
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/ran/git/multichain/build-aux/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com

all: lib/lib$(LIB_NAME).so
install:
	install -c lib/lib$(LIB_NAME).so /usr/lib/

build/multichainlib.o: ../multichain/multichainlib.cpp ../multichain/multichain.h ../chainparams/globals.h ../utils/util.h ../multichain/multichainlib.h  ../permissions/permission.h
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $< -o $@
permissions/multichain_libbitcoin_multichain_a-permission.o: ../permissions/permission.cpp
	  mkdir -p $(@D)
		$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) -I$(srcdir) $(multichain_libbitcoin_multichain_a_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT permissions/multichain_libbitcoin_multichain_a-permission.o -MD -MP -MF permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Tpo -c -o permissions/multichain_libbitcoin_multichain_a-permission.o `test -f 'permissions/permission.cpp' || echo '$(srcdir)/'`permissions/permission.cpp
		$(AM_V_at)$(am__mv) permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Tpo permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Po
	#	$(AM_V_CXX)source='permissions/permission.cpp' object='permissions/multichain_libbitcoin_multichain_a-permission.o' libtool=no \
	#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
	#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(multichain_libbitcoin_multichain_a_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o permissions/multichain_libbitcoin_multichain_a-permission.o `test -f 'permissions/permission.cpp' || echo '$(srcdir)/'`permissions/permission.cpp

permissions/multichain_libbitcoin_multichain_a-permission.obj: permissions/permission.cpp
		$(AM_V_CXX)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(multichain_libbitcoin_multichain_a_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -MT permissions/multichain_libbitcoin_multichain_a-permission.obj -MD -MP -MF permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Tpo -c -o permissions/multichain_libbitcoin_multichain_a-permission.obj `if test -f 'permissions/permission.cpp'; then $(CYGPATH_W) 'permissions/permission.cpp'; else $(CYGPATH_W) '$(srcdir)/permissions/permission.cpp'; fi`
		$(AM_V_at)$(am__mv) permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Tpo permissions/$(DEPDIR)/multichain_libbitcoin_multichain_a-permission.Po
	#	$(AM_V_CXX)source='permissions/permission.cpp' object='permissions/multichain_libbitcoin_multichain_a-permission.obj' libtool=no \
	#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
	#	$(AM_V_CXX_no)$(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(multichain_libbitcoin_multichain_a_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) -c -o permissions/multichain_libbitcoin_multichain_a-permission.obj `if test -f 'permissions/permission.cpp'; then $(CYGPATH_W) 'permissions/permission.cpp'; else $(CYGPATH_W) '$(srcdir)/permissions/permission.cpp'; fi`

build1/buildgenesis.o: ../chainparams/buildgenesis.cpp
	mkdir -p $(@D)
	g++ -I$(srcdir) -c $(CFLAGS) $(BITCOIN_INCLUDES) $(RELDFLAGS) $(AM_LDFLAGS) $< -o $@

lib/lib$(LIB_NAME).so:  build/multichainlib.o build1/buildgenesis.o
	mkdir -p $(@D)
	g++ -I$(srcdir) $(CFLAGS) -L/usr/lib -lbitcoinconsensus -lbitcoin_multichain $^ -shared -Wl,-soname,lib$(LIB_NAME).so -o $@ -include $(shell find build -name "*.d" 2> /dev/null)

clean:
	rm -rf bin build lib
