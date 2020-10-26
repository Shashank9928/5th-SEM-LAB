#include <stdio.h>

int main ()
{
  FILE *fp, *ft;
  char ch, nextc;
  fp = fopen ("c_file.c", "r");
  ft = fopen ("com_removed.c", "w");
  if (fp == NULL)
       printf ("Opening error");
  if (ft == NULL)
       printf ("Opening error");
  nextc = fgetc (fp);
  while (nextc != EOF)
  {
     ch = nextc;
     nextc = fgetc (fp);

     if ((ch == '/') && (nextc == '*')) 
     {
        ch = fgetc (fp);
        nextc = fgetc (fp);
        while (!((ch == '*') && (nextc == '/'))) /* unroll until the end of comment*/
        {
          ch = nextc;
          nextc = fgetc (fp);
        }
        nextc = fgetc (fp);
        continue;
     }else if((ch=='/') && (nextc == '/')) // block to handle single line comment.
     {
        nextc = fgetc (fp);
        while (!(nextc == '\n')){
           nextc = fgetc (fp);
        }
       nextc = fgetc (fp);
       continue;
     }
     putc (ch, ft);
   }
  fclose (fp);
  fclose (ft);
  return 0;
 }