{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red128\green128\blue128;\red163\green21\blue21;\red0\green0\blue0;\red0\green0\blue255;\red0\green128\blue128;}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\cf1\f0\fs19\lang9 #include\cf2 <iostream>\cf3\par
\cf1 #include\cf2 <math.h>\cf3\par
\cf4 using\cf3  \cf4 namespace\cf3  std;\par
\cf4 void\cf3  Text_Stat(\cf4 char\cf3 [],\cf4 int\cf3 &, \cf4 int\cf3 &, \cf4 int\cf3 &);\par
\cf4 int\cf3  wordcount(\cf4 char\cf3 []);\par
\cf4 int\cf3  linecount(\cf4 char\cf3 []);\par
\cf4 int\cf3  charcount(\cf4 char\cf3 []);\par
\cf4 void\cf3  main()\par
\{\par
\tab\par
\tab\cf4 char\cf3  a[50];\par
\tab\cf4 int\cf3  lc, wc,cc;\par
\tab cout \cf5 <<\cf3  \cf2 "Enter string "\cf3 ;\par
\par
\tab cin.getline(a,30);\par
\tab Text_Stat(a, lc, wc, cc);\par
\tab cout \cf5 <<\cf3  \cf2 "\\n  line count "\cf5 <<\cf3 lc;\par
\par
\tab cout \cf5 <<\cf3  \cf2 "\\n word count "\cf5 <<\cf3 wc;\par
\par
\tab cout \cf5 <<\cf3  \cf2 "\\n character count "\cf5 <<\cf3 cc;\par
\par
\tab getchar();\par
\}\par
\cf4 void\cf3  Text_Stat(\cf4 char\cf3  \cf1 a\cf3 [],\cf4 int\cf3  & \cf1 lc\cf3 ,\cf4 int\cf3  & \cf1 wc\cf3 ,\cf4 int\cf3  & \cf1 cc\cf3  ) \{\par
\par
\tab\cf1 wc\cf3  = wordcount(\cf1 a\cf3 );\par
\tab\cf1 lc\cf3  = linecount(\cf1 a\cf3 );\par
\tab\cf1 cc\cf3  = charcount(\cf1 a\cf3 );\par
\par
\par
\par
\}\par
\cf4 int\cf3  wordcount(\cf4 char\cf3  \cf1 a\cf3 []) \{\par
\tab\cf4 int\cf3  i, j, k, l;\par
\tab l = strlen(\cf1 a\cf3 );\par
\tab j = 1;\par
\tab\cf4 for\cf3  (i = 0; i < l; i++) \{\par
\tab\tab\cf4 if\cf3  (\cf1 a\cf3 [i] == \cf2 ' '\cf3 ) \{\par
\tab\tab\tab j = j + 1;\par
\tab\tab\tab\cf4 while\cf3  (\cf1 a\cf3 [i] == \cf2 ' '\cf3 ) \{\par
\tab\tab\tab\tab i++;\par
\tab\tab\tab\}\par
\tab\tab\}\par
\tab\}\par
\tab\cf4 return\cf3  j;\par
\}\par
\cf4 int\cf3  linecount(\cf4 char\cf3  \cf1 a\cf3 []) \{\par
\tab\cf4 int\cf3  i, j, k, l;\par
\tab l = strlen(\cf1 a\cf3 );\par
\tab j = 1;\par
\tab\cf4 for\cf3  (i = 0; i < l; i++)\par
\tab\{\par
\tab\tab\cf4 if\cf3  (\cf1 a\cf3 [i]==\cf2 '\\n'\cf3 )\par
\tab\tab\tab j = j + 1;\par
\tab\par
\tab\}\par
\par
\par
\par
\tab\cf4 return\cf3  j;\par
\}\par
\cf4 int\cf3  charcount(\cf4 char\cf3  \cf1 a\cf3 []) \{\par
\tab\cf4 int\cf3  i, j, k, l;\par
\tab\par
\tab\cf4 for\cf3  (i = 0; \cf1 a\cf3 [i] != \cf2 '\\0'\cf3 ; i++);\par
\par
\par
\par
\tab\tab\cf4 return\cf3  i;\par
\}\cf0\f1\fs22\par
}
 