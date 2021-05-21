/*pole.c
 * program obliczajacy pole powierzchni prostokata*/
float pole(float n, float m)
{
    if (n >= 0 && m >= 0){
        return n*m;
    }
    else {
        return -1;
    }
}
