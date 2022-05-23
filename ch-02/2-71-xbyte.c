/*
A. The code extend the signed byte to 32-bit int by adding leading zeros which is not correct.
*/
typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
    int offset = 3 - bytenum;
    return ((int) word << (offset << 3)) >> (3 << 3);
}