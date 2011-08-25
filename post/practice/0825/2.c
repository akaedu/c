#include <stdio.h>

int main(int argc, const char *argv[])
{
        char *mon[13] = {NULL,"January","Febrary","March","April","May","June","July",
                "August","September","October","November","December"};

        int year, month, day, ret;
        
        if(argc != 2)
        {
                printf("Please Usage : ./XX 8/25/2011\n");
                return 0;
        }
        ret = sscanf(argv[1], "%d/%d/%d", &month, &day, &year);
        if(ret != 3)
        {
                printf("Error!\n");
                return 0;
        }
        printf("%s %d, %d\n", mon[month], day, year);

        return 0;
}
