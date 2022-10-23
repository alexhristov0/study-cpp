#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

void printSizesAndRanges(void);

int main(void)
{
  printSizesAndRanges();
}

// Prints sizes and ranges for each C11's data types
void printSizesAndRanges()
{
  printf("\n");
  printf("Size and range of C data types\n\n");
  printf("Type               Bytes            MIN                   MAX\n");
  printf("=========          =====            ===========           ===========\n\n");
  printf("Ranges for integer data types in C\n\n");
  printf("char               %5lu   %20d  %20lu\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char      %5lu   %20lu  %20lu\n", sizeof(unsigned char), 0, UCHAR_MAX);
  printf("short              %5lu   %20d  %20lu\n", sizeof(short), SHRT_MIN, SHRT_MAX);
  printf("unsigned short     %5lu   %20lu  %20lu\n", sizeof(unsigned short), 0, USHRT_MAX);
  printf("int                %5lu   %20d  %20lu\n", sizeof(int), INT_MIN, INT_MAX);
  printf("unsigned int       %5lu   %20lu  %20lu\n", sizeof(unsigned int), 0, UINT_MAX);
  printf("unsigned           %5lu   %20lu  %20lu\n", sizeof(unsigned), 0, UINT_MAX);
  printf("long               %5lu   %20d  %20lu\n", sizeof(long), LONG_MIN, LONG_MAX);
  printf("unsigned long      %5lu   %20lu  %20lu\n", sizeof(unsigned long), 0, ULONG_MAX);
  printf("\n");
  printf("Ranges for real number data types in C\n\n");
  printf("float              %5lu   %20.7g  %20.7g\n", sizeof(float), FLT_MIN, FLT_MAX);
  printf("double             %5lu   %20.7g  %20.7g\n", sizeof(double), DBL_MIN, DBL_MAX);
  printf("long double        %5lu   %20.7g  %20.7g\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
  printf("\n");
  printf("bool               %5lu   %20lu  %20lu\n", sizeof(bool), false, true);
  printf("\n");
  /*
    printf("int8_t             %lu   %20lu  %20lu\n", sizeof(int8_t), SCHAR_MIN, SCHAR_MAX);
    printf("uint8_t            %lu   %20lu  %20lu\n", sizeof(uint8_t));
    printf("int16_t            %lu   %20lu  %20lu\n", sizeof(int16_t));
    printf("uint16t            %lu   %20lu  %20lu\n", sizeof(uint16_t));
    printf("int32_t            %lu   %20lu  %20lu\n", sizeof(int32_t));
    printf("uint32_t           %lu   %20lu  %20lu\n", sizeof(uint32_t));
    printf("long long          %lu   %20lu  %20lu\n", sizeof(long long));
    printf("int64_t            %lu   %20lu  %20lu\n", sizeof(int64_t));
    printf("unsigned long long %lu   %20lu  %20lu\n", sizeof(unsigned long long));
    printf("uint64_t           %lu   %20lu  %20lu\n", sizeof(uint64_t));
    printf("\n");
    printf("float              %lu   %20lu  %20lu\n", sizeof(float));
    printf("double             %lu   %20lu  %20lu\n", sizeof(double));
    printf("long double        %lu   %20lu  %20lu\n", sizeof(long double));
    printf("\n");
    printf("bool               %lu   %20lu  %20lu\n", sizeof(bool));
    printf("\n");
  */
}
