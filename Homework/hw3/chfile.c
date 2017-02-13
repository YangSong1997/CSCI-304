#include <stdio.h>

int main()
{
        FILE *ptr1_file, *ptr2_file;
	char buf[1000], rest[100];
	int num=0;
        int currentdigit;
        char *p; 

	ptr1_file =fopen("f1.txt","r");
	if (!ptr1_file)
      		return 1;

	ptr2_file =fopen("f2.txt","w");
	if (!ptr2_file)
      		return 1;

       	while (fgets(buf,1000, ptr1_file)!=NULL){
         printf("%s", buf);
         p = buf;
         while (*p != ' '){
           currentdigit = *p -48;
           num = 10 * num + currentdigit;
           p++;
         }
         fprintf(ptr2_file,"%d", num+1);

         while (*p != '\0'){
           fprintf(ptr2_file,"%c", *p);
           p++;
         }
         num = 0;

       }
       	fclose(ptr1_file);
       	fclose(ptr2_file);

        return 0;
	}
