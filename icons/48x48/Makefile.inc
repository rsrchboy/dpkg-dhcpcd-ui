SRCDIR=		../../scalable

# .PATH is for BSD make, VPATH is for GNU make
.PATH:		${SRCDIR}/${CATEGORY}
VPATH+=		${SRCDIR}/${CATEGORY}

SIZE=		48

TOPDIR=         ../../..
include ${TOPDIR}/config.mk
include ${MKDIR}/icon.mk