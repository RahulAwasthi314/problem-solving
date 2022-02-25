/**
 * @file taumBday.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/taum-and-bday/
 * 
 */

long taumBday(long b, long w, long bc, long wc, long z) {
    if (bc == wc or (bc != wc and z >= abs(bc - wc)) ) return (b * bc + w * wc);
    if (bc != wc) {
        if (z < bc - wc) return (b + w) * wc + b * z;
        if (z < wc - bc) return (b + w) * bc + w * z;
    }
    return 0;
}

long taumBday(long b, long w, long bc, long wc, long z) {
    // one liner approach
    return b * min(bc, wc+z) + c * min(wc, bc+z);
}