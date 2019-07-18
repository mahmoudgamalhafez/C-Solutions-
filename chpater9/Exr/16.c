/*Condense the fact function in the same way we condensed power.*/
int fact(int n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}