/*
A: sizeof returns an unsigned number so the result of maxbytes-sizeof(val) is always non-negative
*/

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes >= sizeof(val)) memcpy(buf, (void *) &val, sizeof(val));    
}
