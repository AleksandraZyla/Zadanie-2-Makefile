/*objetosc.c
 * program obliczajacy objetosc prostopadloscianu */
float objetosc(float n, float m, float h){
    if (n >= 0 && m >= 0 && h >= 0){
        return n*m*h;
    }
    else {
        return -1;
    }

}
