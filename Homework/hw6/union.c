# include<stdio.h>
# include<string.h>
union {
   int   i[2];
   short s[3];
   char  c[6];
} yew;

int main()
{
   yew.i[0] = 0x12345678;
   yew.i[1] = 0xfedca987;
   printf("%04hx %04hx %04hx\n",yew.s[0],yew.s[1],yew.s[2]);
   strcpy(yew.c,"ABCDE");
   printf("%08x %08x\n",yew.i[0],yew.i[1]);
   yew.s[0]=0xa1b2;
   yew.s[1]=0xc3d4;
   yew.s[2]=0xe5f6;
   yew.s[3]=0x1728;
   printf("%08x %08x\n",yew.i[0],yew.i[1]);
   return 0;
}
