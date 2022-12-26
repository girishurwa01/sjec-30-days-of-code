#include <stdio.h>
int main(){
    int i;
for ( i = 3; i < 12; i++){
    {
        printf("%d\n",i);
    }
    if (i%3==0)
    {
        printf("foo\n");
    }
 if (i%2==0)
{
    printf("bar\n");
}
if(i%2==1)
{
    printf("baz\n");
}
}
    
    return 0;
}