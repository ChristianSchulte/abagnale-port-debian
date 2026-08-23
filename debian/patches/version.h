Description: Adds build host information to HTTP User-Agent headers
Author: Christian Schulte <cs@schulte.it>
Last-Update: 2026-08-22

--- abagnale-0.9698.orig/version.h
+++ abagnale-0.9698/version.h
@@ -17,6 +17,6 @@
 #ifndef VERSION_H
 #define VERSION_H
 
-#define ABAG_REVISION "$Abagnale: v0/9698 2026-08-25 23:53:41Z $"
+#define ABAG_REVISION "Abagnale: v0/9698 2026-08-25 23:53:41Z; @DIST_NAME@ @ARCHITECTURE_NAME@ @PACKAGE@ @BUILD_HOST@ @BUILD_DATE@;"
 
 #endif
