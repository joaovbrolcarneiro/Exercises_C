void    print_bits(unsigned char octet)
{
   int i;

   for (i = 7; i >= 0; i--)
   {
        if (octet & (1 << i))      // Check if the i-th bit is 1
            write (1, "1", 1);     // Print 1 if the i-th bit is 1
        else
            write (1, "0", 1);     // Print 0 if the i-th bit is 0
   }
}
