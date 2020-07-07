# general config
CC = cc

# freetype2
FT_INCS = -I/usr/include/freetype2
FT_LIBS = -lfreetype

# fontconfig
FC_INCS = 
FC_LIBS = -lfontconfig

# mpdclient
MPD_INCS =
MPD_LIBS = -lmpdclient

OBJS = dwmbmpd.c utf8.c utf8.h
INCS = ${FT_INCS} ${FC_INCS} ${MPD_INCS}
LIBS = ${FT_LIBS} ${FC_LIBS} ${MPD_LIBS}
