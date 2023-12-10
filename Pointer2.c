#include<stdio.h>

int main()
{



    int no = 11;
    int *p = &no;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%dn",sizeof (no));
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    printf("%d\n",sizeof(p));

    return 0;
    


}