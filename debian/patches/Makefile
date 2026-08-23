Description: Updates the clean target to remove the binaries and enables debug symbols
Author: Christian Schulte <cs@schulte.it>
Last-Update: 2026-08-22

--- abagnale-0.9694.orig/Makefile
+++ abagnale-0.9694/Makefile
@@ -39,7 +39,7 @@ INCLUDES+=-I/usr/local/include
 INCLUDES+=-I/usr/local/include/postgresql
 
 DEBUG=
-#DEBUG+=-g
+DEBUG+=-g
 #DEBUG+=-O0
 #DEBUG+=-DABAG_HTTP_DEBUG
 #DEBUG+=-DABAG_MATH_DEBUG
@@ -136,6 +136,8 @@ CFLAGS+=-DWCHAR_T_UTF32
 #CFLAGS+=-DWCHAR_T_UTF8
 CFLAGS+=-pedantic
 CFLAGS+=-O3
+CFLAGS+=-march=native
+CFLAGS+=-mtune=native
 
 LDFLAGS=$(DEBUG) $(PROFILE) $(LTO)
 LDFLAGS+=-L/usr/local/lib
@@ -227,7 +229,7 @@ FORMATSRC+=time.c
 FORMATSRC+=database-postgresql.pgc
 FORMATSRC+=math-postgresql.c
 
-CLEAN=$(OBJS) database-postgresql.c y.tab.h
+CLEAN=$(OBJS) database-postgresql.c y.tab.h abagnale abagnalectl
 
 all: abagnale abagnalectl
 
