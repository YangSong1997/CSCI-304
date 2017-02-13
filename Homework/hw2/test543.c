 #include <stdio.h>

 int main (int argc, char *argv[]) {
 int i=0;
 int j=0;
 int num = 0;
 int currentdigit = 0;
 printf("\ncommand line args count=%d\n", argc);

 /* First argument is executable name only */
 printf("executable name=%s\n", argv[0]);

 for (i=1; i< argc; i++) {
     printf("arg%d=%s\n", i, argv[i]);
 }

 for (i=1; i< argc; i++) {
     for (j = 0; *(argv[i]+j) != 0; j++){
        currentdigit = *(argv[i]+j) -48;
        num = 10*num + currentdigit;
     }
     
     printf("The square of arg%d is %d\n", i, num*num);

     num = 0;

 }

 return 0;
 }