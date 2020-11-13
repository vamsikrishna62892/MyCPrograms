#include<stdio.h>
#include<conio.h>
#include<time.h>

/*
Specifier	        Replaced By	                      Example
    %a	      Abbreviated weekday name	                Sun
    %A	      Full weekday name	                        Sunday
    %b	      Abbreviated month name	                Mar
    %B	      Full month name	                        March
    %c	      Date and time representation	            Sun Aug 19 02:56:02 2012
    %d	      Day of the month (01-31)	                19
    %H	      Hour in 24h format (00-23)	            14
    %I	      Hour in 12h format (01-12)	            05
    %j	      Day of the year (001-366)	                231
    %m	      Month as a decimal number (01-12)	        08
    %M	      Minute (00-59)	                        55
    %p	      AM or PM designation	                    PM
    %S	      Second (00-61)	                        02
    %U	      Week number with the first Sunday
              as the first day of week one (00-53)	    33
    %w	      Weekday as a decimal number with
              Sunday as 0 (0-6)	                        4
    %W	      Week number with the first Monday as
              the first day of week one (00-53)	        34
    %x	      Date representation	                    08/19/12
    %X	      Time representation	                    02:50:06
    %y	      Year, last two digits (00-99)	            01
    %Y	      Year	                                    2012
    %Z	      Timezone name or abbreviation	            CDT
    %%	      A % sign	                                %
*/
/* syntax
size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)
*/

int main(){
    struct tm *ptr;
    time_t t;
    char str[200];

    t = time(NULL);
    ptr = localtime(&t);

    strftime(str,200,"It is now %x and %X in 24 hrs format is %H:%M:%S and the current timezone is %Z",ptr);
    puts(str);
    getch();
    return 0;
}
