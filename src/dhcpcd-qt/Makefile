#############################################################################
# Makefile for building: dhcpcd-qt
# Generated by qmake (2.01a) (Qt 4.8.6) on: Wed Sep 17 12:16:26 2014
# Project:  dhcpcd-qt.pro
# Template: app
# Command: /usr/pkg/qt4/bin/qmake CONFIG+=has_libintl PREFIX=/usr/local MANDIR=/usr/local/share/man -o Makefile dhcpcd-qt.pro
#############################################################################

####### Compiler, tools and options

CC            = clang
CXX           = clang++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -O2 -I/usr/pkg/include -I/usr/include -I/usr/pkg/qt4/include -I/usr/pkg/include/freetype2 -I/usr/pkg/include/libdrm -g -D_REENTRANT $(DEFINES)
CXXFLAGS      = -O2 -I/usr/pkg/include -I/usr/include -I/usr/pkg/qt4/include -I/usr/pkg/include/freetype2 -I/usr/pkg/include/libdrm -DQ_TRAILING_DIR_SEP -std=c++11 -O2 -g -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/pkg/qt4/mkspecs/default -I. -I$(QTDIR)/include/QtCore -I$(QTDIR)/include/QtGui -I$(QTDIR)/include -I../.. -I../libdhcpcd -I. -I/usr/pkg/include
LINK          = $(LIBTOOL) --mode=link clang++
LFLAGS        = $(LDFLAGS) -L$(QTDIR)/lib -pthread -Wl,-R/usr/pkg/qt4/lib
LIBS          = $(SUBLIBS)  -L/usr/pkg/lib -L$(QTDIR)/lib -L../libdhcpcd ../libdhcpcd/libdhcpcd.a -lintl -lQtGui -lQtCore 
AR            = ar ru
RANLIB        = true
QMAKE         = /usr/pkg/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
LIBTOOL       = libtool --silent
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = /bin/mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		dhcpcd-qt.cpp \
		dhcpcd-about.cpp \
		dhcpcd-preferences.cpp \
		dhcpcd-wi.cpp \
		dhcpcd-ifmenu.cpp \
		dhcpcd-ssidmenu.cpp \
		dhcpcd-ipv4validator.cpp moc_dhcpcd-qt.cpp \
		moc_dhcpcd-about.cpp \
		moc_dhcpcd-preferences.cpp \
		moc_dhcpcd-wi.cpp \
		moc_dhcpcd-ifmenu.cpp \
		moc_dhcpcd-ssidmenu.cpp \
		moc_dhcpcd-ipv4validator.cpp
OBJECTS       = main.lo \
		dhcpcd-qt.lo \
		dhcpcd-about.lo \
		dhcpcd-preferences.lo \
		dhcpcd-wi.lo \
		dhcpcd-ifmenu.lo \
		dhcpcd-ssidmenu.lo \
		dhcpcd-ipv4validator.lo \
		moc_dhcpcd-qt.lo \
		moc_dhcpcd-about.lo \
		moc_dhcpcd-preferences.lo \
		moc_dhcpcd-wi.lo \
		moc_dhcpcd-ifmenu.lo \
		moc_dhcpcd-ssidmenu.lo \
		moc_dhcpcd-ipv4validator.lo
DIST          = /usr/pkg/qt4/mkspecs/common/unix.conf \
		/usr/pkg/qt4/mkspecs/qconfig.pri \
		/usr/pkg/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/pkg/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/pkg/qt4/mkspecs/features/qt_functions.prf \
		/usr/pkg/qt4/mkspecs/features/qt_config.prf \
		/usr/pkg/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/pkg/qt4/mkspecs/features/default_pre.prf \
		/usr/pkg/qt4/mkspecs/features/debug.prf \
		/usr/pkg/qt4/mkspecs/features/default_post.prf \
		/usr/pkg/qt4/mkspecs/features/qt.prf \
		/usr/pkg/qt4/mkspecs/features/unix/thread.prf \
		/usr/pkg/qt4/mkspecs/features/moc.prf \
		/usr/pkg/qt4/mkspecs/features/shared.prf \
		/usr/pkg/qt4/mkspecs/features/warn_on.prf \
		/usr/pkg/qt4/mkspecs/features/resources.prf \
		/usr/pkg/qt4/mkspecs/features/uic.prf \
		/usr/pkg/qt4/mkspecs/features/yacc.prf \
		/usr/pkg/qt4/mkspecs/features/lex.prf \
		/usr/pkg/qt4/mkspecs/features/include_source_dir.prf \
		dhcpcd-qt.pro
QMAKE_TARGET  = dhcpcd-qt
DESTDIR       = 
TARGETL       = 
TARGET        = dhcpcd-qt

first: all
####### Implicit rules

.SUFFIXES: .lo .c .cpp .cc .cxx .C

.cpp.lo:
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.lo:
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.lo:
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.lo:
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.lo:
	$(LIBTOOL) --mode=compile $(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: dhcpcd-qt.pro  /usr/pkg/qt4/mkspecs/default/qmake.conf /usr/pkg/qt4/mkspecs/common/unix.conf \
		/usr/pkg/qt4/mkspecs/qconfig.pri \
		/usr/pkg/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/pkg/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/pkg/qt4/mkspecs/features/qt_functions.prf \
		/usr/pkg/qt4/mkspecs/features/qt_config.prf \
		/usr/pkg/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/pkg/qt4/mkspecs/features/default_pre.prf \
		/usr/pkg/qt4/mkspecs/features/debug.prf \
		/usr/pkg/qt4/mkspecs/features/default_post.prf \
		/usr/pkg/qt4/mkspecs/features/qt.prf \
		/usr/pkg/qt4/mkspecs/features/unix/thread.prf \
		/usr/pkg/qt4/mkspecs/features/moc.prf \
		/usr/pkg/qt4/mkspecs/features/shared.prf \
		/usr/pkg/qt4/mkspecs/features/warn_on.prf \
		/usr/pkg/qt4/mkspecs/features/resources.prf \
		/usr/pkg/qt4/mkspecs/features/uic.prf \
		/usr/pkg/qt4/mkspecs/features/yacc.prf \
		/usr/pkg/qt4/mkspecs/features/lex.prf \
		/usr/pkg/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) CONFIG+=has_libintl PREFIX=/usr/local MANDIR=/usr/local/share/man -o Makefile dhcpcd-qt.pro
/usr/pkg/qt4/mkspecs/common/unix.conf:
/usr/pkg/qt4/mkspecs/qconfig.pri:
/usr/pkg/qt4/mkspecs/modules/qt_phonon.pri:
/usr/pkg/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/pkg/qt4/mkspecs/features/qt_functions.prf:
/usr/pkg/qt4/mkspecs/features/qt_config.prf:
/usr/pkg/qt4/mkspecs/features/exclusive_builds.prf:
/usr/pkg/qt4/mkspecs/features/default_pre.prf:
/usr/pkg/qt4/mkspecs/features/debug.prf:
/usr/pkg/qt4/mkspecs/features/default_post.prf:
/usr/pkg/qt4/mkspecs/features/qt.prf:
/usr/pkg/qt4/mkspecs/features/unix/thread.prf:
/usr/pkg/qt4/mkspecs/features/moc.prf:
/usr/pkg/qt4/mkspecs/features/shared.prf:
/usr/pkg/qt4/mkspecs/features/warn_on.prf:
/usr/pkg/qt4/mkspecs/features/resources.prf:
/usr/pkg/qt4/mkspecs/features/uic.prf:
/usr/pkg/qt4/mkspecs/features/yacc.prf:
/usr/pkg/qt4/mkspecs/features/lex.prf:
/usr/pkg/qt4/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) CONFIG+=has_libintl PREFIX=/usr/local MANDIR=/usr/local/share/man -o Makefile dhcpcd-qt.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/dhcpcd-qt1.0.0 || $(MKDIR) .tmp/dhcpcd-qt1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/dhcpcd-qt1.0.0/ && $(COPY_FILE) --parents dhcpcd-qt.h dhcpcd-about.h dhcpcd-preferences.h dhcpcd-wi.h dhcpcd-ifmenu.h dhcpcd-ssidmenu.h dhcpcd-ipv4validator.h .tmp/dhcpcd-qt1.0.0/ && $(COPY_FILE) --parents main.cpp dhcpcd-qt.cpp dhcpcd-about.cpp dhcpcd-preferences.cpp dhcpcd-wi.cpp dhcpcd-ifmenu.cpp dhcpcd-ssidmenu.cpp dhcpcd-ipv4validator.cpp .tmp/dhcpcd-qt1.0.0/ && (cd `dirname .tmp/dhcpcd-qt1.0.0` && $(TAR) dhcpcd-qt1.0.0.tar dhcpcd-qt1.0.0 && $(COMPRESS) dhcpcd-qt1.0.0.tar) && $(MOVE) `dirname .tmp/dhcpcd-qt1.0.0`/dhcpcd-qt1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/dhcpcd-qt1.0.0


clean:compiler_clean 
	-$(LIBTOOL) --mode=clean $(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) ${TARGET}
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(LIBTOOL) --mode=clean $(DEL_FILE) $(TARGET)
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_dhcpcd-qt.cpp moc_dhcpcd-about.cpp moc_dhcpcd-preferences.cpp moc_dhcpcd-wi.cpp moc_dhcpcd-ifmenu.cpp moc_dhcpcd-ssidmenu.cpp moc_dhcpcd-ipv4validator.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_dhcpcd-qt.cpp moc_dhcpcd-about.cpp moc_dhcpcd-preferences.cpp moc_dhcpcd-wi.cpp moc_dhcpcd-ifmenu.cpp moc_dhcpcd-ssidmenu.cpp moc_dhcpcd-ipv4validator.cpp
moc_dhcpcd-qt.cpp: dhcpcd-wi.h \
		dhcpcd-qt.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-qt.h -o moc_dhcpcd-qt.cpp

moc_dhcpcd-about.cpp: dhcpcd-about.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-about.h -o moc_dhcpcd-about.cpp

moc_dhcpcd-preferences.cpp: dhcpcd-preferences.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-preferences.h -o moc_dhcpcd-preferences.cpp

moc_dhcpcd-wi.cpp: dhcpcd-wi.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-wi.h -o moc_dhcpcd-wi.cpp

moc_dhcpcd-ifmenu.cpp: dhcpcd-ifmenu.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-ifmenu.h -o moc_dhcpcd-ifmenu.cpp

moc_dhcpcd-ssidmenu.cpp: dhcpcd-ssidmenu.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-ssidmenu.h -o moc_dhcpcd-ssidmenu.cpp

moc_dhcpcd-ipv4validator.cpp: dhcpcd-ipv4validator.h
	$(QTDIR)/bin/moc $(DEFINES) $(INCPATH) dhcpcd-ipv4validator.h -o moc_dhcpcd-ipv4validator.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.lo: main.cpp dhcpcd-qt.h \
		dhcpcd-wi.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.lo main.cpp

dhcpcd-qt.lo: dhcpcd-qt.cpp dhcpcd-qt.h \
		dhcpcd-wi.h \
		dhcpcd-about.h \
		dhcpcd-preferences.h \
		dhcpcd-ifmenu.h \
		dhcpcd-ssidmenu.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-qt.lo dhcpcd-qt.cpp

dhcpcd-about.lo: dhcpcd-about.cpp dhcpcd-about.h \
		dhcpcd-qt.h \
		dhcpcd-wi.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-about.lo dhcpcd-about.cpp

dhcpcd-preferences.lo: dhcpcd-preferences.cpp dhcpcd-preferences.h \
		dhcpcd-ipv4validator.h \
		dhcpcd-qt.h \
		dhcpcd-wi.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-preferences.lo dhcpcd-preferences.cpp

dhcpcd-wi.lo: dhcpcd-wi.cpp dhcpcd-wi.h \
		dhcpcd-qt.h \
		dhcpcd-ifmenu.h \
		dhcpcd-ssidmenu.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-wi.lo dhcpcd-wi.cpp

dhcpcd-ifmenu.lo: dhcpcd-ifmenu.cpp dhcpcd-ifmenu.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-ifmenu.lo dhcpcd-ifmenu.cpp

dhcpcd-ssidmenu.lo: dhcpcd-ssidmenu.cpp dhcpcd-qt.h \
		dhcpcd-wi.h \
		dhcpcd-ssidmenu.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-ssidmenu.lo dhcpcd-ssidmenu.cpp

dhcpcd-ipv4validator.lo: dhcpcd-ipv4validator.cpp dhcpcd-ipv4validator.h
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o dhcpcd-ipv4validator.lo dhcpcd-ipv4validator.cpp

moc_dhcpcd-qt.lo: moc_dhcpcd-qt.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-qt.lo moc_dhcpcd-qt.cpp

moc_dhcpcd-about.lo: moc_dhcpcd-about.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-about.lo moc_dhcpcd-about.cpp

moc_dhcpcd-preferences.lo: moc_dhcpcd-preferences.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-preferences.lo moc_dhcpcd-preferences.cpp

moc_dhcpcd-wi.lo: moc_dhcpcd-wi.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-wi.lo moc_dhcpcd-wi.cpp

moc_dhcpcd-ifmenu.lo: moc_dhcpcd-ifmenu.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-ifmenu.lo moc_dhcpcd-ifmenu.cpp

moc_dhcpcd-ssidmenu.lo: moc_dhcpcd-ssidmenu.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-ssidmenu.lo moc_dhcpcd-ssidmenu.cpp

moc_dhcpcd-ipv4validator.lo: moc_dhcpcd-ipv4validator.cpp 
	$(LIBTOOL) --mode=compile $(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dhcpcd-ipv4validator.lo moc_dhcpcd-ipv4validator.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/bin/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/bin/ 
	-$(LIBTOOL) --mode=install cp "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/usr/local/bin/"

uninstall_target:  FORCE
	-$(LIBTOOL) --mode=uninstall "$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/bin/ 


install_man8: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/share/man/man8/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/share/man/man8/ 
	-$(INSTALL_FILE) /tmp/dhcpcd-ui-0.7.2/src/dhcpcd-qt/dhcpcd-qt.8 $(INSTALL_ROOT)/usr/local/share/man/man8/


uninstall_man8:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/local/share/man/man8/dhcpcd-qt.8
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/share/man/man8/ 


install_desktop: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/share/applications/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/share/applications/ 
	-$(INSTALL_FILE) /tmp/dhcpcd-ui-0.7.2/src/dhcpcd-qt/dhcpcd-qt.desktop $(INSTALL_ROOT)/usr/local/share/applications/


uninstall_desktop:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/local/share/applications/dhcpcd-qt.desktop
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/share/applications/ 


install_autostart: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/local/share/autostart/ || $(MKDIR) $(INSTALL_ROOT)/usr/local/share/autostart/ 
	-$(INSTALL_FILE) /tmp/dhcpcd-ui-0.7.2/src/dhcpcd-qt/dhcpcd-qt.desktop $(INSTALL_ROOT)/usr/local/share/autostart/


uninstall_autostart:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/usr/local/share/autostart/dhcpcd-qt.desktop
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/local/share/autostart/ 


install:  install_target install_man8 install_desktop install_autostart  FORCE

uninstall: uninstall_target uninstall_man8 uninstall_desktop uninstall_autostart   FORCE

FORCE:

