#include <stdio.h>

main()
{
    int n, v, array[5];

    for (n = 0; n < 5 && get_int(&v) != EOF; n++)
        array[n] = v;

    for (n = 0; n < 5; n++)
        printf("%d ", array[n]);
    printf("\n");
}

get_int(pn) /* get next integer from input */
int *pn;
{
  int c, sign;

  while ((c = getchar()) == ' ' || c == '\n' || c == '\t')
  ;   /* skip white space */
  sign = 1;
  if (c == '+' || c == '-') { /* record sign */
    sign = (c=='+') ? 1 : -1;
    c = getchar();
  }
  for (*pn = 0; c >= '0' && c <= '9'; c = getchar())
    *pn = 10 * *pn + c - '0';
  *pn *= sign;
  if (c != EOF)
    ungetc(c, stdin); // non characters are handled by this line
    // it is put on the input field and is read next time by getchar()
    //on the next loop the 'a' character is ignored
    //
  return(c);
}
