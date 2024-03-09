int main(){
    int n, i;
    int centena = 0, dezena = 0, milhar = 0, unidade = 0;
    scanf("%d", &n);
    int dim = n;
    if (n == 1000)
    printf("M");
    if (n < 1000 && n > 0)
    {
        while(dim >= 100)
        {
            dim = dim - 100;
            centena++;
        }
        while(dim >= 10)
        {
            dim = dim - 10;
            dezena++;
        }
        while(dim != 0)
        {
            dim = dim - 1;
            unidade++;
        }
    }
    if (centena == 9)
    printf("CM");
    if (centena == 8)
    printf("DCCC");
    if (centena == 7)
    printf("DCC");
    if (centena == 6)
    printf("DC");
    if (centena == 5)
    printf("D");
    if (centena == 4)
    printf("CCC");
    if (centena == 2)
    printf("CC");
    if (centena == 1)
    printf("C");
    if (dezena == 9)
    printf("XC");
    if (dezena == 8)
    printf("LXXX");
    if (dezena == 7)
    printf("LXX");
    if (dezena == 6)
    printf("LX");
    if (dezena == 5)
    printf("L");
    if (dezena == 4)
    printf("XL");
    if (dezena == 3)
    printf("XXX");
    if (dezena == 2)
    printf("XX");
    if (dezena == 1)
    printf("X");
    if (unidade == 9)
    printf("IX");
    if (unidade == 8)
    printf("VIII");
    if (unidade == 7)
    printf("VII");
    if (unidade == 6)
    printf("VI");
    if (unidade == 5)
    printf("V");
    if (unidade == 4)
    printf("IV");
    if (unidade == 3)
    printf("III");
    if (unidade == 1)
    printf("I");
 
    return 0;
}